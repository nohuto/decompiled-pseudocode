/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x14049AEBC
 * Callers:
 *     MiLogWsAging @ 0x14020F50C (MiLogWsAging.c)
 *     MiLogBadMapper @ 0x140274724 (MiLogBadMapper.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402D6BB8 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogProcessWorkingSetsStop @ 0x1402F2C7C (MiLogProcessWorkingSetsStop.c)
 *     MiLogPartitionState @ 0x1402F3958 (MiLogPartitionState.c)
 *     MiLogProcessWorkingSetsStart @ 0x1402F3A90 (MiLogProcessWorkingSetsStart.c)
 *     MiLogPeriodicTelemetry @ 0x14035409C (MiLogPeriodicTelemetry.c)
 *     MiLogTrimWs @ 0x14038F63C (MiLogTrimWs.c)
 *     PopPlNotifyDeviceFState @ 0x1403A734C (PopPlNotifyDeviceFState.c)
 *     PopPlNotifyDeviceDState @ 0x1403A78A0 (PopPlNotifyDeviceDState.c)
 *     PopDiagTraceDIrpAfterSx @ 0x1403CC400 (PopDiagTraceDIrpAfterSx.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140438020 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MiLogSlabEntryDemote @ 0x14043C180 (MiLogSlabEntryDemote.c)
 *     MiStoreLogNotCandidate @ 0x14044F838 (MiStoreLogNotCandidate.c)
 *     MiStoreLogWriteIssueFailure @ 0x14047F52C (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteCompleteFailure @ 0x140493904 (MiStoreLogWriteCompleteFailure.c)
 *     PopPlRegisterComponent @ 0x14049AD70 (PopPlRegisterComponent.c)
 *     MiStoreLogWriteDisabled @ 0x1404A368C (MiStoreLogWriteDisabled.c)
 *     PopPlRegisterDevice @ 0x1404A880C (PopPlRegisterDevice.c)
 *     MiLogWsEmptyControl @ 0x1404A993C (MiLogWsEmptyControl.c)
 *     MmStoreLogConsumedPoison @ 0x1404B6670 (MmStoreLogConsumedPoison.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x1404C93E0 (HalpTimerQueryAndResetRtcErrors.c)
 *     PopPlRegisterPowerPlane @ 0x1404CADB8 (PopPlRegisterPowerPlane.c)
 *     MiStoreLogFullPagefile @ 0x1404F8428 (MiStoreLogFullPagefile.c)
 *     PopPlPublishInitialPowerDraw @ 0x1405D99C0 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x1405D9B3C (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x1405D9C50 (PopPlRegisterDeviceIterator.c)
 *     PopPlTraceLogPowerPlane @ 0x1405D9DE4 (PopPlTraceLogPowerPlane.c)
 *     VmpLogColdHint @ 0x140649E90 (VmpLogColdHint.c)
 *     VmpLogLargeSlatFill @ 0x140649F78 (VmpLogLargeSlatFill.c)
 *     VmpLogQueryAccessedState @ 0x14064A090 (VmpLogQueryAccessedState.c)
 *     VmpLogSparseSlatFill @ 0x14064A1E8 (VmpLogSparseSlatFill.c)
 *     VmpLogTbFlushSlatFlushEntire @ 0x14064A314 (VmpLogTbFlushSlatFlushEntire.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x14064A3E8 (VmpLogTbFlushSlatInvalidate.c)
 *     VmpLogTbFlushSlatInvalidateInsert @ 0x14064A500 (VmpLogTbFlushSlatInvalidateInsert.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14066B0E8 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14066B248 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14066B330 (MiLogResetPagesCommitRelease.c)
 *     MiLogAddPhysicalMemory @ 0x14066F068 (MiLogAddPhysicalMemory.c)
 *     MiLogDelayFaultingThread @ 0x140681634 (MiLogDelayFaultingThread.c)
 *     MiLogNotifyPageHeat @ 0x1406868B0 (MiLogNotifyPageHeat.c)
 *     MiStoreLogDiscardPoisonedPage @ 0x14068D5F0 (MiStoreLogDiscardPoisonedPage.c)
 *     MiStoreLogReadFailure @ 0x14068D730 (MiStoreLogReadFailure.c)
 *     MmStoreLogDecompressionFailure @ 0x14068DA68 (MmStoreLogDecompressionFailure.c)
 *     MmStoreLogRegionInPageError @ 0x14068DCB0 (MmStoreLogRegionInPageError.c)
 *     VmpLogAccessFault @ 0x14079FA04 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x14079FBCC (VmpLogAccessFaultRange.c)
 *     VmpLogCreateDeleteMemoryRange @ 0x14079FD68 (VmpLogCreateDeleteMemoryRange.c)
 *     VmpLogCreateMemoryProcess @ 0x14079FFA8 (VmpLogCreateMemoryProcess.c)
 *     VmpLogPin @ 0x1407A01E0 (VmpLogPin.c)
 *     VmpLogSplitMergeMemoryRange @ 0x1407A0420 (VmpLogSplitMergeMemoryRange.c)
 *     MiLogCreateImageFileMapFailure @ 0x1407EC61C (MiLogCreateImageFileMapFailure.c)
 *     MiLogHotPatchOperation @ 0x1407F3E18 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1407F4298 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1407F4A10 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1407F4BB8 (MiLogHotPatchRundown.c)
 *     MiLogInsertSecureImageActivePatch @ 0x1407F5714 (MiLogInsertSecureImageActivePatch.c)
 *     VmpTracingEnabledCallback @ 0x140A7EBF0 (VmpTracingEnabledCallback.c)
 *     MiLogReserveVaFailed @ 0x140A8C8DC (MiLogReserveVaFailed.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AA650C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogCommitRequestFailed @ 0x140AA7460 (MiLogCommitRequestFailed.c)
 *     VmpLogFaultResolveFailure @ 0x140AAE3B4 (VmpLogFaultResolveFailure.c)
 *     MiLogHotPatchManagement @ 0x140AE987C (MiLogHotPatchManagement.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140C52A90 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 */

NTSTATUS __fastcall tlgWriteEx_EtwWriteEx(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        ULONG a4,
        int a5,
        int a6,
        ULONG UserDataCount,
        struct _EVENT_DATA_DESCRIPTOR *a8)
{
  unsigned __int64 v8; // rax
  unsigned __int16 *v9; // rdx
  EVENT_DESCRIPTOR v11; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&v11.Id = *a2 << 24;
  *(_DWORD *)&v11.Level = *(unsigned __int16 *)(a2 + 1);
  v8 = *(_QWORD *)(a2 + 3);
  v9 = (unsigned __int16 *)(a2 + 11);
  v11.Keyword = v8;
  a8->Ptr = *(_QWORD *)(a1 + 8);
  a8->Size = **(unsigned __int16 **)(a1 + 8);
  a8[1].Ptr = (ULONGLONG)v9;
  a8->Reserved = 2;
  a8[1].Size = *v9;
  a8[1].Reserved = 1;
  return EtwWriteEx(*(_QWORD *)(a1 + 32), &v11, 0LL, a4, 0LL, 0LL, UserDataCount, a8);
}
