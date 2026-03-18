/*
 * XREFs of BgpFoGetAdvanceWidth @ 0x14068D378
 * Callers:
 *     BgpTxtDisplayString @ 0x140BA2BB0 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpRasGetGlyphAdvanceWidth @ 0x14068F8B0 (BgpRasGetGlyphAdvanceWidth.c)
 */

__int64 __fastcall BgpFoGetAdvanceWidth(int a1, int a2, int a3, int a4, __int64 a5)
{
  return BgpRasGetGlyphAdvanceWidth(a1, a2, a3, a4, a5);
}
