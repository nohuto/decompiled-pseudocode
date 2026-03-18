/*
 * XREFs of NtGdiOffsetRgn @ 0x140118680
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x14002C0D0 (GreOffsetRgn.c)
 */

__int64 __fastcall NtGdiOffsetRgn(HRGN a1, int a2, int a3)
{
  return GreOffsetRgn(a1, a2, a3);
}
