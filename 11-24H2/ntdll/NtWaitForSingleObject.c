/*
 * XREFs of NtWaitForSingleObject @ 0x180161D10
 * Callers:
 *     WaitForWerSvc @ 0x18000103C (WaitForWerSvc.c)
 *     RtlReportSilentProcessExit @ 0x180002F20 (RtlReportSilentProcessExit.c)
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800444B0 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlQueryProcessDebugInformation @ 0x180044CD0 (RtlQueryProcessDebugInformation.c)
 *     LdrpWaitForInitializationComplete @ 0x180066750 (LdrpWaitForInitializationComplete.c)
 *     EtwpStopUmLogger @ 0x18008C4B4 (EtwpStopUmLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x18008DBE4 (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x18008DC40 (EtwpLogger.c)
 *     RtlpWaitOnCriticalSection @ 0x18009A7A0 (RtlpWaitOnCriticalSection.c)
 *     LdrpResReadFile @ 0x1800D2270 (LdrpResReadFile.c)
 *     RtlAcquireResourceShared @ 0x1800DC7A0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800E04E0 (RtlAcquireResourceExclusive.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800F6A40 (RtlWaitForWnfMetaNotification.c)
 *     RtlpWow64SuspendThread @ 0x1800F8F50 (RtlpWow64SuspendThread.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x180111934 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlpWow64SuspendProcess @ 0x1801323E8 (RtlpWow64SuspendProcess.c)
 *     RtlCreateProcessReflection @ 0x180132F10 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1801334B0 (RtlpProcessReflectionStartup.c)
 *     RtlSetProcessDebugInformation @ 0x180133BB0 (RtlSetProcessDebugInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x180147AF0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     LdrHotPatchNotify @ 0x18015E690 (LdrHotPatchNotify.c)
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
