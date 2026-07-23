/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140B69CD0
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x14027DB30 (ExNotifyCallback.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     MmUnlockPagableImageSection @ 0x1402BBBB0 (MmUnlockPagableImageSection.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14041C424 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopRunNormalIrpWorkers @ 0x1404F7944 (PopRunNormalIrpWorkers.c)
 *     PopClearSystemShutdownMarker @ 0x1406F7660 (PopClearSystemShutdownMarker.c)
 *     PopFreeHiberContext @ 0x1406F93C8 (PopFreeHiberContext.c)
 *     PopClearShutdownMarker @ 0x1406F9D44 (PopClearShutdownMarker.c)
 *     PopAdjustHiberFile @ 0x14074FDC8 (PopAdjustHiberFile.c)
 *     ExSwapinWorkerThreads @ 0x140A48C04 (ExSwapinWorkerThreads.c)
 *     PopClearSystemSleepCheckpoint @ 0x140A97CE4 (PopClearSystemSleepCheckpoint.c)
 *     CmSetLazyFlushState @ 0x140A9BBF0 (CmSetLazyFlushState.c)
 *     PopClearTransitionCheckpoints @ 0x140A9F68C (PopClearTransitionCheckpoints.c)
 *     PopReleaseTransitionLock @ 0x140AA0760 (PopReleaseTransitionLock.c)
 *     PopClearSleepMarker @ 0x140AA84C8 (PopClearSleepMarker.c)
 *     PopClearHibernateDiagnosticInfo @ 0x140AAFFD0 (PopClearHibernateDiagnosticInfo.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140B6BAC4 (PoDelistPowerStateTransitionBlocker.c)
 */

LONG PopUnlockAfterSleepWorker()
{
  UNICODE_STRING *v0; // rcx
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

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopUnlockAfterSleepLock);
  qword_140F0BB58 = (__int64)KeGetCurrentThread();
  if ( PopWaitingForTransitionLock
    && (int)PopPushPowerStateTransitionRecordWithCallback(
              (LARGE_INTEGER)KeGetCurrentThread()->ApcState.Process,
              qword_140F0BB58,
              0LL,
              0,
              0LL) < 0 )
  {
    PopWaitingForTransitionLock = 0;
  }
  PopReleaseRwLock(&PopUnlockAfterSleepLock);
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
  if ( byte_140F0B668 )
    PopAdjustHiberFile(v3);
  PopClearHibernateDiagnosticInfo();
  PopReleasePolicyLock(v5, v4, v6, v7, v13);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopUnlockAfterSleepLock);
  qword_140F0BB58 = 0LL;
  if ( PopWaitingForTransitionLock )
    PoDelistPowerStateTransitionBlocker(v9, v8, v10, v11);
  PopReleaseRwLock(&PopUnlockAfterSleepLock);
  return PopReleaseTransitionLock(1);
}
