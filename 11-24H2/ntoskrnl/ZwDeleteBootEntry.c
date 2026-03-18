/*
 * XREFs of ZwDeleteBootEntry @ 0x1406A7F30
 * Callers:
 *     DifZwDeleteBootEntryWrapper @ 0x14063EA80 (DifZwDeleteBootEntryWrapper.c)
 *     BiDeleteBootEntry @ 0x14081519C (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
