/*
 * XREFs of ?AddRef@CIndirectSwapchainRenderTarget@@WKLA@EAAKXZ @ 0x180280BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 2736));
}
