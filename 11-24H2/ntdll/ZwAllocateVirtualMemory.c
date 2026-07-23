/*
 * XREFs of ZwAllocateVirtualMemory @ 0x180160350
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x18000C530 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendHeap @ 0x18000CB60 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18000D030 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180010480 (RtlpCommitBlock.c)
 *     EtwpAllocateFreeBuffers @ 0x18001E738 (EtwpAllocateFreeBuffers.c)
 *     RtlpValidateHeap @ 0x1800216B0 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180021CEC (RtlpValidateHeapHeaders.c)
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x180025C40 (RtlpInitializeHeapSegment.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x1800287E4 (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpCopyRemoteDebugInformation @ 0x180029D60 (RtlpCopyRemoteDebugInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x18002A340 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessBackTraceInformation @ 0x18002AD20 (RtlQueryProcessBackTraceInformation.c)
 *     RtlpCommitQueryDebugInfo @ 0x18002B900 (RtlpCommitQueryDebugInfo.c)
 *     RtlpWalkCallbackRoutine @ 0x18002BBD0 (RtlpWalkCallbackRoutine.c)
 *     RtlInitializeResource @ 0x18002F1C0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002FD30 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpStdExtendUpperWatermark @ 0x180030EDC (RtlpStdExtendUpperWatermark.c)
 *     LdrEnsureMrdataHeapExists @ 0x180033910 (LdrEnsureMrdataHeapExists.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlAllocateHandle @ 0x18007B350 (RtlAllocateHandle.c)
 *     RtlpQueryRegistryValues @ 0x1800829E0 (RtlpQueryRegistryValues.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800A99BC (EtwpAllocateTraceBufferPool.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800BA5E4 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureThreadInformation @ 0x1800BA890 (PsspCaptureThreadInformation.c)
 *     PssNtCaptureSnapshot @ 0x1800BB350 (PssNtCaptureSnapshot.c)
 *     PsspCaptureHandleInformation @ 0x1800BBB28 (PsspCaptureHandleInformation.c)
 *     PsspCaptureVaSpaceInformation @ 0x1800BCE28 (PsspCaptureVaSpaceInformation.c)
 *     GetShipAssertBuffer @ 0x1800DE1E4 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DE2E0 (WerEscalationLazyInit.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DF2A0 (WerpAllocateAndInitializeSid.c)
 *     RtlStdInitializeStackDatabase @ 0x1800E0EC0 (RtlStdInitializeStackDatabase.c)
 *     RtlCreateMemoryZone @ 0x1800E1390 (RtlCreateMemoryZone.c)
 *     RtlpExtendLowFragHeapSegment @ 0x1800E8614 (RtlpExtendLowFragHeapSegment.c)
 *     RtlCreateUserStack @ 0x1800EFCE0 (RtlCreateUserStack.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800F11D0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800F1930 (RtlpStdExtendLowerWatermark.c)
 *     RtlExtendMemoryZone @ 0x1800F2A50 (RtlExtendMemoryZone.c)
 *     EtwpInitializeCompression @ 0x18010D7D0 (EtwpInitializeCompression.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1801109D0 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180118458 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180118A0C (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlCreateProcessReflection @ 0x180131140 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1801316E0 (RtlpProcessReflectionStartup.c)
 *     RtlResetStackOverflow @ 0x180132B4C (RtlResetStackOverflow.c)
 *     RtlpAllocateTags @ 0x18013FFF8 (RtlpAllocateTags.c)
 *     RtlpTraceDatabaseAllocate @ 0x180146898 (RtlpTraceDatabaseAllocate.c)
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
