/*
 * XREFs of ?GetTransform@CDxHandleBitmapRealization@@WBAA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802D7EC0
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x180028BD0 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 * Callees:
 *     <none>
 */

char __fastcall CDxHandleBitmapRealization::GetTransform(__int64 a1, __m128 *a2, float *a3)
{
  return CDxHandleBitmapRealization::GetTransform(a1 - 256, a2, a3);
}
