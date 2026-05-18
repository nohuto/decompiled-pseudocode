/*
 * XREFs of sub_18000DA8C @ 0x18000DA8C
 * Callers:
 *     sub_18000D6E8 @ 0x18000D6E8 (sub_18000D6E8.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_18000DA8C(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi
  void *v5; // rbx
  HANDLE ProcessHeap; // rax
  void *v7; // rbx
  HANDLE v8; // rax
  BOOL result; // eax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = v1 + 80LL * *(unsigned __int16 *)(a1 + 32);
  if ( v1 != v3 )
  {
    v4 = v1 + 64;
    do
    {
      v5 = *(void **)v4;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v5);
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)(v4 + 8) = 0LL;
      v4 += 80LL;
    }
    while ( v4 - 64 != v3 );
  }
  v7 = *(void **)(a1 + 24);
  v8 = GetProcessHeap();
  result = HeapFree(v8, 0, v7);
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
