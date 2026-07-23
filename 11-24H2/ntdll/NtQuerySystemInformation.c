/*
 * XREFs of NtQuerySystemInformation @ 0x180160710
 * Callers:
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180007A4C (RtlpQueryPseudoEnvironmentVariable.c)
 *     TpInitializePackage @ 0x180022E0C (TpInitializePackage.c)
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     RtlHpInitializeHeapManager @ 0x18009AFC8 (RtlHpInitializeHeapManager.c)
 *     EtwpStartUmLogger @ 0x1800A879C (EtwpStartUmLogger.c)
 *     SendMessageToWERService @ 0x1800ADEC8 (SendMessageToWERService.c)
 *     LdrInitializeMrdata @ 0x1800AEEE0 (LdrInitializeMrdata.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800F2CB8 (RtlpInitializeLowFragHeapManager.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800F6404 (RtlpInitializeNonVolatileFlush.c)
 *     RtlSystemTimeToLocalTime @ 0x1801019C0 (RtlSystemTimeToLocalTime.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18010EBEC (RtlpHeapTrkAllocCacheAligned.c)
 *     DbgUiIssueRemoteBreakin @ 0x180130CA0 (DbgUiIssueRemoteBreakin.c)
 *     RtlResetStackOverflow @ 0x180132B4C (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x180136530 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x180141D20 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x180142D20 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlInitializeProcessorFeaturesBitMap @ 0x1801454C8 (RtlInitializeProcessorFeaturesBitMap.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x18015E938 (LdrpLogIntegrityContinuityTelemetry.c)
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
