/*
 * XREFs of ?AddInvertedContentBounds@COverlayContext@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18025002C
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B8E40 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x18002D9D0 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

char __fastcall COverlayContext::AddInvertedContentBounds(float *a1, float *a2)
{
  const struct CMonitorTransform *MonitorTransform; // rax
  float v5; // xmm1_4
  __m128i v6; // xmm0
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  __m128i v14; // [rsp+20h] [rbp-18h] BYREF

  MonitorTransform = COverlayContext::GetMonitorTransform((COverlayContext *)a1);
  v5 = *a2;
  v6 = _mm_loadu_si128((const __m128i *)((char *)MonitorTransform + 8));
  v14 = v6;
  if ( v5 > *(float *)v6.m128i_i32 )
  {
    *(float *)v14.m128i_i32 = v5;
    *(float *)v6.m128i_i32 = v5;
  }
  v7 = a2[1];
  v8 = *(float *)&v14.m128i_i32[1];
  if ( v7 > *(float *)&v14.m128i_i32[1] )
  {
    v14.m128i_i32[1] = (__int32)a2[1];
    v8 = v7;
  }
  v9 = a2[2];
  v10 = *(float *)&v14.m128i_i32[2];
  if ( *(float *)&v14.m128i_i32[2] > v9 )
  {
    v14.m128i_i32[2] = (__int32)a2[2];
    v10 = v9;
  }
  v11 = a2[3];
  v12 = *(float *)&v14.m128i_i32[3];
  if ( *(float *)&v14.m128i_i32[3] > v11 )
  {
    v14.m128i_i32[3] = (__int32)a2[3];
    v12 = v11;
  }
  if ( v10 > *(float *)v6.m128i_i32 && v12 > v8 )
    LOBYTE(MonitorTransform) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(
                                 a1 + 4904,
                                 (float *)v14.m128i_i32);
  return (char)MonitorTransform;
}
