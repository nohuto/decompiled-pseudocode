/*
 * XREFs of ZwModifyDriverEntry @ 0x1406A97B0
 * Callers:
 *     DifZwModifyDriverEntryWrapper @ 0x14063F620 (DifZwModifyDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
