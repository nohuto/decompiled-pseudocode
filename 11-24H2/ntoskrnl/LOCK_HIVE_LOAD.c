/*
 * XREFs of LOCK_HIVE_LOAD @ 0x140909098
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
 *     CmKtmNotification @ 0x140A048E0 (CmKtmNotification.c)
 *     CmpResolveHiveLoadConflict @ 0x140A86DC4 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 LOCK_HIVE_LOAD()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (__int64)KeAbPreAcquire((__int64)&CmpLoadHiveLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpLoadHiveLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpLoadHiveLock, result, (__int64)&CmpLoadHiveLock);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  CmpLoadHiveLockOwner = (__int64)CurrentThread;
  return result;
}
