/*
 * XREFs of LOCK_HIVE_LOAD @ 0x1408E07B8
 * Callers:
 *     CmpTryToRundownHive @ 0x1402BB3C0 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x14045ABA8 (CmpLoadKeyCommon.c)
 *     CmShutdownSystem1 @ 0x140666298 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406664E4 (CmShutdownSystem2.c)
 *     CmpLazyCommitWorker @ 0x1407DE690 (CmpLazyCommitWorker.c)
 *     CmpDoFlushNextHive @ 0x1408E2580 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x140930978 (CmReleaseLoadKeyContext.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140964D00 (CmpLateUnloadHiveWorker.c)
 *     CmKtmNotification @ 0x140A00E10 (CmKtmNotification.c)
 *     CmpResolveHiveLoadConflict @ 0x140A8189C (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *LOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rdi
  char *result; // rax
  char *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (char *)KeAbPreAcquire((__int64)&CmpLoadHiveLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpLoadHiveLock, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&CmpLoadHiveLock, result, (__int64)&CmpLoadHiveLock);
  if ( v2 )
    v2[10] = 1;
  CmpLoadHiveLockOwner = (__int64)CurrentThread;
  return result;
}
