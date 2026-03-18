/*
 * XREFs of ?CheckSupportsConvertPresentToMPO@COverlaySwapChain@@UEBA_NXZ @ 0x1802BE970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall COverlaySwapChain::CheckSupportsConvertPresentToMPO(COverlaySwapChain *this)
{
  return *((_DWORD *)this + 16) >= 2;
}
