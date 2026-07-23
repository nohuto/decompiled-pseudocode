/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x1403CD970
 * Callers:
 *     FsRtlCancelNotify @ 0x1403CC4E0 (FsRtlCancelNotify.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x1403CD7E0 (KeAcquireGuardedMutexUnsafe.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1403CD940 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlCheckOplockEx2 @ 0x1403CE7F0 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1403CF540 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlUninitializeOplock @ 0x1404D98A0 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404D9C50 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404DAE94 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404DB6D0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlOplockBreakToNoneEx @ 0x14057DA80 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x14057DC10 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14057DC84 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x14057E5E0 (FsRtlpOplockAckTimeoutWorker.c)
 *     DifExAcquireFastMutexUnsafeWrapper @ 0x140619A50 (DifExAcquireFastMutexUnsafeWrapper.c)
 *     DifKeAcquireGuardedMutexUnsafeWrapper @ 0x14062A5A0 (DifKeAcquireGuardedMutexUnsafeWrapper.c)
 *     FsRtlCheckUpperOplock @ 0x140708AB0 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14070919C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x1407092D0 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x14070B6A0 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x14073A410 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x140793330 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x1407933D0 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x140793480 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x140793540 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x140793A40 (SepNotifyFileSystems.c)
 *     ExpSetBootEntry @ 0x1407BC77C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCE74 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407BD3F8 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1407BDD00 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407BDE90 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1407BE020 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407BE480 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x1407BE610 (NtGetEnvironmentVariableEx.c)
 *     NtQueryDriverEntryOrder @ 0x1407BE730 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1407BE950 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407BEA00 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootOptions @ 0x1407BED00 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1407BEEE0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1407BF0A0 (NtSetSystemEnvironmentValue.c)
 *     CmpCloseKeyObject @ 0x14083DB50 (CmpCloseKeyObject.c)
 *     CmpReportNotifyHelper @ 0x14086CB10 (CmpReportNotifyHelper.c)
 *     CmpNotifyTriggerCheck @ 0x14086CF78 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x14086D048 (CmpPostNotify.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087F02C (LOCK_TRANSACTION_LIST.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     CmNotifyRunDown @ 0x1408FEA30 (CmNotifyRunDown.c)
 *     NtSetBootEntryOrder @ 0x14094D880 (NtSetBootEntryOrder.c)
 *     NtEnumerateBootEntries @ 0x14094DCD0 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x14094E5C0 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14094F250 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14094F700 (ExpGetFirmwareEnvironmentVariable.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1409E0F60 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1409E64C0 (FsRtlCheckOplockForFsFilterCallback.c)
 *     FsRtlNotifyFilterReportChange @ 0x1409FD7C0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1409FE1C0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1409FE4F0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1409FEBD0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanup @ 0x1409FEF00 (FsRtlNotifyCleanup.c)
 *     LOCK_CM_RM_LIST @ 0x140A01674 (LOCK_CM_RM_LIST.c)
 *     FsRtlOplockBreakH2 @ 0x140A294A0 (FsRtlOplockBreakH2.c)
 *     NtQueryBootOptions @ 0x140A942B0 (NtQueryBootOptions.c)
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  char *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rsi
  char *v8; // rdi
  int v9; // r15d
  int i; // r14d
  signed __int32 Count; // eax
  signed __int32 v12; // ett
  signed __int32 v13; // ett

  CurrentThread = KeGetCurrentThread();
  v3 = (char *)KeAbPreAcquire((__int64)FastMutex, 0LL);
  v7 = v3;
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
  {
    ++FastMutex->Contention;
    v8 = v3;
    v9 = 1;
    for ( i = 4; ; i = 2 )
    {
      Count = FastMutex->Count;
      do
      {
        while ( (Count & 1) != 0 )
        {
          v13 = Count;
          Count = _InterlockedCompareExchange(&FastMutex->Count, v9 ^ Count, Count);
          if ( v13 == Count )
            goto LABEL_11;
        }
        v12 = Count;
        Count = _InterlockedCompareExchange(&FastMutex->Count, i + Count, Count);
      }
      while ( v12 != Count );
      if ( v8 )
        KeAbPreWait(v8, v4, v5, v6);
      KeWaitForSingleObject(&FastMutex->Event, WrFastMutex, 0, 0, 0LL);
      _m_prefetchw(FastMutex);
      v9 = 3;
      if ( v8 )
        v8 = (char *)KeAbPreAcquire((__int64)FastMutex, (__int64)v8);
    }
  }
LABEL_11:
  if ( v7 )
    v7[10] = 1;
  FastMutex->Owner = CurrentThread;
}
