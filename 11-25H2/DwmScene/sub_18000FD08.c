/*
 * XREFs of sub_18000FD08 @ 0x18000FD08
 * Callers:
 *     sub_18000D6F0 @ 0x18000D6F0 (sub_18000D6F0.c)
 *     sub_18000F2AC @ 0x18000F2AC (sub_18000F2AC.c)
 *     sub_18000FBF0 @ 0x18000FBF0 (sub_18000FBF0.c)
 *     sub_18000FD70 @ 0x18000FD70 (sub_18000FD70.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000FD08(__int64 a1)
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
