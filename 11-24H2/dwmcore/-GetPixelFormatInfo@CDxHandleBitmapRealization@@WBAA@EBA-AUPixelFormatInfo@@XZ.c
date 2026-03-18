/*
 * XREFs of ?GetPixelFormatInfo@CDxHandleBitmapRealization@@WBAA@EBA?AUPixelFormatInfo@@XZ @ 0x1802D7E60
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x180028BD0 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?GetPixelFormatInfo@CCompositionSurfaceBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18002A6F0 (-GetPixelFormatInfo@CCompositionSurfaceBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z @ 0x18005ED4C (-IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChai.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010A6B0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010C8E0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18010E630 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18010E730 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDxHandleBitmapRealization::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  return CDxHandleBitmapRealization::GetPixelFormatInfo(a1 - 256, a2);
}
