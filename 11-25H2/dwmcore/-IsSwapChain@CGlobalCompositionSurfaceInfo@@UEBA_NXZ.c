/*
 * XREFs of ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1801025B0
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x180061F10 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z @ 0x180102480 (-EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18010255C (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?HasSwapChainAttributes@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1801E34A0 (-HasSwapChainAttributes@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?IsSwapChain@CGlobalCompositionSurfaceInfo@@WGI@EBA_NXZ @ 0x18029CA50 (-IsSwapChain@CGlobalCompositionSurfaceInfo@@WGI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalCompositionSurfaceInfo::IsSwapChain(CGlobalCompositionSurfaceInfo *this)
{
  return (unsigned int)((__int64)(*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) >> 3) > 1
      || *((_DWORD *)this + 36) == 3;
}
