/*
 * XREFs of ?Release@CIndirectSwapchainRenderTarget@@WKLA@EAAKXZ @ 0x1802781D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::Release(__int64 a1, __int64 a2, __int64 a3)
{
  return CAtlasedRectsMesh::Release((CCachedVisualImage *)(a1 - 2736), a2, a3);
}
