/*
 * XREFs of NtGdiGetCharSet @ 0x1C00D1950
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharSet @ 0x1C00D1968 (GreGetCharSet.c)
 */

__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
