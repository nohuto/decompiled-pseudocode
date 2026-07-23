/*
 * XREFs of NtQuerySystemInformationEx @ 0x180165FD0
 * Callers:
 *     RtlpHpEnvQueryProcessorCount @ 0x18003402C (RtlpHpEnvQueryProcessorCount.c)
 *     TppQueryMaximumGroupCount @ 0x180034454 (TppQueryMaximumGroupCount.c)
 *     RtlGetVersion @ 0x180039460 (RtlGetVersion.c)
 *     TppPoolUpdateNodeRelation @ 0x18003AF88 (TppPoolUpdateNodeRelation.c)
 *     RtlWow64GetProcessMachines @ 0x1800696C0 (RtlWow64GetProcessMachines.c)
 *     RtlpQueryProcessMachine @ 0x180098084 (RtlpQueryProcessMachine.c)
 *     RtlQueryProcessDebugInformation @ 0x1800989B0 (RtlQueryProcessDebugInformation.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18009F820 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x1800A063C (RtlpFcQueryFeatureConfigurationFromKernel.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x1800ADF2C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x1800F7C70 (RtlWow64IsWowGuestMachineSupported.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQuerySystemInformationEx(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 366;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
