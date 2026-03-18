/*
 * XREFs of ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800AA280
 * Callers:
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800615F8 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x1800A75F0 (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x1800A820C (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@AEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x1800A9A98 (-GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@AEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingCont.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800A9D10 (-CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A9F60 (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA3A0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180100D00 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x180123C00 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x18019ECE0 (-GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801D4370 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?CalcDeviceTransformDelta@CResampleLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1802354A0 (-CalcDeviceTransformDelta@CResampleLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180246390 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?EnsureShapeRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x1802B2BB8 (-EnsureShapeRectAndTransform@CCursorState@@AEAAX_N@Z.c)
 *     ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x1802D9CA0 (-GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Scale(CMILMatrix *this, float a2, float a3, float a4)
{
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - 1.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(a3 - 1.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & _xmm) >= 0.000081380211 )
  {
    *(float *)this = a2 * *(float *)this;
    *((float *)this + 4) = a2 * *((float *)this + 4);
    *((float *)this + 8) = a2 * *((float *)this + 8);
    *((float *)this + 12) = a2 * *((float *)this + 12);
    *((float *)this + 1) = a3 * *((float *)this + 1);
    *((float *)this + 5) = a3 * *((float *)this + 5);
    *((float *)this + 9) = a3 * *((float *)this + 9);
    *((float *)this + 13) = a3 * *((float *)this + 13);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & _xmm) >= 0.000081380211 )
    {
      *((float *)this + 2) = a4 * *((float *)this + 2);
      *((float *)this + 6) = a4 * *((float *)this + 6);
      *((float *)this + 10) = a4 * *((float *)this + 10);
      *((float *)this + 14) = a4 * *((float *)this + 14);
    }
    *((_BYTE *)this + 64) &= 0xCCu;
  }
}
