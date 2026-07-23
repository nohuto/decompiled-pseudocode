/*
 * XREFs of KeIsUserCetAllowed @ 0x140491FC4
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

bool KeIsUserCetAllowed()
{
  return KiUserCetAllowed != 0;
}
