/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800B9E3C
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18001A9F4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1802280F0 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180292780 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180293580 (-GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBVIBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295B10 (-GetBVIBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1802A2CB0 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z @ 0x1802DB71C (-CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z.c)
 * Callees:
 *     ?Free@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAXPEAX@Z @ 0x1800BA33C (-Free@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ??1CSurfaceDrawListBrush@@UEAA@XZ @ 0x1800BA42C (--1CSurfaceDrawListBrush@@UEAA@XZ.c)
 */

__int64 __fastcall wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>(
        __int64 a1)
{
  __int64 result; // rax
  CSurfaceDrawListBrush *v2; // rbx

  if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(_QWORD *)(a1 + 8);
    v2 = **(CSurfaceDrawListBrush ***)a1;
    **(_QWORD **)a1 = result;
    if ( v2 )
    {
      CSurfaceDrawListBrush::~CSurfaceDrawListBrush(v2);
      return CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Free(v2);
    }
  }
  return result;
}
