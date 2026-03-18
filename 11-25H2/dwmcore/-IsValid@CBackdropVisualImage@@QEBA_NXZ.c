/*
 * XREFs of ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x18000B1B0
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18000A124 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18000AC48 (-HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000AC70 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000BCC0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x18000CE1C (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x1800DDD70 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
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
