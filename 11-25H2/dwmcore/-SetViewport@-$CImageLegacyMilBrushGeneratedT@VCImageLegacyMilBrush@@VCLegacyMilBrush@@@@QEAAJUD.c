/*
 * XREFs of ?SetViewport@?$CImageLegacyMilBrushGeneratedT@VCImageLegacyMilBrush@@VCLegacyMilBrush@@@@QEAAJUD2D_RECT_F@@@Z @ 0x180077410
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 */

__int64 __fastcall CImageLegacyMilBrushGeneratedT<CImageLegacyMilBrush,CLegacyMilBrush>::SetViewport(
        __m128i *a1,
        const __m128i *a2)
{
  __m128 v2; // xmm2
  __m128 v3; // xmm3

  v2 = (__m128)_mm_loadu_si128(a1 + 7);
  v3 = (__m128)_mm_loadu_si128(a2);
  if ( v3.m128_f32[0] != v2.m128_f32[0]
    || _mm_shuffle_ps(v3, v3, 85).m128_f32[0] != _mm_shuffle_ps(v2, v2, 85).m128_f32[0]
    || _mm_shuffle_ps(v3, v3, 170).m128_f32[0] != _mm_shuffle_ps(v2, v2, 170).m128_f32[0]
    || _mm_shuffle_ps(v3, v3, 255).m128_f32[0] != _mm_shuffle_ps(v2, v2, 255).m128_f32[0] )
  {
    a1[7] = *a2;
    CResource::OnPropertyChanged((CResource *)a1);
  }
  return 0LL;
}
