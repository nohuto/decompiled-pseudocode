/*
 * XREFs of ZwQueryDriverEntryOrder @ 0x1406A9D90
 * Callers:
 *     DifZwQueryDriverEntryOrderWrapper @ 0x140642F30 (DifZwQueryDriverEntryOrderWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
