/*
 * XREFs of ZwFreeVirtualMemory @ 0x180162050
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x180006F10 (LdrEnsureMrdataHeapExists.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800444B0 (RtlpHeapPerformCrossProcessQuery.c)
 *     EtwpAllocateTraceBufferPool @ 0x18008DEFC (EtwpAllocateTraceBufferPool.c)
 *     EtwpFreeLoggerContext @ 0x18008EA0C (EtwpFreeLoggerContext.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18008FA40 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpSegMgrCommit @ 0x180091A20 (RtlpHpSegMgrCommit.c)
 *     RtlpHpFreeVA @ 0x1800925C0 (RtlpHpFreeVA.c)
 *     RtlpHpEnvFreeVA @ 0x180092B20 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeFree @ 0x180092CC4 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpLargeReAlloc @ 0x180093AA4 (RtlpHpLargeReAlloc.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180099FB0 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpQueryRegistryValues @ 0x1800B6140 (RtlpQueryRegistryValues.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C2A20 (PsspCaptureAuxiliaryPages.c)
 *     PsspFreeLinkedHandleList @ 0x1800C36F4 (PsspFreeLinkedHandleList.c)
 *     PsspCaptureHandleInformation @ 0x1800C3F68 (PsspCaptureHandleInformation.c)
 *     PssNtFreeSnapshot @ 0x1800C45F0 (PssNtFreeSnapshot.c)
 *     PsspCaptureVaSpaceInformation @ 0x1800C5268 (PsspCaptureVaSpaceInformation.c)
 *     GetShipAssertBuffer @ 0x1800E2C14 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800E2D10 (WerEscalationLazyInit.c)
 *     RtlpDecommitBlock @ 0x1800E4140 (RtlpDecommitBlock.c)
 *     RtlStdInitializeStackDatabase @ 0x1800E5A10 (RtlStdInitializeStackDatabase.c)
 *     RtlCreateUserStack @ 0x1800F51C0 (RtlCreateUserStack.c)
 *     RtlpInitParameterBlock @ 0x1800F6818 (RtlpInitParameterBlock.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800F6C70 (RtlCreateQueryDebugBuffer.c)
 *     RtlExtendMemoryZone @ 0x1800F7EE0 (RtlExtendMemoryZone.c)
 *     RtlFreeUserStack @ 0x180108C30 (RtlFreeUserStack.c)
 *     RtlDestroyMemoryZone @ 0x18010D7F0 (RtlDestroyMemoryZone.c)
 *     RtlDestroyHandleTable @ 0x180110BF0 (RtlDestroyHandleTable.c)
 *     EtwpShutdownCompression @ 0x180111430 (EtwpShutdownCompression.c)
 *     LdrCreateEnclave @ 0x180111AD0 (LdrCreateEnclave.c)
 *     PssNtFreeRemoteSnapshot @ 0x1801126D0 (PssNtFreeRemoteSnapshot.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18011A228 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18011A7DC (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlStdDeleteStackDatabase @ 0x18011DB90 (RtlStdDeleteStackDatabase.c)
 *     WerpFreeSid @ 0x18011F494 (WerpFreeSid.c)
 *     LdrDeleteEnclave @ 0x180132C60 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x180132F10 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1801334B0 (RtlpProcessReflectionStartup.c)
 *     WerReportExceptionWorker @ 0x180134770 (WerReportExceptionWorker.c)
 *     RtlpTraceDatabaseFree @ 0x180148534 (RtlpTraceDatabaseFree.c)
 * Callees:
 *     <none>
 */

__int64 ZwFreeVirtualMemory()
{
  __int64 result; // rax

  result = 30LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
