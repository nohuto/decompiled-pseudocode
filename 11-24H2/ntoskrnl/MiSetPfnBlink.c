/*
 * XREFs of MiSetPfnBlink @ 0x1403F8930
 * Callers:
 *     MiUnlinkPageFromBadList @ 0x1403F6AAC (MiUnlinkPageFromBadList.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiAllocateEnclavePages @ 0x1403F85DC (MiAllocateEnclavePages.c)
 *     MiReplenishPageSlist @ 0x1404F1A70 (MiReplenishPageSlist.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnBlink(__int64 a1, __int64 a2, int a3)
{
  signed __int64 v3; // r9
  signed __int64 v5; // r10
  signed __int64 v6; // rax
  signed __int64 v7; // rcx

  v3 = *(_QWORD *)(a1 + 24);
  v5 = a2 ^ v3;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 24) = a2 ^ v5 & 0xFFFFFF0000000000uLL;
  }
  else
  {
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), a2 ^ v5 & 0xFFFFFF0000000000uLL, v3);
    if ( v3 != v6 )
    {
      do
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(a1 + 24),
               a2 ^ (a2 ^ v6) & 0xFFFFFF0000000000uLL,
               v6);
      }
      while ( v7 != v6 );
    }
  }
}
