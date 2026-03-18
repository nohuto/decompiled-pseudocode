/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x1403DB130
 * Callers:
 *     KeAcquireGuardedMutexUnsafe @ 0x1403DA330 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1403DA480 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlCheckOplockEx2 @ 0x1403DA5B0 (FsRtlCheckOplockEx2.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1403DB100 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlCancelNotify @ 0x1403DB210 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x1404E0250 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1404E0638 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E4608 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E4EB0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlOplockBreakToNoneEx @ 0x140580610 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x1405807A0 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140580814 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x140581220 (FsRtlpOplockAckTimeoutWorker.c)
 *     DifExAcquireFastMutexUnsafeWrapper @ 0x14061B490 (DifExAcquireFastMutexUnsafeWrapper.c)
 *     DifKeAcquireGuardedMutexUnsafeWrapper @ 0x14062BFE0 (DifKeAcquireGuardedMutexUnsafeWrapper.c)
 *     FsRtlCheckUpperOplock @ 0x14070AEF0 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14070B5DC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14070B734 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x14070DB00 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x14073C4E0 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x140793290 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140793330 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1407933E0 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1407934A0 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x1407939A0 (SepNotifyFileSystems.c)
 *     ExpSetBootEntry @ 0x1407BC32C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCA24 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407BCFA8 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1407BD8B0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407BDA40 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1407BDBD0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407BE030 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x1407BE1C0 (NtGetEnvironmentVariableEx.c)
 *     NtQueryDriverEntryOrder @ 0x1407BE2E0 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1407BE500 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407BE5B0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootOptions @ 0x1407BE8B0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1407BEA90 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1407BEC50 (NtSetSystemEnvironmentValue.c)
 *     CmpCloseKeyObject @ 0x140841890 (CmpCloseKeyObject.c)
 *     CmpReportNotifyHelper @ 0x140868820 (CmpReportNotifyHelper.c)
 *     CmpNotifyTriggerCheck @ 0x140868C88 (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x140868D58 (CmpPostNotify.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087B17C (LOCK_TRANSACTION_LIST.c)
 *     CmNotifyRunDown @ 0x1408A87D0 (CmNotifyRunDown.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     NtSetBootEntryOrder @ 0x140964DF0 (NtSetBootEntryOrder.c)
 *     NtEnumerateBootEntries @ 0x140965240 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x140965B30 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1409667C0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140966C70 (ExpGetFirmwareEnvironmentVariable.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1409ED190 (FsRtlCheckOplockForFsFilterCallback.c)
 *     FsRtlNotifyFilterReportChange @ 0x140A007F0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140A011F0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A01520 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140A01C00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanup @ 0x140A01F30 (FsRtlNotifyCleanup.c)
 *     LOCK_CM_RM_LIST @ 0x140A05144 (LOCK_CM_RM_LIST.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140A20DD0 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlOplockBreakH2 @ 0x140A35490 (FsRtlOplockBreakH2.c)
 *     NtQueryBootOptions @ 0x140A97A60 (NtQueryBootOptions.c)
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 * Callees:
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  int v8; // r15d
  int i; // r14d
  signed __int32 Count; // eax
  signed __int32 v11; // ett
  signed __int32 v12; // ett

  CurrentThread = KeGetCurrentThread();
  v3 = KeAbPreAcquire((__int64)FastMutex, 0LL);
  v6 = v3;
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
  {
    ++FastMutex->Contention;
    v7 = v3;
    v8 = 1;
    for ( i = 4; ; i = 2 )
    {
      Count = FastMutex->Count;
      do
      {
        while ( (Count & 1) != 0 )
        {
          v12 = Count;
          Count = _InterlockedCompareExchange(&FastMutex->Count, v8 ^ Count, Count);
          if ( v12 == Count )
            goto LABEL_11;
        }
        v11 = Count;
        Count = _InterlockedCompareExchange(&FastMutex->Count, i + Count, Count);
      }
      while ( v11 != Count );
      if ( v7 )
        KeAbPreWait((__int64)v7, v4, v5);
      KeWaitForSingleObject(&FastMutex->Event, WrFastMutex, 0, 0, 0LL);
      _m_prefetchw(FastMutex);
      v8 = 3;
      if ( v7 )
        v7 = KeAbPreAcquire((__int64)FastMutex, (__int64)v7);
    }
  }
LABEL_11:
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  FastMutex->Owner = CurrentThread;
}
