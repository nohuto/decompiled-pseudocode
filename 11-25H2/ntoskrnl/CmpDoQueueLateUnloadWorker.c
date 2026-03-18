/*
 * XREFs of CmpDoQueueLateUnloadWorker @ 0x14087C588
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x140848B80 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408743F0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087B820 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14087C4C0 (CmpDelayDerefKeyControlBlock.c)
 *     CmpFindSubKeyByNumberEx @ 0x14087D350 (CmpFindSubKeyByNumberEx.c)
 *     CmpDoFlushNextHive @ 0x1408837F0 (CmpDoFlushNextHive.c)
 *     CmReleaseLoadKeyContext @ 0x140912250 (CmReleaseLoadKeyContext.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     CmpReferenceHive @ 0x140848B50 (CmpReferenceHive.c)
 *     CmUnlockHive @ 0x14084AA3C (CmUnlockHive.c)
 *     CmLockHive @ 0x14084AA78 (CmLockHive.c)
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
