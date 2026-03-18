/*
 * XREFs of ?AddRef@CLegacyStereoSwapChain@@WBAA@EAAKXZ @ 0x1802BE870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyStereoSwapChain::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 256));
}
