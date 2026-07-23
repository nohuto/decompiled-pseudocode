/*
 * XREFs of ZwQueryBootEntryOrder @ 0x1406A9CF0
 * Callers:
 *     DifZwQueryBootEntryOrderWrapper @ 0x1406423B0 (DifZwQueryBootEntryOrderWrapper.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1407B57F4 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     SiGetEspFromFirmware @ 0x140816EE0 (SiGetEspFromFirmware.c)
 *     BiQueryBootEntryOrder @ 0x1409A6E98 (BiQueryBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
