/*
 * XREFs of ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800DEA78
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18000F914 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180023C04 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x1800441B8 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180080B20 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateEffectInput@CBackdropVisualImage@@QEAA?AUEffectInput@@XZ @ 0x1800DDB60 (-GenerateEffectInput@CBackdropVisualImage@@QEAA-AUEffectInput@@XZ.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18011567C (-SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x180119988 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18011A8EC (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180127930 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x180129678 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18012A1A4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18012AB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18016E0C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18016F850 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18019C790 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E3100 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x18024E820 (-DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAV.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18029DDE0 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1802AC7D0 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z @ 0x1802E49BC (-CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z.c)
 * Callees:
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800CF8B0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800DEB60 (-GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?GetCurrentRenderingRealization@CCachedImageProducer@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1801ECEF0 (-GetCurrentRenderingRealization@CCachedImageProducer@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CDrawListBitmap *__fastcall CDrawListBitmap::CDrawListBitmap(CDrawListBitmap *this, struct IBitmapResource *a2)
{
  struct IBitmapRealization **v3; // rdx
  __int64 (__fastcall *v5)(CCachedVisualImage *__hidden, struct IBitmapRealization **); // rax
  CEffectIntermediateProducer *v6; // rdi
  unsigned int (__fastcall *v7)(CMILRefCountImpl *__hidden); // rax
  __int64 (__fastcall *v8)(CEffectIntermediateProducer *); // rax

  *(_QWORD *)this = 0LL;
  v3 = (struct IBitmapRealization **)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 16) = 0;
  v5 = *(__int64 (__fastcall **)(CCachedVisualImage *__hidden, struct IBitmapRealization **))(*(_QWORD *)a2 + 64LL);
  if ( v5 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
  {
    CCompositionSurfaceBitmap::GetCurrentRenderingRealization(a2, v3);
  }
  else if ( v5 == CCachedVisualImage::GetCurrentRenderingRealization )
  {
    CCachedVisualImage::GetCurrentRenderingRealization(a2, v3);
  }
  else if ( v5 == CCachedImageProducer::GetCurrentRenderingRealization )
  {
    CCachedImageProducer::GetCurrentRenderingRealization(a2, v3);
  }
  else
  {
    ((void (__fastcall *)(struct IBitmapResource *))v5)(a2);
  }
  v6 = *(CEffectIntermediateProducer **)this;
  *(_QWORD *)this = a2;
  v7 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)a2 + 8LL);
  if ( v7 == CMILRefCountImpl::AddReference )
    CMILRefCountImpl::AddReference(a2);
  else
    v7(a2);
  if ( v6 )
  {
    v8 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v6 + 16LL);
    if ( v8 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
      CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v6);
    else
      v8(v6);
  }
  return this;
}
