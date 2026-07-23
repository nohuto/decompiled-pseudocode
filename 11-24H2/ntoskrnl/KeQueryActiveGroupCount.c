/*
 * XREFs of KeQueryActiveGroupCount @ 0x14047C720
 * Callers:
 *     NtSetInformationCpuPartition @ 0x1407760E0 (NtSetInformationCpuPartition.c)
 *     EtwpProcessorRundown @ 0x1407B17A8 (EtwpProcessorRundown.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 *     IopConnectInterrupt @ 0x1409C0880 (IopConnectInterrupt.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
