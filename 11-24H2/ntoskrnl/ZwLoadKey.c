/*
 * XREFs of ZwLoadKey @ 0x1406A8610
 * Callers:
 *     DifZwLoadKeyWrapper @ 0x140640B90 (DifZwLoadKeyWrapper.c)
 *     BiLoadHive @ 0x1409C2190 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
