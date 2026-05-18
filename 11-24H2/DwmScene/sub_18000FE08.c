/*
 * XREFs of sub_18000FE08 @ 0x18000FE08
 * Callers:
 *     sub_18000D7D0 @ 0x18000D7D0 (sub_18000D7D0.c)
 *     sub_18000F3AC @ 0x18000F3AC (sub_18000F3AC.c)
 *     sub_18000FCF0 @ 0x18000FCF0 (sub_18000FCF0.c)
 *     sub_18000FE70 @ 0x18000FE70 (sub_18000FE70.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000FE08(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rbx
  HANDLE ProcessHeap; // rax

  v2 = *(volatile signed __int32 **)a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(volatile signed __int32 **)a1;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, (LPVOID)v3);
    }
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
