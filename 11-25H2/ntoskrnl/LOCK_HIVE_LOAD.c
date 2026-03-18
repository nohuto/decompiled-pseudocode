/*
 * XREFs of LOCK_HIVE_LOAD @ 0x140883970
 * Callers:
 *     CmpTryToRundownHive @ 0x14036DA50 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x140465264 (CmpLoadKeyCommon.c)
 *     CmShutdownSystem1 @ 0x14065C0A4 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x14065C2F0 (CmShutdownSystem2.c)
 *     CmpLazyCommitWorker @ 0x1407CE980 (CmpLazyCommitWorker.c)
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 *     CmKtmNotification @ 0x140865D90 (CmKtmNotification.c)
 *     CmpDoFlushNextHive @ 0x1408837F0 (CmpDoFlushNextHive.c)
 *     CmReleaseLoadKeyContext @ 0x140912250 (CmReleaseLoadKeyContext.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140A42470 (CmpLateUnloadHiveWorker.c)
 *     CmpResolveHiveLoadConflict @ 0x140A82524 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *LOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *result; // rax
  __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&CmpLoadHiveLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpLoadHiveLock, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&CmpLoadHiveLock, result, (__int64)&CmpLoadHiveLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  CmpLoadHiveLockOwner = (__int64)CurrentThread;
  return result;
}
