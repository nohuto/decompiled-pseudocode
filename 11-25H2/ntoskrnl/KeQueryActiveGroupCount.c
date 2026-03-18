/*
 * XREFs of KeQueryActiveGroupCount @ 0x1404807A0
 * Callers:
 *     NtSetInformationCpuPartition @ 0x1407664F0 (NtSetInformationCpuPartition.c)
 *     EtwpProcessorRundown @ 0x1407A1F88 (EtwpProcessorRundown.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     IopConnectInterrupt @ 0x1409A29B0 (IopConnectInterrupt.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     PsCreateSystemThreadEx @ 0x140A17780 (PsCreateSystemThreadEx.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
