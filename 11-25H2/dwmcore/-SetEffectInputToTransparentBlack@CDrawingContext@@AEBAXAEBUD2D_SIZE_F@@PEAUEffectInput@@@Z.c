/*
 * XREFs of ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18011567C
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180023C04 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18007CC64 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180116CF0 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18016F850 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800DEA78 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x180115438 (-GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x18016FEF0 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

void __fastcall CDrawingContext::SetEffectInputToTransparentBlack(
        CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  struct IBitmapResource *StockTransparentBitmap; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  *((_WORD *)a3 + 22) = 257;
  *((_QWORD *)a3 + 3) = 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_OWORD *)a3 + 3) = Matrix3x3::Identity;
  *((_OWORD *)a3 + 4) = xmmword_180337720;
  *((_DWORD *)a3 + 20) = 1065353216;
  *((float *)a3 + 12) = 1.0 / a2->width;
  *((float *)a3 + 16) = 1.0 / a2->height;
  *(_QWORD *)((char *)a3 + 84) = 0LL;
  *((_DWORD *)a3 + 23) = 1065353216;
  *((_DWORD *)a3 + 24) = 1065353216;
  StockTransparentBitmap = CComposition::GetStockTransparentBitmap((CGlobalDrawingContext **)g_pComposition);
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v5, StockTransparentBitmap);
  CDrawListBitmap::operator=(a3, v5);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v5);
}
