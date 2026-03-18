/*
 * XREFs of ZwSetBootEntryOrder @ 0x1406A96D0
 * Callers:
 *     DifZwSetBootEntryOrderWrapper @ 0x140647A00 (DifZwSetBootEntryOrderWrapper.c)
 *     BiSetBootEntryOrder @ 0x1409C1968 (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
