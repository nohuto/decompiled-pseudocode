/*
 * XREFs of ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180173024
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180033CD4 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180048BB8 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1800F4830 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x180135A9C (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 * Callees:
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18004BC04 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800FDB08 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x180172F58 (-GetStockTransparentBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 */

void __fastcall CDrawingContext::SetEffectInputToTransparentBlack(
        CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  struct IBitmapResource *StockTransparentBitmap; // rax
  __int64 v5; // r8
  __int64 v6[5]; // [rsp+20h] [rbp-28h] BYREF

  *((_WORD *)a3 + 22) = 257;
  *((_QWORD *)a3 + 3) = 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_OWORD *)a3 + 3) = Matrix3x3::Identity;
  *((_OWORD *)a3 + 4) = xmmword_18032BEB0;
  *((_DWORD *)a3 + 20) = 1065353216;
  *((float *)a3 + 12) = 1.0 / a2->width;
  *((float *)a3 + 16) = 1.0 / a2->height;
  *(_QWORD *)((char *)a3 + 84) = 0LL;
  *((_DWORD *)a3 + 23) = 1065353216;
  *((_DWORD *)a3 + 24) = 1065353216;
  StockTransparentBitmap = CComposition::GetStockTransparentBitmap((CGlobalDrawingContext **)g_pComposition);
  CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v6, StockTransparentBitmap);
  CDrawListBitmap::operator=((__int64)a3, v6, v5);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v6);
}
