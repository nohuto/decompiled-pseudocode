/*
 * XREFs of NtQuerySystemInformation @ 0x1801638E0
 * Callers:
 *     TpInitializePackage @ 0x1800340DC (TpInitializePackage.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x1800ADF2C (RtlpQueryPseudoEnvironmentVariable.c)
 *     EtwpStartUmLogger @ 0x1800B598C (EtwpStartUmLogger.c)
 *     RtlHpInitializeHeapManager @ 0x1800B97BC (RtlHpInitializeHeapManager.c)
 *     SendMessageToWERService @ 0x1800CFEA0 (SendMessageToWERService.c)
 *     LdrInitializeMrdata @ 0x1800D2980 (LdrInitializeMrdata.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800F9CD8 (RtlpInitializeLowFragHeapManager.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800FD704 (RtlpInitializeNonVolatileFlush.c)
 *     RtlSystemTimeToLocalTime @ 0x1801093A0 (RtlSystemTimeToLocalTime.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18011687C (RtlpHeapTrkAllocCacheAligned.c)
 *     DbgUiIssueRemoteBreakin @ 0x180134550 (DbgUiIssueRemoteBreakin.c)
 *     RtlResetStackOverflow @ 0x1801361CC (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x180139A70 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x180145060 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180145EE0 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlInitializeProcessorFeaturesBitMap @ 0x1801486C8 (RtlInitializeProcessorFeaturesBitMap.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x180161AC8 (LdrpLogIntegrityContinuityTelemetry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 54;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
