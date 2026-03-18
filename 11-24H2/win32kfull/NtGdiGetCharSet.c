/*
 * XREFs of NtGdiGetCharSet @ 0x1400BB160
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharSet @ 0x1400BB178 (GreGetCharSet.c)
 */

__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
