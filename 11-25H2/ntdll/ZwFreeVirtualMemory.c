/*
 * XREFs of ZwFreeVirtualMemory @ 0x1801635E0
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x180005620 (RtlpCSparseBitmapPageDecommit.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800240BC (LdrEnsureMrdataHeapExists.c)
 *     RtlpQueryRegistryValues @ 0x180085770 (RtlpQueryRegistryValues.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180098190 (RtlpHeapPerformCrossProcessQuery.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800B6D9C (EtwpAllocateTraceBufferPool.c)
 *     EtwpFreeLoggerContext @ 0x1800B78AC (EtwpFreeLoggerContext.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800B8DC0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpSegMgrCommit @ 0x1800BADA0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpFreeVA @ 0x1800BB940 (RtlpHpFreeVA.c)
 *     RtlpHpEnvFreeVA @ 0x1800BBEA0 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeFree @ 0x1800BC044 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpLargeReAlloc @ 0x1800BCCC4 (RtlpHpLargeReAlloc.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C7130 (PsspCaptureAuxiliaryPages.c)
 *     PsspFreeLinkedHandleList @ 0x1800C7CE8 (PsspFreeLinkedHandleList.c)
 *     PsspCaptureHandleInformation @ 0x1800C8758 (PsspCaptureHandleInformation.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x1800C8DE0 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PssNtFreeSnapshot @ 0x1800C93A0 (PssNtFreeSnapshot.c)
 *     PsspCaptureVaSpaceInformation @ 0x1800CA018 (PsspCaptureVaSpaceInformation.c)
 *     GetShipAssertBuffer @ 0x1800DF8C4 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800DF9C0 (WerEscalationLazyInit.c)
 *     RtlpDecommitBlock @ 0x1800E1200 (RtlpDecommitBlock.c)
 *     RtlStdInitializeStackDatabase @ 0x1800E49E0 (RtlStdInitializeStackDatabase.c)
 *     RtlCreateUserStack @ 0x1800F6D40 (RtlCreateUserStack.c)
 *     RtlpInitParameterBlock @ 0x1800F84E8 (RtlpInitParameterBlock.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800F88D0 (RtlCreateQueryDebugBuffer.c)
 *     RtlExtendMemoryZone @ 0x1800F9A70 (RtlExtendMemoryZone.c)
 *     RtlFreeUserStack @ 0x18010B600 (RtlFreeUserStack.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18010EEFC (PsspDuplicateSnapshotRemoteToRemote.c)
 *     PssNtFreeRemoteSnapshot @ 0x18010F670 (PssNtFreeRemoteSnapshot.c)
 *     RtlDestroyMemoryZone @ 0x180110270 (RtlDestroyMemoryZone.c)
 *     RtlDestroyHandleTable @ 0x180113A60 (RtlDestroyHandleTable.c)
 *     EtwpShutdownCompression @ 0x18011445C (EtwpShutdownCompression.c)
 *     LdrCreateEnclave @ 0x180114BD0 (LdrCreateEnclave.c)
 *     RtlStdDeleteStackDatabase @ 0x18011F460 (RtlStdDeleteStackDatabase.c)
 *     WerpFreeSid @ 0x180120D64 (WerpFreeSid.c)
 *     LdrDeleteEnclave @ 0x180134740 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x1801349F0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x180134F90 (RtlpProcessReflectionStartup.c)
 *     WerReportExceptionWorker @ 0x180136020 (WerReportExceptionWorker.c)
 *     RtlpTraceDatabaseFree @ 0x180149AE4 (RtlpTraceDatabaseFree.c)
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
