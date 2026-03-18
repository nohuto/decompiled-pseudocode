/*
 * XREFs of CmpDoQueueLateUnloadWorker @ 0x14087E638
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x140844830 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408704E0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFindSubKeyByNumberEx @ 0x14087D660 (CmpFindSubKeyByNumberEx.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087DE20 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14087E570 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDoFlushNextHive @ 0x14090AE60 (CmpDoFlushNextHive.c)
 *     CmReleaseLoadKeyContext @ 0x14092E838 (CmReleaseLoadKeyContext.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     CmpReferenceHive @ 0x140844680 (CmpReferenceHive.c)
 *     CmLockHive @ 0x140845C74 (CmLockHive.c)
 *     CmUnlockHive @ 0x140846740 (CmUnlockHive.c)
 */

__int64 __fastcall CmpDoQueueLateUnloadWorker(__int64 a1)
{
  WORK_QUEUE_TYPE v3; // r8d

  CmLockHive(a1);
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 19;
  if ( **(_QWORD **)(a1 + 2936) == 2LL )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 20;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4800), 1, 0) )
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 21;
      CmpReferenceHive(a1);
      ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(a1 + 4816), v3);
    }
  }
  return CmUnlockHive(a1);
}
