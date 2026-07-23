/*
 * XREFs of ZwQueryBootOptions @ 0x1406A9D10
 * Callers:
 *     DifZwQueryBootOptionsWrapper @ 0x140642520 (DifZwQueryBootOptionsWrapper.c)
 *     SiGetEspFromFirmware @ 0x140816EE0 (SiGetEspFromFirmware.c)
 *     BiQueryBootOptions @ 0x1409A6F74 (BiQueryBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
