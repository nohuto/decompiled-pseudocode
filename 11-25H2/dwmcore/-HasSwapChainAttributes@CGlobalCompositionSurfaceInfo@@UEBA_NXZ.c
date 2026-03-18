/*
 * XREFs of ?HasSwapChainAttributes@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1801E34A0
 * Callers:
 *     ?HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1801E3454 (-HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool __fastcall CGlobalCompositionSurfaceInfo::HasSwapChainAttributes(CGlobalCompositionSurfaceInfo *this)
{
  return CGlobalCompositionSurfaceInfo::IsSwapChain(this);
}
