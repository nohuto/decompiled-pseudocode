/*
 * XREFs of IopLiveDumpTrace @ 0x14059F900
 * Callers:
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x14049B204 (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405952CC (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140595B08 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140596458 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpCaptureDumpStart @ 0x140596858 (IopLiveDumpCaptureDumpStart.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1405972B0 (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1405984D4 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpOpenVMMemoryPartition @ 0x140598D38 (IopLiveDumpOpenVMMemoryPartition.c)
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x140598F10 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x140599638 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140599AC0 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140599BCC (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x140599D3C (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     IopLiveDumpTraceCaptureMemoryPages @ 0x140599E68 (IopLiveDumpTraceCaptureMemoryPages.c)
 *     IopLiveDumpTraceCaptureProcessorContextDuration @ 0x140599F48 (IopLiveDumpTraceCaptureProcessorContextDuration.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x14059A084 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceDumpDisabledOnBoot @ 0x14059A240 (IopLiveDumpTraceDumpDisabledOnBoot.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x14059A330 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x14059A454 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x14059A674 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x14059A7B0 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x14059A8EC (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14059A988 (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x14059AADC (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x14059AB54 (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     IopLiveDumpTraceNoArgs @ 0x14059FC50 (IopLiveDumpTraceNoArgs.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F84C4 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTrace()
{
  char result; // al
  ULONG UserDataCount; // edx
  const EVENT_DESCRIPTOR *v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // r8

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
    return EtwWriteEx(IopLiveDumpEtwRegHandle, v2, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  return result;
}
