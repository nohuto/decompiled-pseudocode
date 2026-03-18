/*
 * XREFs of ZwModifyBootEntry @ 0x1406A87F0
 * Callers:
 *     DifZwModifyBootEntryWrapper @ 0x140640EF0 (DifZwModifyBootEntryWrapper.c)
 *     BiModifyBootEntry @ 0x14081556C (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwModifyBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
