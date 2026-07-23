/*
 * XREFs of FioFwReadUshortAtOffset @ 0x1404F6034
 * Callers:
 *     RaspInitializeGlyphData @ 0x14045DA88 (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x14069BF4C (RaspGetCompositeGlyphList.c)
 *     RaspLoadBearings @ 0x14069C8A0 (RaspLoadBearings.c)
 *     RaspLoadCompositeGlyphData @ 0x14069CA14 (RaspLoadCompositeGlyphData.c)
 *     RaspLoadGlyphData @ 0x14069CC10 (RaspLoadGlyphData.c)
 *     RaspMapGlyphIndexToLocation @ 0x14069CDAC (RaspMapGlyphIndexToLocation.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14045DF18 (FioFwReadBytesAtOffset.c)
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
