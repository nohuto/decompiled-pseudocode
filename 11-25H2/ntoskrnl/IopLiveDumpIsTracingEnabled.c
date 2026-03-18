/*
 * XREFs of IopLiveDumpIsTracingEnabled @ 0x1404F84C4
 * Callers:
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x14049B204 (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IoCaptureLiveDump @ 0x1404D7188 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405952CC (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140595B08 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140596458 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpCaptureDumpStart @ 0x140596858 (IopLiveDumpCaptureDumpStart.c)
 *     IopLiveDumpCorralProcessors @ 0x140596F50 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1405971C0 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1405972B0 (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1405984D4 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpOpenVMMemoryPartition @ 0x140598D38 (IopLiveDumpOpenVMMemoryPartition.c)
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x140598F10 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x140599638 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     IopLiveDumpStartMirroringCallback @ 0x140599A80 (IopLiveDumpStartMirroringCallback.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140599AC0 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140599BCC (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x140599D3C (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x140599E68 (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x140599F48 (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x14059A084 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpDisabledOnBoot @ 0x14059A240 (IopLiveDumpTraceDumpDisabledOnBoot.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14059A330 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14059A454 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14059A63C (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x14059A674 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x14059A7B0 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x14059A8EC (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14059A988 (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x14059AADC (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x14059AB54 (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     IopLiveDumpUncorralProcessors @ 0x14059AD10 (IopLiveDumpUncorralProcessors.c)
 *     IopLiveDumpTrace @ 0x14059F900 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceEventGeneric @ 0x14059FA74 (IopLiveDumpTraceEventGeneric.c)
 *     IopLiveDumpTraceNoArgs @ 0x14059FC50 (IopLiveDumpTraceNoArgs.c)
 * Callees:
 *     <none>
 */

bool IopLiveDumpIsTracingEnabled()
{
  return IopLiveDumpEtwRegHandle && IopLiveDumpEtwEnabled != 0;
}
