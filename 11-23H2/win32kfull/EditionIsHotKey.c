/*
 * XREFs of EditionIsHotKey @ 0x1C01BFB70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1C0036308 (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 */

_BOOL8 __fastcall EditionIsHotKey(__int64 a1, int a2)
{
  return IsHotKey(a1, a2) != 0LL;
}
