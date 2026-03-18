/*
 * XREFs of SetEmptyRgn @ 0x140105370
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x14002C480 (GreSetRectRgn.c)
 */

__int64 __fastcall SetEmptyRgn(HRGN a1)
{
  struct REGION_CORE *v2; // [rsp+20h] [rbp-18h]

  LODWORD(v2) = 0;
  return GreSetRectRgn(a1, 0, 0, 0, v2);
}
