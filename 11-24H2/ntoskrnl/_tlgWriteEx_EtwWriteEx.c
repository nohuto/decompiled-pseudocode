/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x1404A083C
 * Callers:
 *     MiLogWsAging @ 0x14023537C (MiLogWsAging.c)
 *     MiLogPeriodicTelemetry @ 0x1402D2E24 (MiLogPeriodicTelemetry.c)
 *     PopPlNotifyDeviceDState @ 0x140312818 (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x140315BD0 (PopPlNotifyDeviceFState.c)
 *     MiLogTrimWs @ 0x1403D05E4 (MiLogTrimWs.c)
 *     MiLogBadMapper @ 0x1403D0C38 (MiLogBadMapper.c)
 *     PopDiagTraceDIrpAfterSx @ 0x1403D9F9C (PopDiagTraceDIrpAfterSx.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1404416E0 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     MiLogSlabEntryDemote @ 0x140443234 (MiLogSlabEntryDemote.c)
 *     MiStoreLogNotCandidate @ 0x14045A3E8 (MiStoreLogNotCandidate.c)
 *     MiStoreLogWriteCompleteFailure @ 0x14045C510 (MiStoreLogWriteCompleteFailure.c)
 *     MmNotifyProcessInSwapTrigger @ 0x140467A70 (MmNotifyProcessInSwapTrigger.c)
 *     MiLogPartitionState @ 0x14046FD24 (MiLogPartitionState.c)
 *     MiLogProcessWorkingSetsStop @ 0x14047C900 (MiLogProcessWorkingSetsStop.c)
 *     MiLogProcessWorkingSetsStart @ 0x14047DFC8 (MiLogProcessWorkingSetsStart.c)
 *     MiStoreLogWriteIssueFailure @ 0x14048400C (MiStoreLogWriteIssueFailure.c)
 *     PopPlRegisterComponent @ 0x1404A06F0 (PopPlRegisterComponent.c)
 *     MiStoreLogWriteDisabled @ 0x1404A926C (MiStoreLogWriteDisabled.c)
 *     PopPlRegisterDevice @ 0x1404ADEFC (PopPlRegisterDevice.c)
 *     MiLogWsEmptyControl @ 0x1404AEF64 (MiLogWsEmptyControl.c)
 *     MmStoreLogConsumedPoison @ 0x1404BB760 (MmStoreLogConsumedPoison.c)
 *     HalpTimerQueryAndResetRtcErrors @ 0x1404D0280 (HalpTimerQueryAndResetRtcErrors.c)
 *     PopPlRegisterPowerPlane @ 0x1404D1D78 (PopPlRegisterPowerPlane.c)
 *     MiStoreLogFullPagefile @ 0x1404FAB48 (MiStoreLogFullPagefile.c)
 *     PopPlPublishInitialPowerDraw @ 0x1405DCAF0 (PopPlPublishInitialPowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x1405DCC6C (PopPlPublishSystemPowerChange.c)
 *     PopPlRegisterDeviceIterator @ 0x1405DCD80 (PopPlRegisterDeviceIterator.c)
 *     PopPlTraceLogPowerPlane @ 0x1405DCF14 (PopPlTraceLogPowerPlane.c)
 *     VmpLogColdHint @ 0x14064B8D0 (VmpLogColdHint.c)
 *     VmpLogLargeSlatFill @ 0x14064B9B8 (VmpLogLargeSlatFill.c)
 *     VmpLogQueryAccessedState @ 0x14064BAD0 (VmpLogQueryAccessedState.c)
 *     VmpLogSparseSlatFill @ 0x14064BC28 (VmpLogSparseSlatFill.c)
 *     VmpLogTbFlushSlatFlushEntire @ 0x14064BD54 (VmpLogTbFlushSlatFlushEntire.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x14064BE28 (VmpLogTbFlushSlatInvalidate.c)
 *     VmpLogTbFlushSlatInvalidateInsert @ 0x14064BF40 (VmpLogTbFlushSlatInvalidateInsert.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140669F18 (MiLogOutswappedProcessCommitReacquire.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x14066A078 (MiLogOutswappedProcessCommitRelease.c)
 *     MiLogResetPagesCommitRelease @ 0x14066A160 (MiLogResetPagesCommitRelease.c)
 *     MiLogAddPhysicalMemory @ 0x14066DE94 (MiLogAddPhysicalMemory.c)
 *     MiLogDelayFaultingThread @ 0x140680434 (MiLogDelayFaultingThread.c)
 *     MiLogNotifyPageHeat @ 0x140685780 (MiLogNotifyPageHeat.c)
 *     MiStoreLogDiscardPoisonedPage @ 0x14068C4C0 (MiStoreLogDiscardPoisonedPage.c)
 *     MiStoreLogReadFailure @ 0x14068C600 (MiStoreLogReadFailure.c)
 *     MmStoreLogDecompressionFailure @ 0x14068C938 (MmStoreLogDecompressionFailure.c)
 *     MmStoreLogRegionInPageError @ 0x14068CB80 (MmStoreLogRegionInPageError.c)
 *     VmpLogAccessFault @ 0x14079F8F4 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x14079FABC (VmpLogAccessFaultRange.c)
 *     VmpLogCreateDeleteMemoryRange @ 0x14079FC58 (VmpLogCreateDeleteMemoryRange.c)
 *     VmpLogCreateMemoryProcess @ 0x14079FE98 (VmpLogCreateMemoryProcess.c)
 *     VmpLogPin @ 0x1407A00D0 (VmpLogPin.c)
 *     VmpLogSplitMergeMemoryRange @ 0x1407A0310 (VmpLogSplitMergeMemoryRange.c)
 *     MiLogCreateImageFileMapFailure @ 0x1407EC04C (MiLogCreateImageFileMapFailure.c)
 *     MiLogHotPatchOperation @ 0x1407F3824 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1407F3CA4 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1407F431C (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1407F44C4 (MiLogHotPatchRundown.c)
 *     MiLogInsertSecureImageActivePatch @ 0x1407F5020 (MiLogInsertSecureImageActivePatch.c)
 *     VmpTracingEnabledCallback @ 0x140A840D0 (VmpTracingEnabledCallback.c)
 *     MiLogReserveVaFailed @ 0x140A901E0 (MiLogReserveVaFailed.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AAB2DC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiLogCommitRequestFailed @ 0x140AAC430 (MiLogCommitRequestFailed.c)
 *     VmpLogFaultResolveFailure @ 0x140AB3444 (VmpLogFaultResolveFailure.c)
 *     MiLogHotPatchManagement @ 0x140AE6CB4 (MiLogHotPatchManagement.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140C50900 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
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
