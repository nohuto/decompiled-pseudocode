/*
 * XREFs of MiReplenishTransitionPageHeatList @ 0x1404D7C5C
 * Callers:
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 */

void MiReplenishTransitionPageHeatList()
{
  _SLIST_ENTRY *Pool; // rax

  while ( LOWORD(stru_140E35A00.Alignment) < 0x40u )
  {
    Pool = (_SLIST_ENTRY *)MiAllocatePool(0x40uLL, 0x90uLL, 1816685901);
    if ( !Pool )
    {
      _InterlockedExchange(&dword_140E35A10, 32);
      return;
    }
    RtlpInterlockedPushEntrySList(&stru_140E35A00, Pool);
  }
}
