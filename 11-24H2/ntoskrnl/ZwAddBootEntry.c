/*
 * XREFs of ZwAddBootEntry @ 0x1406A7150
 * Callers:
 *     DifZwAddBootEntryWrapper @ 0x14063B400 (DifZwAddBootEntryWrapper.c)
 *     BiAddBootEntry @ 0x14081494C (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddBootEntry(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
