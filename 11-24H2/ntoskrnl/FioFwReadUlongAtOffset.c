/*
 * XREFs of FioFwReadUlongAtOffset @ 0x14069BF2C
 * Callers:
 *     RaspMapGlyphIndexToLocation @ 0x14069BD2C (RaspMapGlyphIndexToLocation.c)
 *     BgpFoInitialize @ 0x140C6FFA0 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x140C701EC (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1404665BC (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FioFwReadUlongAtOffset(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  result = FioFwReadBytesAtOffset(a1, a2, 4u, a3);
  if ( (int)result >= 0 )
  {
    *a3 = _byteswap_ulong(*a3);
    return 0LL;
  }
  return result;
}
