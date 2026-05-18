/*
 * XREFs of sub_18000D608 @ 0x18000D608
 * Callers:
 *     sub_18000D55C @ 0x18000D55C (sub_18000D55C.c)
 * Callees:
 *     sub_18000D9AC @ 0x18000D9AC (sub_18000D9AC.c)
 */

void __fastcall sub_18000D608(char **a1)
{
  char **v1; // rbp
  char **v2; // rdi
  char *v3; // rsi
  char *v4; // rbx
  HANDLE ProcessHeap; // rax

  v1 = a1 + 10;
  v2 = a1;
  do
  {
    v3 = *v2;
    while ( v3 )
    {
      v4 = v3;
      v3 = (char *)*((_QWORD *)v3 + 1);
      sub_18000D9AC(v4 + 16);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
    }
    *v2++ = 0LL;
  }
  while ( v2 != v1 );
}
