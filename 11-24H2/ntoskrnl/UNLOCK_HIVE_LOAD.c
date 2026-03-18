/*
 * XREFs of UNLOCK_HIVE_LOAD @ 0x140909020
 * Callers:
 *     CmpTryToRundownHive @ 0x1402C6840 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x140464478 (CmpLoadKeyCommon.c)
 *     CmShutdownSystem1 @ 0x1406679A8 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x140667BF4 (CmShutdownSystem2.c)
 *     CmpLazyCommitWorker @ 0x1407DE140 (CmpLazyCommitWorker.c)
 *     CmpDoFlushNextHive @ 0x14090AE60 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x14092E838 (CmReleaseLoadKeyContext.c)
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14097C4F0 (CmpLateUnloadHiveWorker.c)
 *     CmpCompleteUnloadKey @ 0x14097CB58 (CmpCompleteUnloadKey.c)
 *     CmKtmNotification @ 0x140A048E0 (CmKtmNotification.c)
 *     CmpResolveHiveLoadConflict @ 0x140A86DC4 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

_QWORD *UNLOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 v1; // rdx
  ULONG_PTR v2; // rtt
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  CmpLoadHiveLockOwner = 0LL;
  _m_prefetchw(&CmpLoadHiveLock);
  v1 = CmpLoadHiveLock - 16;
  if ( (CmpLoadHiveLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v1 = 0LL;
  if ( (CmpLoadHiveLock & 2) != 0
    || (v2 = CmpLoadHiveLock,
        v2 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpLoadHiveLock, v1, CmpLoadHiveLock)) )
  {
    ExfReleasePushLock(&CmpLoadHiveLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpLoadHiveLock);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v3, v4, v5);
}
