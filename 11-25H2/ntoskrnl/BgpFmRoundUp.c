/*
 * XREFs of BgpFmRoundUp @ 0x140468AF8
 * Callers:
 *     RaspScanConvert @ 0x140468040 (RaspScanConvert.c)
 *     BgpRasPrintGlyph @ 0x140473D1C (BgpRasPrintGlyph.c)
 *     BgpRasGetGlyphTextCellDimensions @ 0x14068F900 (BgpRasGetGlyphTextCellDimensions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpFmRoundUp(int a1)
{
  __int64 result; // rax

  result = (unsigned int)(a1 >> 6);
  if ( a1 < 0 )
    return (unsigned int)result | 0xFC000000;
  if ( (a1 & 0x3F) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
