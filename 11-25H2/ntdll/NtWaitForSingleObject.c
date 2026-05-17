/*
 * XREFs of NtWaitForSingleObject @ 0x1801632A0
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x180005E10 (RtlpWaitOnCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x18006FAA0 (LdrpDrainWorkQueue.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180098190 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlQueryProcessDebugInformation @ 0x1800989B0 (RtlQueryProcessDebugInformation.c)
 *     LdrpResReadFile @ 0x1800A65C0 (LdrpResReadFile.c)
 *     EtwpStopUmLogger @ 0x1800B5164 (EtwpStopUmLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x1800B6A90 (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x1800B6AE0 (EtwpLogger.c)
 *     WaitForWerSvc @ 0x1800CEE9C (WaitForWerSvc.c)
 *     RtlReportSilentProcessExit @ 0x1800CF190 (RtlReportSilentProcessExit.c)
 *     LdrpWaitForInitializationComplete @ 0x1800D23D0 (LdrpWaitForInitializationComplete.c)
 *     RtlAcquireResourceShared @ 0x1800DBD10 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800DD8A0 (RtlAcquireResourceExclusive.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800F86A0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpWow64SuspendThread @ 0x1800FAB70 (RtlpWow64SuspendThread.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x180114A34 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlpWow64SuspendProcess @ 0x180133EC8 (RtlpWow64SuspendProcess.c)
 *     RtlCreateProcessReflection @ 0x1801349F0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x180134F90 (RtlpProcessReflectionStartup.c)
 *     RtlSetProcessDebugInformation @ 0x180135690 (RtlSetProcessDebugInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1801490A0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     LdrHotPatchNotify @ 0x18015FB50 (LdrHotPatchNotify.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 4;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
