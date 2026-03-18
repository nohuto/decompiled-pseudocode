/*
 * XREFs of ?GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x180172F58
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18001A9F4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180171F24 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180173024 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?SetSource@CBitmapResource@@IEAAJPEAUIWICBitmap@@@Z @ 0x1801CE7DC (-SetSource@CBitmapResource@@IEAAJPEAUIWICBitmap@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004DD48 (-reset@-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CStockBitmapProducer@@SAJAEBU_D3DCOLORVALUE@@PEAPEAVIBitmapResource@@@Z @ 0x180212454 (-Create@CStockBitmapProducer@@SAJAEBU_D3DCOLORVALUE@@PEAPEAVIBitmapResource@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

struct IBitmapResource *__fastcall CComposition::GetStockTransparentBitmap(CGlobalDrawingContext **this)
{
  struct IBitmapResource **v1; // rbx
  int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = this + 89;
  if ( !this[89] )
  {
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::reset(this + 89);
    v3 = CStockBitmapProducer::Create(&`CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue, v1);
    if ( v3 < 0 )
      ModuleFailFastForHRESULT(v3, retaddr);
  }
  return *v1;
}
