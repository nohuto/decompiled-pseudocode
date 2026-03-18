/*
 * XREFs of ZwModifyDriverEntry @ 0x1406A8810
 * Callers:
 *     DifZwModifyDriverEntryWrapper @ 0x140641060 (DifZwModifyDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwModifyDriverEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
