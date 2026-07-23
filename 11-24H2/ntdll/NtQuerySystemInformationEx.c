/*
 * XREFs of NtQuerySystemInformationEx @ 0x180162E00
 * Callers:
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180007A4C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlGetVersion @ 0x18000B7B0 (RtlGetVersion.c)
 *     TppQueryMaximumGroupCount @ 0x180023184 (TppQueryMaximumGroupCount.c)
 *     RtlQueryProcessDebugInformation @ 0x180028C60 (RtlQueryProcessDebugInformation.c)
 *     RtlWow64GetProcessMachines @ 0x18007C5A0 (RtlWow64GetProcessMachines.c)
 *     TppPoolUpdateNodeRelation @ 0x180085F2C (TppPoolUpdateNodeRelation.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800D18C0 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x1800D2320 (RtlpFcQueryFeatureConfigurationFromKernel.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x1800F0650 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x1800F48EC (RtlpHpEnvQueryProcessorCount.c)
 *     RtlpQueryProcessMachine @ 0x180113DDC (RtlpQueryProcessMachine.c)
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
