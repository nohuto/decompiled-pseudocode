/*
 * XREFs of ZwModifyBootEntry @ 0x1406A9790
 * Callers:
 *     DifZwModifyBootEntryWrapper @ 0x14063F4B0 (DifZwModifyBootEntryWrapper.c)
 *     BiModifyBootEntry @ 0x140815CAC (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
