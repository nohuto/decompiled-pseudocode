/*
 * XREFs of PsGetProcessId @ 0x140427BE0
 * Callers:
 *     TtmpCloseTerminalHandle @ 0x140770350 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x140770450 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x140770F40 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x140771030 (TtmpOpenQueueHandle.c)
 *     VmpLogAccessFault @ 0x14079FA04 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x14079FBCC (VmpLogAccessFaultRange.c)
 *     VmpLogCreateDeleteMemoryRange @ 0x14079FD68 (VmpLogCreateDeleteMemoryRange.c)
 *     VmpLogCreateMemoryProcess @ 0x14079FFA8 (VmpLogCreateMemoryProcess.c)
 *     VmpLogPin @ 0x1407A01E0 (VmpLogPin.c)
 *     VmpLogSplitMergeMemoryRange @ 0x1407A0420 (VmpLogSplitMergeMemoryRange.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1407AA860 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpObjectHandleRundown @ 0x1407B13BC (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x1407C7C20 (WheaTerminateProcess.c)
 *     MiLogHotPatchOperation @ 0x1407F3E18 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1407F4298 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1407F4A10 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1407F4BB8 (MiLogHotPatchRundown.c)
 *     EtwpNotifyGuid @ 0x140834644 (EtwpNotifyGuid.c)
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     sub_14091EB00 @ 0x14091EB00 (sub_14091EB00.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14094649C (EtwQueryPerformanceTraceInformation.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x14099BC30 (PopEtAggregateKeyCopyFromProcess.c)
 *     EtwTraceWorkingSetSwap @ 0x140A03234 (EtwTraceWorkingSetSwap.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140A43B9C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     PspPostFreezeOperationWorker @ 0x140A783C0 (PspPostFreezeOperationWorker.c)
 *     VmpTracingEnabledCallback @ 0x140A7EBF0 (VmpTracingEnabledCallback.c)
 *     VmpLogFaultResolveFailure @ 0x140AAE3B4 (VmpLogFaultResolveFailure.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB11E8 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x140AE987C (MiLogHotPatchManagement.c)
 *     EtwTraceSystemTimeChange @ 0x140B6E734 (EtwTraceSystemTimeChange.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
