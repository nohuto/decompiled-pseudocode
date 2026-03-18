/*
 * XREFs of FioFwReadUlongAtOffset @ 0x140690BDC
 * Callers:
 *     RaspMapGlyphIndexToLocation @ 0x1406909DC (RaspMapGlyphIndexToLocation.c)
 *     BgpFoInitialize @ 0x140C5EBC0 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x140C5EE0C (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140467F0C (FioFwReadBytesAtOffset.c)
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
