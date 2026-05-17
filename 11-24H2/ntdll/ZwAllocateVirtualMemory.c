/*
 * XREFs of ZwAllocateVirtualMemory @ 0x180161F90
 * Callers:
 *     WerpAllocateAndInitializeSid @ 0x1800010F8 (WerpAllocateAndInitializeSid.c)
 *     LdrEnsureMrdataHeapExists @ 0x180006F10 (LdrEnsureMrdataHeapExists.c)
 *     EtwpAllocateFreeBuffers @ 0x18003E4B8 (EtwpAllocateFreeBuffers.c)
 *     RtlpValidateHeap @ 0x180040D80 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800413BC (RtlpValidateHeapHeaders.c)
 *     RtlpCommitBlock @ 0x180042A00 (RtlpCommitBlock.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800444B0 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpCopyRemoteDebugInformation @ 0x180045DD0 (RtlpCopyRemoteDebugInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800463B0 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessBackTraceInformation @ 0x180046D20 (RtlQueryProcessBackTraceInformation.c)
 *     RtlpCommitQueryDebugInfo @ 0x180047450 (RtlpCommitQueryDebugInfo.c)
 *     RtlpWalkCallbackRoutine @ 0x180047E50 (RtlpWalkCallbackRoutine.c)
 *     EtwpAllocateTraceBufferPool @ 0x18008DEFC (EtwpAllocateTraceBufferPool.c)
 *     RtlInitializeResource @ 0x18009A370 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18009AEE0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpStdExtendUpperWatermark @ 0x18009C91C (RtlpStdExtendUpperWatermark.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18009D0A4 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x18009D204 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpExtendHeap @ 0x18009FC30 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1800A03B0 (RtlpFindAndCommitPages.c)
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1800A88DC (RtlpInitializeHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x1800A93BC (RtlpCreateLowFragHeap.c)
 *     RtlAllocateHandle @ 0x1800AEB70 (RtlAllocateHandle.c)
 *     RtlpQueryRegistryValues @ 0x1800B6140 (RtlpQueryRegistryValues.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C2A20 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureThreadInformation @ 0x1800C2CCC (PsspCaptureThreadInformation.c)
 *     PssNtCaptureSnapshot @ 0x1800C3790 (PssNtCaptureSnapshot.c)
 *     PsspCaptureHandleInformation @ 0x1800C3F68 (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation @ 0x1800C5268 (PsspCaptureVaSpaceInformation.c)
 *     GetShipAssertBuffer @ 0x1800E2C14 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800E2D10 (WerEscalationLazyInit.c)
 *     RtlStdInitializeStackDatabase @ 0x1800E5A10 (RtlStdInitializeStackDatabase.c)
 *     RtlCreateMemoryZone @ 0x1800E5EE0 (RtlCreateMemoryZone.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800EFA38 (RtlpStdExtendLowerWatermark.c)
 *     RtlCreateUserStack @ 0x1800F51C0 (RtlCreateUserStack.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800F6C70 (RtlCreateQueryDebugBuffer.c)
 *     RtlExtendMemoryZone @ 0x1800F7EE0 (RtlExtendMemoryZone.c)
 *     EtwpInitializeCompression @ 0x180112360 (EtwpInitializeCompression.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18011A228 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18011A7DC (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlCreateProcessReflection @ 0x180132F10 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1801334B0 (RtlpProcessReflectionStartup.c)
 *     RtlResetStackOverflow @ 0x18013491C (RtlResetStackOverflow.c)
 *     RtlpAllocateTags @ 0x180141E48 (RtlpAllocateTags.c)
 *     RtlpTraceDatabaseAllocate @ 0x1801484E8 (RtlpTraceDatabaseAllocate.c)
 * Callees:
 *     <none>
 */

__int64 ZwAllocateVirtualMemory()
{
  __int64 result; // rax

  result = 24LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
