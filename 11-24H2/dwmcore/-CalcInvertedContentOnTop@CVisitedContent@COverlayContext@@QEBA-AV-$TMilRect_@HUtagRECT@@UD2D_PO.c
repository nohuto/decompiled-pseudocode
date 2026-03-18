/*
 * XREFs of ?CalcInvertedContentOnTop@CVisitedContent@COverlayContext@@QEBA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180268BB8
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@111AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180268E88 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

int *__fastcall COverlayContext::CVisitedContent::CalcInvertedContentOnTop(
        const struct D2D_RECT_F *a1,
        int *a2,
        double a3)
{
  _OWORD *v4; // rdx
  const __m128i *v5; // rcx
  float *v6; // r8
  float v7; // xmm1_4
  struct D2D_RECT_F v9; // [rsp+20h] [rbp-18h] BYREF

  if ( IsEmpty(a1 + 1) )
    goto LABEL_12;
  v7 = *v6;
  v9 = (struct D2D_RECT_F)_mm_loadu_si128(v5);
  if ( v7 > v9.left )
    v9.left = v7;
  if ( v6[1] > v9.top )
    v9.top = v6[1];
  if ( v9.right > v6[2] )
    v9.right = v6[2];
  if ( v9.bottom > v6[3] )
    v9.bottom = v6[3];
  if ( IsEmpty(&v9) )
LABEL_12:
    *v4 = DirectX::g_XMZero;
  else
    PixelAlign(a2, (unsigned int *)&v9, a3);
  return a2;
}
