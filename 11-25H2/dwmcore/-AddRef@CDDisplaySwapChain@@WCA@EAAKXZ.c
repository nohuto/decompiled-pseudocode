/*
 * XREFs of ?AddRef@CDDisplaySwapChain@@WCA@EAAKXZ @ 0x180260CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 32));
}
