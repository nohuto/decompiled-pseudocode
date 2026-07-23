/*
 * XREFs of ZwAllocateVirtualMemory @ 0x180163520
 * Callers:
 *     RtlInitializeResource @ 0x1800059E0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180006550 (RtlpAddDebugInfoToCriticalSection.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800240BC (LdrEnsureMrdataHeapExists.c)
 *     RtlpStdExtendUpperWatermark @ 0x1800258CC (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180026054 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1800261B4 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpExtendHeap @ 0x180028BE0 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180029360 (RtlpFindAndCommitPages.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x18003771C (RtlpInitializeHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x1800381FC (RtlpCreateLowFragHeap.c)
 *     RtlAllocateHandle @ 0x180068460 (RtlAllocateHandle.c)
 *     RtlpQueryRegistryValues @ 0x180085770 (RtlpQueryRegistryValues.c)
 *     EtwpAllocateFreeBuffers @ 0x180091EA8 (EtwpAllocateFreeBuffers.c)
 *     RtlpValidateHeap @ 0x180094770 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180094DAC (RtlpValidateHeapHeaders.c)
 *     RtlpCommitBlock @ 0x1800966E0 (RtlpCommitBlock.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180098190 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpCopyRemoteDebugInformation @ 0x180099AB0 (RtlpCopyRemoteDebugInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x18009A090 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessBackTraceInformation @ 0x18009AA00 (RtlQueryProcessBackTraceInformation.c)
 *     RtlpCommitQueryDebugInfo @ 0x18009B130 (RtlpCommitQueryDebugInfo.c)
 *     RtlpWalkCallbackRoutine @ 0x18009BB30 (RtlpWalkCallbackRoutine.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800B6D9C (EtwpAllocateTraceBufferPool.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C7130 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureThreadInformation @ 0x1800C73DC (PsspCaptureThreadInformation.c)
 *     PssNtCaptureSnapshot @ 0x1800C7F80 (PssNtCaptureSnapshot.c)
 *     PsspCaptureHandleInformation @ 0x1800C8758 (PsspCaptureHandleInformation.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x1800C8DE0 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspCaptureVaSpaceInformation @ 0x1800CA018 (PsspCaptureVaSpaceInformation.c)
 *     WerpAllocateAndInitializeSid @ 0x1800CEF58 (WerpAllocateAndInitializeSid.c)
 *     GetShipAssertBuffer @ 0x1800DF8C4 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DF9C0 (WerEscalationLazyInit.c)
 *     RtlStdInitializeStackDatabase @ 0x1800E49E0 (RtlStdInitializeStackDatabase.c)
 *     RtlCreateMemoryZone @ 0x1800E4EB0 (RtlCreateMemoryZone.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800F12E8 (RtlpStdExtendLowerWatermark.c)
 *     RtlCreateUserStack @ 0x1800F6D40 (RtlCreateUserStack.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800F88D0 (RtlCreateQueryDebugBuffer.c)
 *     RtlExtendMemoryZone @ 0x1800F9A70 (RtlExtendMemoryZone.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18010EEFC (PsspDuplicateSnapshotRemoteToRemote.c)
 *     EtwpInitializeCompression @ 0x180115460 (EtwpInitializeCompression.c)
 *     RtlCreateProcessReflection @ 0x1801349F0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x180134F90 (RtlpProcessReflectionStartup.c)
 *     RtlResetStackOverflow @ 0x1801361CC (RtlResetStackOverflow.c)
 *     RtlpAllocateTags @ 0x180143538 (RtlpAllocateTags.c)
 *     RtlpTraceDatabaseAllocate @ 0x180149A98 (RtlpTraceDatabaseAllocate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  NTSTATUS result; // eax

  result = 24;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
