/*
 * XREFs of ?HasSwapChainAttributes@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x18006ACC0
 * Callers:
 *     ?HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18006AC74 (-HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool __fastcall CGlobalCompositionSurfaceInfo::HasSwapChainAttributes(CGlobalCompositionSurfaceInfo *this)
{
  return CGlobalCompositionSurfaceInfo::IsSwapChain(this);
}
