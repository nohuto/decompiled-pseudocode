/*
 * XREFs of IopLiveDumpIsTracingEnabled @ 0x1404F8284
 * Callers:
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x140495EA4 (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x14059595C (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140596198 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140596AE8 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpCaptureDumpStart @ 0x140596EEC (IopLiveDumpCaptureDumpStart.c)
 *     IopLiveDumpCorralProcessors @ 0x1405975E0 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEndMirroringCallback @ 0x140597850 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140597940 (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x140598B64 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpOpenVMMemoryPartition @ 0x1405993C8 (IopLiveDumpOpenVMMemoryPartition.c)
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x1405995A0 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x140599CC8 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     IopLiveDumpStartMirroringCallback @ 0x14059A110 (IopLiveDumpStartMirroringCallback.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x14059A150 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x14059A25C (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x14059A3CC (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x14059A4F8 (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x14059A5D8 (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x14059A714 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpDisabledOnBoot @ 0x14059A8D0 (IopLiveDumpTraceDumpDisabledOnBoot.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14059A9C0 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14059AAE4 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14059ACCC (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x14059AD04 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x14059AE40 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x14059AF7C (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14059B018 (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x14059B16C (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x14059B1E4 (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     IopLiveDumpUncorralProcessors @ 0x14059B3A0 (IopLiveDumpUncorralProcessors.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceEventGeneric @ 0x1405A0124 (IopLiveDumpTraceEventGeneric.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405A0300 (IopLiveDumpTraceNoArgs.c)
 * Callees:
 *     <none>
 */

bool IopLiveDumpIsTracingEnabled()
{
  return IopLiveDumpEtwRegHandle && IopLiveDumpEtwEnabled != 0;
}
