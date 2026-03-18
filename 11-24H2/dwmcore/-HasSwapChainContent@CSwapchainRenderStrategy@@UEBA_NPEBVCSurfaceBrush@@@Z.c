/*
 * XREFs of ?HasSwapChainContent@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z @ 0x1802A6C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CSwapchainRenderStrategy::HasSwapChainContent(
        CSwapchainRenderStrategy *this,
        CCompositionSurfaceBitmap **a2)
{
  return CCompositionSurfaceBitmap::HasSwapChainAttributes(a2[16]);
}
