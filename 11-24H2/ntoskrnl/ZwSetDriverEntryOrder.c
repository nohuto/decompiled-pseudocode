/*
 * XREFs of ZwSetDriverEntryOrder @ 0x1406AA790
 * Callers:
 *     DifZwSetDriverEntryOrderWrapper @ 0x1406462A0 (DifZwSetDriverEntryOrderWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDriverEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
