/*
 * XREFs of ?reset@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDrawListBrush@@@Z @ 0x1800A053C
 * Callers:
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18001A190 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18001A9F4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006B870 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18006C274 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18014F5E8 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180171F24 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ??$?4VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@1@@Z @ 0x1802043BC (--$-4VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@$0A@@-$unique_ptr@V.c)
 * Callees:
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x18009EF40 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 */

void __fastcall std::unique_ptr<CDrawListBrush>::reset(
        CMultiPrimitiveDrawListBrush **a1,
        CMultiPrimitiveDrawListBrush *a2)
{
  CMultiPrimitiveDrawListBrush *v2; // r8
  CSurfaceDrawListBrush *(__fastcall *v3)(CSurfaceDrawListBrush *, char, __int64); // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    v3 = **(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char, __int64))v2;
    if ( v3 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
    {
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v2, 1, (__int64)v2);
    }
    else if ( v3 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v2, 1, (__int64)v2);
    }
    else if ( (char *)v3 == (char *)CDrawListPrimitive0::`scalar deleting destructor' )
    {
      CDrawListPrimitive0::`scalar deleting destructor'(v2, 1u);
    }
    else
    {
      ((void (__fastcall *)(CMultiPrimitiveDrawListBrush *, __int64))v3)(v2, 1LL);
    }
  }
}
