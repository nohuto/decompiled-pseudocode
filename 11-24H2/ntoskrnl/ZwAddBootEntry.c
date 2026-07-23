/*
 * XREFs of ZwAddBootEntry @ 0x1406A80F0
 * Callers:
 *     DifZwAddBootEntryWrapper @ 0x1406399C0 (DifZwAddBootEntryWrapper.c)
 *     BiAddBootEntry @ 0x14081508C (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
