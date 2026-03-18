/*
 * XREFs of SelectFont @ 0x1402EB250
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 */

HFONT __fastcall SelectFont(__int64 a1)
{
  return GreSelectFont(*(HDC *)a1, *(HFONT *)(a1 + 8));
}
