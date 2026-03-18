/*
 * XREFs of ?IsBoundless@CSurfaceDrawListBrush@@QEBA_NXZ @ 0x1800B9434
 * Callers:
 *     ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x1800197C0 (-CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800B70A0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
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
