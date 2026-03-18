/*
 * XREFs of ZwAddDriverEntry @ 0x1406A7170
 * Callers:
 *     DifZwAddDriverEntryWrapper @ 0x14063B570 (DifZwAddDriverEntryWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddDriverEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
