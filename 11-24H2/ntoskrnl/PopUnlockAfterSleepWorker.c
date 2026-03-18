/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140B67B90
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x14024D520 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x1402C7030 (MmUnlockPagableImageSection.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x140428294 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopRunNormalIrpWorkers @ 0x1404FA064 (PopRunNormalIrpWorkers.c)
 *     PopClearSystemShutdownMarker @ 0x1406F9A20 (PopClearSystemShutdownMarker.c)
 *     PopFreeHiberContext @ 0x1406FB788 (PopFreeHiberContext.c)
 *     PopClearShutdownMarker @ 0x1406FC104 (PopClearShutdownMarker.c)
 *     PopAdjustHiberFile @ 0x140751AA8 (PopAdjustHiberFile.c)
 *     ExSwapinWorkerThreads @ 0x140A51B34 (ExSwapinWorkerThreads.c)
 *     PopClearSystemSleepCheckpoint @ 0x140A9C774 (PopClearSystemSleepCheckpoint.c)
 *     CmSetLazyFlushState @ 0x140AA0860 (CmSetLazyFlushState.c)
 *     PopClearTransitionCheckpoints @ 0x140AA42FC (PopClearTransitionCheckpoints.c)
 *     PopReleaseTransitionLock @ 0x140AA56F0 (PopReleaseTransitionLock.c)
 *     PopClearSleepMarker @ 0x140AAD448 (PopClearSleepMarker.c)
 *     PopClearHibernateDiagnosticInfo @ 0x140AB5D08 (PopClearHibernateDiagnosticInfo.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140B6A3B4 (PoDelistPowerStateTransitionBlocker.c)
 */

LONG PopUnlockAfterSleepWorker()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+20h] [rbp-18h]

  PopAcquireRwLockExclusive(&PopUnlockAfterSleepLock);
  qword_140F0B2D8 = (__int64)KeGetCurrentThread();
  if ( PopWaitingForTransitionLock
    && (int)PopPushPowerStateTransitionRecordWithCallback(
              (__int64)KeGetCurrentThread()->ApcState.Process,
              qword_140F0B2D8,
              0LL,
              0,
              0LL) < 0 )
  {
    PopWaitingForTransitionLock = 0;
  }
  PopReleaseRwLock((signed __int64 *)&PopUnlockAfterSleepLock);
  CmSetLazyFlushState(1);
  ExSwapinWorkerThreads(1u);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
  PopRunNormalIrpWorkers();
  MmUnlockPagableImageSection(ExPageLockHandle);
  PopClearTransitionCheckpoints();
  PopClearSleepMarker();
  PopClearSystemSleepCheckpoint(0);
  PopClearShutdownMarker();
  PopClearSystemShutdownMarker();
  PopFreeHiberContext(v0);
  PopAcquirePolicyLock(v2, v1);
  if ( byte_140F0BB48 )
    PopAdjustHiberFile(v3);
  PopClearHibernateDiagnosticInfo();
  PopReleasePolicyLock(v5, v4, v6, v7, v13);
  PopAcquireRwLockExclusive(&PopUnlockAfterSleepLock);
  qword_140F0B2D8 = 0LL;
  if ( PopWaitingForTransitionLock )
    PoDelistPowerStateTransitionBlocker(v9, v8, v10, v11);
  PopReleaseRwLock((signed __int64 *)&PopUnlockAfterSleepLock);
  return PopReleaseTransitionLock(1);
}
