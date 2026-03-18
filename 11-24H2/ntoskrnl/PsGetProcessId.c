/*
 * XREFs of PsGetProcessId @ 0x140434960
 * Callers:
 *     TtmpCloseTerminalHandle @ 0x140770130 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x140770230 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x140770D20 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x140770E10 (TtmpOpenQueueHandle.c)
 *     VmpLogAccessFault @ 0x14079F8F4 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x14079FABC (VmpLogAccessFaultRange.c)
 *     VmpLogCreateDeleteMemoryRange @ 0x14079FC58 (VmpLogCreateDeleteMemoryRange.c)
 *     VmpLogCreateMemoryProcess @ 0x14079FE98 (VmpLogCreateMemoryProcess.c)
 *     VmpLogPin @ 0x1407A00D0 (VmpLogPin.c)
 *     VmpLogSplitMergeMemoryRange @ 0x1407A0310 (VmpLogSplitMergeMemoryRange.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1407AA720 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpObjectHandleRundown @ 0x1407B0F6C (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x1407C7780 (WheaTerminateProcess.c)
 *     MiLogHotPatchOperation @ 0x1407F3824 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1407F3CA4 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1407F431C (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1407F44C4 (MiLogHotPatchRundown.c)
 *     EtwpNotifyGuid @ 0x140836EE4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 *     sub_1408FC220 @ 0x1408FC220 (sub_1408FC220.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x140904FAC (PopEtAggregateKeyCopyFromProcess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14095E9DC (EtwQueryPerformanceTraceInformation.c)
 *     EtwTraceWorkingSetSwap @ 0x140A06D04 (EtwTraceWorkingSetSwap.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140A4D00C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     PspPostFreezeOperationWorker @ 0x140A7EC10 (PspPostFreezeOperationWorker.c)
 *     VmpTracingEnabledCallback @ 0x140A840D0 (VmpTracingEnabledCallback.c)
 *     VmpLogFaultResolveFailure @ 0x140AB3444 (VmpLogFaultResolveFailure.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB6F10 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x140AE6CB4 (MiLogHotPatchManagement.c)
 *     EtwTraceSystemTimeChange @ 0x140B6CE94 (EtwTraceSystemTimeChange.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
