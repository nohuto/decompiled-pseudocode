/*
 * XREFs of ?IsBoundless@CSurfaceDrawListBrush@@QEBA_NXZ @ 0x18019BB94
 * Callers:
 *     ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180128F70 (-CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180199760 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSurfaceDrawListBrush::IsBoundless(CSurfaceDrawListBrush *this)
{
  return *((float *)this + 30) == -3.4028235e38
      && *((float *)this + 31) == -3.4028235e38
      && *((float *)this + 32) == 3.4028235e38
      && *((float *)this + 33) == 3.4028235e38;
}
