/*
 * XREFs of ?Release@CIndirectSwapchainRenderTarget@@WKLA@EAAKXZ @ 0x180282D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - 2736));
}
