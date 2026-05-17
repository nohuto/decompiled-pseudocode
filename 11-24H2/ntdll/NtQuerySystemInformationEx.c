/*
 * XREFs of NtQuerySystemInformationEx @ 0x180164A40
 * Callers:
 *     RtlpQueryProcessMachine @ 0x1800443A4 (RtlpQueryProcessMachine.c)
 *     RtlQueryProcessDebugInformation @ 0x180044CD0 (RtlQueryProcessDebugInformation.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180085B9C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x1800A4968 (RtlpHpEnvQueryProcessorCount.c)
 *     TppQueryMaximumGroupCount @ 0x1800A5614 (TppQueryMaximumGroupCount.c)
 *     RtlGetVersion @ 0x1800AA620 (RtlGetVersion.c)
 *     TppPoolUpdateNodeRelation @ 0x1800ABAAC (TppPoolUpdateNodeRelation.c)
 *     RtlWow64GetProcessMachines @ 0x1800AFD00 (RtlWow64GetProcessMachines.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800D6550 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x1800D6FB0 (RtlpFcQueryFeatureConfigurationFromKernel.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x1800F60F0 (RtlWow64IsWowGuestMachineSupported.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySystemInformationEx()
{
  __int64 result; // rax

  result = 366LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
