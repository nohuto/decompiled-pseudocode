/*
 * XREFs of EditionIsHotKey @ 0x140289750
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1401C7F4C (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 */

_BOOL8 __fastcall EditionIsHotKey(__int64 a1, __int64 a2)
{
  return IsHotKey(a1, a2) != 0LL;
}
