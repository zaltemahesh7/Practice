// Enter n4
//  A A A A
//  B B B B
//  C C C C
//  D D D D

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n ";
    cin >> n;
    int i = 1;
    int count = 0;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i - 1;
            cout << " " << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}