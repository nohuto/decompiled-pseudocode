/*
 * XREFs of ?GetCompositionSurfaceInfo@CSwapchainRenderStrategy@@UEBAPEAVCCompositionSurfaceInfo@@PEBVCSurfaceBrush@@@Z @ 0x1802233B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CCompositionSurfaceInfo *__fastcall CSwapchainRenderStrategy::GetCompositionSurfaceInfo(
        CSwapchainRenderStrategy *this,
        const struct CSurfaceBrush *a2)
{
  return *(struct CCompositionSurfaceInfo **)(*((_QWORD *)a2 + 16) + 96LL);
}
