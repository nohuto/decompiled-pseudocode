/*
 * XREFs of PsGetProcessId @ 0x140438AF0
 * Callers:
 *     TtmpCloseTerminalHandle @ 0x140760770 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x140760870 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x140761360 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x140761450 (TtmpOpenQueueHandle.c)
 *     PspPostFreezeOperationWorker @ 0x14076A810 (PspPostFreezeOperationWorker.c)
 *     VmpLogAccessFault @ 0x140790534 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x1407906FC (VmpLogAccessFaultRange.c)
 *     VmpLogCreateDeleteMemoryRange @ 0x140790898 (VmpLogCreateDeleteMemoryRange.c)
 *     VmpLogCreateMemoryProcess @ 0x140790AD8 (VmpLogCreateMemoryProcess.c)
 *     VmpLogPin @ 0x140790D10 (VmpLogPin.c)
 *     VmpLogSplitMergeMemoryRange @ 0x140790F50 (VmpLogSplitMergeMemoryRange.c)
 *     EtwpUpdateProcessTracingCallback @ 0x14079B350 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpObjectHandleRundown @ 0x1407A1B9C (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x1407B7FB0 (WheaTerminateProcess.c)
 *     MiLogHotPatchOperation @ 0x1407E399C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1407E3E1C (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1407E4494 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1407E463C (MiLogHotPatchRundown.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14082425C (EtwQueryPerformanceTraceInformation.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     EtwpNotifyGuid @ 0x140897964 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14089BB2C (EtwpEnableGuid.c)
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 *     sub_140908780 @ 0x140908780 (sub_140908780.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x140961410 (PopEtAggregateKeyCopyFromProcess.c)
 *     VmpLogFaultResolveFailure @ 0x1409FE324 (VmpLogFaultResolveFailure.c)
 *     EtwTraceWorkingSetSwap @ 0x140A04C08 (EtwTraceWorkingSetSwap.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140A4AA6C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     VmpTracingEnabledCallback @ 0x140A80370 (VmpTracingEnabledCallback.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB2078 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x140AD5BD4 (MiLogHotPatchManagement.c)
 *     EtwTraceSystemTimeChange @ 0x140B5DDB4 (EtwTraceSystemTimeChange.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
