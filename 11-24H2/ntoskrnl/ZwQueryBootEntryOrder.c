/*
 * XREFs of ZwQueryBootEntryOrder @ 0x1406A8D50
 * Callers:
 *     DifZwQueryBootEntryOrderWrapper @ 0x140643DF0 (DifZwQueryBootEntryOrderWrapper.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1407B53A4 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     SiGetEspFromFirmware @ 0x1408167A0 (SiGetEspFromFirmware.c)
 *     BiQueryBootEntryOrder @ 0x1409C0848 (BiQueryBootEntryOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
