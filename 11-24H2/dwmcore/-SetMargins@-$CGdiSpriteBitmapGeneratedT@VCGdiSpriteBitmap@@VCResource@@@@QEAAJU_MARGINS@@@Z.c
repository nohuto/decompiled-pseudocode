/*
 * XREFs of ?SetMargins@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJU_MARGINS@@@Z @ 0x180025E38
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ @ 0x180026374 (-OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::SetMargins(__int64 a1, __m128i *a2)
{
  unsigned int v2; // ebx
  signed __int64 v3; // xmm0_8

  v2 = 0;
  if ( (int)a2->m128i_i64[0] < 0
    || (HIDWORD(a2->m128i_i64[0]) & 0x80000000) != 0
    || (v3 = _mm_srli_si128(*a2, 8).m128i_u64[0], (int)v3 < 0)
    || v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xDFu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x4B9u, 0LL);
    return (unsigned int)-2003303421;
  }
  else
  {
    *(__m128i *)(a1 + 88) = *a2;
    CGdiSpriteBitmap::OnMarginsChanged((CGdiSpriteBitmap *)a1);
  }
  return v2;
}
