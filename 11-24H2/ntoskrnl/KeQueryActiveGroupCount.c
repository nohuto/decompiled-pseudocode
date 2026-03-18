/*
 * XREFs of KeQueryActiveGroupCount @ 0x140481460
 * Callers:
 *     NtSetInformationCpuPartition @ 0x140775EC0 (NtSetInformationCpuPartition.c)
 *     EtwpProcessorRundown @ 0x1407B1358 (EtwpProcessorRundown.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     IopConnectInterrupt @ 0x140A12470 (IopConnectInterrupt.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     PsCreateSystemThreadEx @ 0x140A224A0 (PsCreateSystemThreadEx.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
