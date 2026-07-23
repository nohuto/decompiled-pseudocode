/*
 * XREFs of ZwEnumerateBootEntries @ 0x1406A9090
 * Callers:
 *     DifZwEnumerateBootEntriesWrapper @ 0x14063DCC0 (DifZwEnumerateBootEntriesWrapper.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1407B57F4 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     SiGetEspFromFirmware @ 0x140816EE0 (SiGetEspFromFirmware.c)
 *     BiEnumerateBootEntries @ 0x1409A7518 (BiEnumerateBootEntries.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
