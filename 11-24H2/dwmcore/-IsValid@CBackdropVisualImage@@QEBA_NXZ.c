/*
 * XREFs of ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18000B1E0
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800097B8 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000A7D0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18000AC78 (-HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000ACA0 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x18000C27C (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?GetBlurCacheRealizationKey@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@PEAPEBX@Z @ 0x1802457C0 (-GetBlurCacheRealizationKey@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@PEAPEBX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBackdropVisualImage::IsValid(CBackdropVisualImage *this)
{
  float v1; // xmm3_4
  float v2; // xmm2_4
  float v3; // xmm0_4
  bool result; // al

  result = *((_QWORD *)this + 17)
        && (float)(*((float *)this + 26) - *((float *)this + 24)) >= 1.0
        && (float)(*((float *)this + 27) - *((float *)this + 25)) >= 1.0
        && (v1 = *((float *)this + 532), v2 = *((float *)this + 534), v2 >= v1)
        && (v3 = *((float *)this + 535), v3 >= *((float *)this + 533))
        && (float)(v2 - v1) >= 1.0
        && (float)(v3 - *((float *)this + 533)) >= 1.0
        && *((float *)this + 30) > 0.5
        && *((float *)this + 31) > 0.5;
  return result;
}
