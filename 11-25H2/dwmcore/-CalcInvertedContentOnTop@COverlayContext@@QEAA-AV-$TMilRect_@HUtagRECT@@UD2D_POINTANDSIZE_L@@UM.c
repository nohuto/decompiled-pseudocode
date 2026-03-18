/*
 * XREFs of ?CalcInvertedContentOnTop@COverlayContext@@QEAA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024D300
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023E0CC (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

int *__fastcall COverlayContext::CalcInvertedContentOnTop(const struct D2D_RECT_F *a1, int *a2)
{
  _OWORD *v3; // rdx
  const __m128i *v4; // rcx
  __int64 v5; // r8
  __m128i v6; // xmm1
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm4_4
  double v11; // xmm3_8
  double v12; // xmm2_8
  float v13; // xmm5_4
  float v14; // xmm3_4
  __m128i v16; // [rsp+20h] [rbp-10h] BYREF

  if ( IsEmpty(a1 + 1226) )
    goto LABEL_16;
  v6 = _mm_loadu_si128(v4);
  v7 = *(float *)v5;
  v16 = v6;
  if ( v7 > *(float *)v6.m128i_i32 )
  {
    *(float *)v16.m128i_i32 = v7;
    *(float *)v6.m128i_i32 = v7;
  }
  v8 = *(float *)&v16.m128i_i32[1];
  v9 = *(float *)(v5 + 4);
  v10 = *(float *)&v16.m128i_i32[1];
  if ( v9 > *(float *)&v16.m128i_i32[1] )
  {
    v16.m128i_i32[1] = *(_DWORD *)(v5 + 4);
    v8 = v9;
    v10 = v9;
  }
  *(_QWORD *)&v11 = *(unsigned int *)(v5 + 8);
  *(_QWORD *)&v12 = v16.m128i_u32[2];
  if ( *(float *)&v16.m128i_i32[2] > *(float *)&v11 )
  {
    v16.m128i_i32[2] = *(_DWORD *)(v5 + 8);
    v12 = v11;
  }
  v13 = *(float *)(v5 + 12);
  v14 = *(float *)&v16.m128i_i32[3];
  if ( *(float *)&v16.m128i_i32[3] > v13 )
  {
    v16.m128i_i32[3] = *(_DWORD *)(v5 + 12);
    v14 = v13;
  }
  if ( *(float *)&v12 <= *(float *)v6.m128i_i32 || v14 <= v10 )
  {
    v8 = 0.0;
    v6.m128i_i32[0] = 0;
    v12 = 0.0;
    v16 = 0uLL;
    v14 = 0.0;
  }
  if ( *(float *)&v12 <= *(float *)v6.m128i_i32 || v14 <= v8 )
LABEL_16:
    *v3 = DirectX::g_XMZero;
  else
    PixelAlign(a2, (unsigned int *)&v16, v12);
  return a2;
}
