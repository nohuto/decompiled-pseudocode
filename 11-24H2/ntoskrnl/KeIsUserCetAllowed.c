/*
 * XREFs of KeIsUserCetAllowed @ 0x140497634
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

bool KeIsUserCetAllowed()
{
  return KiUserCetAllowed != 0;
}
