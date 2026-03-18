/*
 * XREFs of ZwEnumerateBootEntries @ 0x1406A80F0
 * Callers:
 *     DifZwEnumerateBootEntriesWrapper @ 0x14063F700 (DifZwEnumerateBootEntriesWrapper.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1407B53A4 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     SiGetEspFromFirmware @ 0x1408167A0 (SiGetEspFromFirmware.c)
 *     BiEnumerateBootEntries @ 0x1409C0EC8 (BiEnumerateBootEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateBootEntries(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
