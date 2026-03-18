/*
 * XREFs of FioFwReadUshortAtOffset @ 0x1404F5FA0
 * Callers:
 *     RaspInitializeGlyphData @ 0x140467A7C (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x14068FB7C (RaspGetCompositeGlyphList.c)
 *     RaspLoadBearings @ 0x1406904D0 (RaspLoadBearings.c)
 *     RaspLoadCompositeGlyphData @ 0x140690644 (RaspLoadCompositeGlyphData.c)
 *     RaspLoadGlyphData @ 0x140690840 (RaspLoadGlyphData.c)
 *     RaspMapGlyphIndexToLocation @ 0x1406909DC (RaspMapGlyphIndexToLocation.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140467F0C (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FioFwReadUshortAtOffset(__int64 a1, unsigned int a2, _WORD *a3)
{
  __int64 result; // rax

  result = FioFwReadBytesAtOffset(a1, a2, 2u, a3);
  if ( (int)result >= 0 )
  {
    *a3 = __ROR2__(*a3, 8);
    return 0LL;
  }
  return result;
}
