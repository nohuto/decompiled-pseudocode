/*
 * XREFs of ?GetPresentCount@CRemoteAppRenderTarget@@UEBAIXZ @ 0x180281820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteAppRenderTarget::GetPresentCount(CCompSwapChain **this)
{
  return CCompSwapChain::GetPresentCount(this[1]);
}
