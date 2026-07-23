/*
 * XREFs of MiReplenishTransitionPageHeatList @ 0x1404CFEDC
 * Callers:
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

void MiReplenishTransitionPageHeatList()
{
  _SLIST_ENTRY *Pool; // rax

  while ( LOWORD(stru_140E35D80.Alignment) < 0x40u )
  {
    Pool = (_SLIST_ENTRY *)MiAllocatePool(0x40uLL, 0x90uLL, 1816685901);
    if ( !Pool )
    {
      _InterlockedExchange(&dword_140E35D90, 32);
      return;
    }
    RtlpInterlockedPushEntrySList(&stru_140E35D80, Pool);
  }
}
