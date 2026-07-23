/*
 * XREFs of ZwAddDriverEntry @ 0x1406A8110
 * Callers:
 *     DifZwAddDriverEntryWrapper @ 0x140639B30 (DifZwAddDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
