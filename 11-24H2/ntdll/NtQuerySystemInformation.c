/*
 * XREFs of NtQuerySystemInformation @ 0x180162350
 * Callers:
 *     SendMessageToWERService @ 0x1800015D0 (SendMessageToWERService.c)
 *     LdrInitializeMrdata @ 0x180066D00 (LdrInitializeMrdata.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180085B9C (RtlpQueryPseudoEnvironmentVariable.c)
 *     EtwpStartUmLogger @ 0x18008CCDC (EtwpStartUmLogger.c)
 *     RtlHpInitializeHeapManager @ 0x18009043C (RtlHpInitializeHeapManager.c)
 *     TpInitializePackage @ 0x1800A52A0 (TpInitializePackage.c)
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800F8148 (RtlpInitializeLowFragHeapManager.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800FB4D4 (RtlpInitializeNonVolatileFlush.c)
 *     RtlSystemTimeToLocalTime @ 0x180106A90 (RtlSystemTimeToLocalTime.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1801138EC (RtlpHeapTrkAllocCacheAligned.c)
 *     DbgUiIssueRemoteBreakin @ 0x180132A70 (DbgUiIssueRemoteBreakin.c)
 *     RtlResetStackOverflow @ 0x18013491C (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x180138300 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x180143970 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180144970 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlInitializeProcessorFeaturesBitMap @ 0x180147118 (RtlInitializeProcessorFeaturesBitMap.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x180160578 (LdrpLogIntegrityContinuityTelemetry.c)
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
