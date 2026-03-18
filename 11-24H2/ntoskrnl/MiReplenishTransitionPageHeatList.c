/*
 * XREFs of MiReplenishTransitionPageHeatList @ 0x1404D6A8C
 * Callers:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x1402EDA94 (MmCopyToCachedPage.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 */

void MiReplenishTransitionPageHeatList()
{
  struct _SLIST_ENTRY *Pool; // rax

  while ( LOWORD(stru_140E35C40.Alignment) < 0x40u )
  {
    Pool = (struct _SLIST_ENTRY *)MiAllocatePool(0x40uLL, 0x90uLL, 1816685901);
    if ( !Pool )
    {
      _InterlockedExchange(&dword_140E35C50, 32);
      return;
    }
    RtlpInterlockedPushEntrySList(&stru_140E35C40, Pool);
  }
}
