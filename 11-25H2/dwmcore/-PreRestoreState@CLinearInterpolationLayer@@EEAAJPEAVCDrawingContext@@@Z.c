/*
 * XREFs of ?PreRestoreState@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18022B0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118380 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

__int64 __fastcall CLinearInterpolationLayer::PreRestoreState(
        CLinearInterpolationLayer *this,
        struct CDrawingContext *a2)
{
  CDrawingContext::PopRenderOptionsInternal(a2, 0);
  return 0LL;
}
