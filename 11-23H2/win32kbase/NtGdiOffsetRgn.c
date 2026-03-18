/*
 * XREFs of NtGdiOffsetRgn @ 0x1C005BF40
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x1C005BF60 (GreOffsetRgn.c)
 */

__int64 __fastcall NtGdiOffsetRgn(HRGN a1)
{
  return GreOffsetRgn(a1);
}
