/*
 * XREFs of ZwSetBootEntryOrder @ 0x1406AA670
 * Callers:
 *     DifZwSetBootEntryOrderWrapper @ 0x140645FC0 (DifZwSetBootEntryOrderWrapper.c)
 *     BiSetBootEntryOrder @ 0x1409A7FB8 (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
