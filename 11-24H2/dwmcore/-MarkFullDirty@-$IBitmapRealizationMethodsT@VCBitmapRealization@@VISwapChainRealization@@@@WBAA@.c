/*
 * XREFs of ?MarkFullDirty@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VISwapChainRealization@@@@WBAA@EAAXXZ @ 0x1802D8010
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x180028BD0 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 * Callees:
 *     <none>
 */

void __fastcall IBitmapRealizationMethodsT<CBitmapRealization,ISwapChainRealization>::MarkFullDirty(__int64 a1)
{
  IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::MarkFullDirty(a1 - 256);
}
