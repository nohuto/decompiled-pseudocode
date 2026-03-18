/*
 * XREFs of IopLiveDumpIsTracingEnabled @ 0x1404FA9A4
 * Callers:
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x14049B4B4 (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IoCaptureLiveDump @ 0x1404E6068 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405989DC (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140599218 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140599B68 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpCaptureDumpStart @ 0x140599F68 (IopLiveDumpCaptureDumpStart.c)
 *     IopLiveDumpCorralProcessors @ 0x14059A660 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEndMirroringCallback @ 0x14059A8D0 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x14059A9C0 (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x14059BBE4 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpOpenVMMemoryPartition @ 0x14059C448 (IopLiveDumpOpenVMMemoryPartition.c)
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x14059C620 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x14059CD48 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     IopLiveDumpStartMirroringCallback @ 0x14059D190 (IopLiveDumpStartMirroringCallback.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x14059D1D0 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x14059D2DC (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x14059D44C (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x14059D578 (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x14059D658 (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x14059D794 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpDisabledOnBoot @ 0x14059D950 (IopLiveDumpTraceDumpDisabledOnBoot.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14059DA40 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14059DB64 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14059DD4C (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x14059DD84 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x14059DEC0 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x14059DFFC (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14059E098 (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x14059E1EC (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x14059E264 (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     IopLiveDumpUncorralProcessors @ 0x14059E420 (IopLiveDumpUncorralProcessors.c)
 *     IopLiveDumpTrace @ 0x1405A3070 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceEventGeneric @ 0x1405A31E4 (IopLiveDumpTraceEventGeneric.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405A33C0 (IopLiveDumpTraceNoArgs.c)
 * Callees:
 *     <none>
 */

bool IopLiveDumpIsTracingEnabled()
{
  return IopLiveDumpEtwRegHandle && IopLiveDumpEtwEnabled != 0;
}
