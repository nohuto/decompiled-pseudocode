/*
 * XREFs of FioFwReadUshortAtOffset @ 0x1404F8754
 * Callers:
 *     RaspInitializeGlyphData @ 0x14046612C (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x14069AECC (RaspGetCompositeGlyphList.c)
 *     RaspLoadBearings @ 0x14069B820 (RaspLoadBearings.c)
 *     RaspLoadCompositeGlyphData @ 0x14069B994 (RaspLoadCompositeGlyphData.c)
 *     RaspLoadGlyphData @ 0x14069BB90 (RaspLoadGlyphData.c)
 *     RaspMapGlyphIndexToLocation @ 0x14069BD2C (RaspMapGlyphIndexToLocation.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1404665BC (FioFwReadBytesAtOffset.c)
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
