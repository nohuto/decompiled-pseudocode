/*
 * XREFs of sub_18000D66C @ 0x18000D66C
 * Callers:
 *     sub_1800E2CE0 @ 0x1800E2CE0 (sub_1800E2CE0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000D66C(_QWORD *a1)
{
  _QWORD *v1; // rbp
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  void *v4; // rbx
  HANDLE ProcessHeap; // rax

  v1 = a1 + 10;
  v2 = a1;
  do
  {
    v3 = (_QWORD *)*v2;
    while ( v3 )
    {
      v4 = v3;
      v3 = (_QWORD *)v3[1];
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
    }
    *v2++ = 0LL;
  }
  while ( v2 != v1 );
}
