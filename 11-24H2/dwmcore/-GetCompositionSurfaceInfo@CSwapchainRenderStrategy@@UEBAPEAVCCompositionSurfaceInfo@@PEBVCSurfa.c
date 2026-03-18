/*
 * XREFs of ?GetCompositionSurfaceInfo@CSwapchainRenderStrategy@@UEBAPEAVCCompositionSurfaceInfo@@PEBVCSurfaceBrush@@@Z @ 0x180217340
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
