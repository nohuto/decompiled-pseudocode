/*
 * XREFs of ZwFreeVirtualMemory @ 0x180160410
 * Callers:
 *     RtlpSecMemFreeVirtualMemory @ 0x180028580 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x18002EE00 (RtlpCSparseBitmapPageDecommit.c)
 *     LdrEnsureMrdataHeapExists @ 0x180033910 (LdrEnsureMrdataHeapExists.c)
 *     RtlpQueryRegistryValues @ 0x1800829E0 (RtlpQueryRegistryValues.c)
 *     RtlpHpSegMgrCommit @ 0x18009C5B0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpFreeVA @ 0x18009D150 (RtlpHpFreeVA.c)
 *     RtlpHpEnvFreeVA @ 0x18009D6B0 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeFree @ 0x18009D854 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpLargeReAlloc @ 0x18009E474 (RtlpHpLargeReAlloc.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800A99BC (EtwpAllocateTraceBufferPool.c)
 *     EtwpFreeLoggerContext @ 0x1800AA48C (EtwpFreeLoggerContext.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800BA5E4 (PsspCaptureAuxiliaryPages.c)
 *     PsspFreeLinkedHandleList @ 0x1800BB2B4 (PsspFreeLinkedHandleList.c)
 *     PsspCaptureHandleInformation @ 0x1800BBB28 (PsspCaptureHandleInformation.c)
 *     PssNtFreeSnapshot @ 0x1800BC1B0 (PssNtFreeSnapshot.c)
 *     PsspCaptureVaSpaceInformation @ 0x1800BCE28 (PsspCaptureVaSpaceInformation.c)
 *     GetShipAssertBuffer @ 0x1800DE1E4 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DE2E0 (WerEscalationLazyInit.c)
 *     RtlStdInitializeStackDatabase @ 0x1800E0EC0 (RtlStdInitializeStackDatabase.c)
 *     RtlCreateUserStack @ 0x1800EFCE0 (RtlCreateUserStack.c)
 *     RtlpInitParameterBlock @ 0x1800F0D78 (RtlpInitParameterBlock.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800F11D0 (RtlCreateQueryDebugBuffer.c)
 *     RtlExtendMemoryZone @ 0x1800F2A50 (RtlExtendMemoryZone.c)
 *     RtlFreeUserStack @ 0x180103B60 (RtlFreeUserStack.c)
 *     RtlDestroyMemoryZone @ 0x1801086D0 (RtlDestroyMemoryZone.c)
 *     RtlDestroyHandleTable @ 0x18010BEB0 (RtlDestroyHandleTable.c)
 *     EtwpShutdownCompression @ 0x18010C83C (EtwpShutdownCompression.c)
 *     LdrCreateEnclave @ 0x18010CEE0 (LdrCreateEnclave.c)
 *     PssNtFreeRemoteSnapshot @ 0x18010D9B0 (PssNtFreeRemoteSnapshot.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1801109D0 (RtlpHeapPerformCrossProcessQuery.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180118458 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180118A0C (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlStdDeleteStackDatabase @ 0x18011BDC0 (RtlStdDeleteStackDatabase.c)
 *     WerpFreeSid @ 0x18011D6C4 (WerpFreeSid.c)
 *     LdrDeleteEnclave @ 0x180130E90 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x180131140 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1801316E0 (RtlpProcessReflectionStartup.c)
 *     WerReportExceptionWorker @ 0x1801329A0 (WerReportExceptionWorker.c)
 *     RtlpTraceDatabaseFree @ 0x1801468E4 (RtlpTraceDatabaseFree.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  NTSTATUS result; // eax

  result = 30;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
