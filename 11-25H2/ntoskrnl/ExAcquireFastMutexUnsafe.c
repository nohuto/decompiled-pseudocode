/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x1403EF5E0
 * Callers:
 *     FsRtlCancelNotify @ 0x1403EE140 (FsRtlCancelNotify.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x1403EE7E0 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1403EE930 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlCheckOplockEx2 @ 0x1403EEA60 (FsRtlCheckOplockEx2.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1403EF5B0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlUninitializeOplock @ 0x1404E0790 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0B78 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E552C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E5DD0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlOplockBreakToNoneEx @ 0x14057D320 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x14057D4B0 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14057D524 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x14057DE00 (FsRtlpOplockAckTimeoutWorker.c)
 *     DifExAcquireFastMutexUnsafeWrapper @ 0x14060F4D0 (DifExAcquireFastMutexUnsafeWrapper.c)
 *     DifKeAcquireGuardedMutexUnsafeWrapper @ 0x140620020 (DifKeAcquireGuardedMutexUnsafeWrapper.c)
 *     FsRtlCheckUpperOplock @ 0x1406FF010 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x1406FF6FC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x1406FF854 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x140701C20 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x140730250 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x140783EC0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140783F60 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x140784010 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1407840D0 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x1407845D0 (SepNotifyFileSystems.c)
 *     ExpSetBootEntry @ 0x1407ACEAC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407AD5A4 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407ADB28 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1407AE0E0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407AE270 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1407AE400 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407AE860 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x1407AE9F0 (NtGetEnvironmentVariableEx.c)
 *     NtQueryDriverEntryOrder @ 0x1407AEB10 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1407AED30 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407AEDE0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootOptions @ 0x1407AF0E0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1407AF2C0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1407AF480 (NtSetSystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x140820520 (NtSetBootEntryOrder.c)
 *     NtEnumerateBootEntries @ 0x140820970 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x140821260 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140821EF0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140822258 (ExpGetFirmwareEnvironmentVariable.c)
 *     CmpCloseKeyObject @ 0x140845600 (CmpCloseKeyObject.c)
 *     LOCK_CM_RM_LIST @ 0x1408665E8 (LOCK_CM_RM_LIST.c)
 *     CmpReportNotifyHelper @ 0x14086F9E0 (CmpReportNotifyHelper.c)
 *     CmpNotifyTriggerCheck @ 0x14086FE0C (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x140870084 (CmpPostNotify.c)
 *     LOCK_TRANSACTION_LIST @ 0x140885DE8 (LOCK_TRANSACTION_LIST.c)
 *     CmNotifyRunDown @ 0x1408F53C0 (CmNotifyRunDown.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1409F2950 (FsRtlCheckOplockForFsFilterCallback.c)
 *     FsRtlNotifyFilterReportChange @ 0x140A02350 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140A02D50 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A03080 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140A03770 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanup @ 0x140A03AA0 (FsRtlNotifyCleanup.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140A17B60 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlOplockBreakH2 @ 0x140A2FA90 (FsRtlOplockBreakH2.c)
 *     NtQueryBootOptions @ 0x140A937F0 (NtQueryBootOptions.c)
 *     KeInitSystem @ 0x140C4FA10 (KeInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x14029D460 (KeAbPreWait.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v3; // rax
  __int64 *v4; // rsi
  __int64 *v5; // rdi
  int v6; // r15d
  int i; // r14d
  signed __int32 Count; // eax
  signed __int32 v9; // ett
  signed __int32 v10; // ett

  CurrentThread = KeGetCurrentThread();
  v3 = KeAbPreAcquire((__int64)FastMutex, 0LL);
  v4 = v3;
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
  {
    ++FastMutex->Contention;
    v5 = v3;
    v6 = 1;
    for ( i = 4; ; i = 2 )
    {
      Count = FastMutex->Count;
      do
      {
        while ( (Count & 1) != 0 )
        {
          v9 = Count;
          Count = _InterlockedCompareExchange(&FastMutex->Count, v6 ^ Count, Count);
          if ( v9 == Count )
            goto LABEL_6;
        }
        v10 = Count;
        Count = _InterlockedCompareExchange(&FastMutex->Count, i + Count, Count);
      }
      while ( v10 != Count );
      if ( v5 )
        KeAbPreWait(v5);
      KeWaitForSingleObject(&FastMutex->Event, WrFastMutex, 0, 0, 0LL);
      _m_prefetchw(FastMutex);
      v6 = 3;
      if ( v5 )
        v5 = KeAbPreAcquire((__int64)FastMutex, (__int64)v5);
    }
  }
LABEL_6:
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  FastMutex->Owner = CurrentThread;
}
