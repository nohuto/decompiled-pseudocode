/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140B57D60
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     ExNotifyCallback @ 0x1402EACD0 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x14036DFD0 (MmUnlockPagableImageSection.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x140431D24 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopRunNormalIrpWorkers @ 0x1404F78F4 (PopRunNormalIrpWorkers.c)
 *     PopClearSystemShutdownMarker @ 0x1406EDD44 (PopClearSystemShutdownMarker.c)
 *     PopFreeHiberContext @ 0x1406EF918 (PopFreeHiberContext.c)
 *     PopClearShutdownMarker @ 0x1406F0324 (PopClearShutdownMarker.c)
 *     PopAdjustHiberFile @ 0x1407459D8 (PopAdjustHiberFile.c)
 *     ExSwapinWorkerThreads @ 0x140A4E204 (ExSwapinWorkerThreads.c)
 *     PopClearSystemSleepCheckpoint @ 0x140A96864 (PopClearSystemSleepCheckpoint.c)
 *     CmSetLazyFlushState @ 0x140A9AAA0 (CmSetLazyFlushState.c)
 *     PopClearTransitionCheckpoints @ 0x140A9EA7C (PopClearTransitionCheckpoints.c)
 *     PopReleaseTransitionLock @ 0x140AA0354 (PopReleaseTransitionLock.c)
 *     PopClearSleepMarker @ 0x140AA7F18 (PopClearSleepMarker.c)
 *     PopClearHibernateDiagnosticInfo @ 0x140AB0E40 (PopClearHibernateDiagnosticInfo.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140B5A8B4 (PoDelistPowerStateTransitionBlocker.c)
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
  qword_140F0B038 = (__int64)KeGetCurrentThread();
  if ( PopWaitingForTransitionLock
    && (int)PopPushPowerStateTransitionRecordWithCallback(
              (LARGE_INTEGER)KeGetCurrentThread()->ApcState.Process,
              qword_140F0B038,
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
  if ( byte_140F0B8C8 )
    PopAdjustHiberFile(v3);
  PopClearHibernateDiagnosticInfo();
  PopReleasePolicyLock(v5, v4, v6, v7, v13);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopUnlockAfterSleepLock);
  qword_140F0B038 = 0LL;
  if ( PopWaitingForTransitionLock )
    PoDelistPowerStateTransitionBlocker(v9, v8, v10, v11);
  PopReleaseRwLock(&PopUnlockAfterSleepLock);
  return PopReleaseTransitionLock(1);
}
