/*
 * XREFs of ZwSetDriverEntryOrder @ 0x1406A97F0
 * Callers:
 *     DifZwSetDriverEntryOrderWrapper @ 0x140647CE0 (DifZwSetDriverEntryOrderWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetDriverEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
