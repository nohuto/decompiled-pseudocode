/*
 * XREFs of NtWaitForSingleObject @ 0x1801600D0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180028C60 (RtlQueryProcessDebugInformation.c)
 *     RtlpWaitOnCriticalSection @ 0x18002F5F0 (RtlpWaitOnCriticalSection.c)
 *     LdrpResReadFile @ 0x180098460 (LdrpResReadFile.c)
 *     EtwpStopUmLogger @ 0x1800A7F74 (EtwpStopUmLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x1800A96A4 (EtwpSynchronizeWithLogger.c)
 *     EtwpLogger @ 0x1800A9700 (EtwpLogger.c)
 *     LdrpDrainWorkQueue @ 0x1800AB680 (LdrpDrainWorkQueue.c)
 *     RtlReportSilentProcessExit @ 0x1800AB9C0 (RtlReportSilentProcessExit.c)
 *     LdrpWaitForInitializationComplete @ 0x1800AE930 (LdrpWaitForInitializationComplete.c)
 *     RtlAcquireResourceShared @ 0x1800D7910 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800DB5E0 (RtlAcquireResourceExclusive.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800F0FA0 (RtlWaitForWnfMetaNotification.c)
 *     RtlpWow64SuspendThread @ 0x1800F3B20 (RtlpWow64SuspendThread.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x18010CD44 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     WaitForWerSvc @ 0x18010FEEC (WaitForWerSvc.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1801109D0 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpWow64SuspendProcess @ 0x180130618 (RtlpWow64SuspendProcess.c)
 *     RtlCreateProcessReflection @ 0x180131140 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1801316E0 (RtlpProcessReflectionStartup.c)
 *     RtlSetProcessDebugInformation @ 0x180131DE0 (RtlSetProcessDebugInformation.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x180145EA0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 *     LdrHotPatchNotify @ 0x18015CA50 (LdrHotPatchNotify.c)
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
