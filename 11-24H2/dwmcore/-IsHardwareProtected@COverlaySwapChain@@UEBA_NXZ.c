/*
 * XREFs of ?IsHardwareProtected@COverlaySwapChain@@UEBA_NXZ @ 0x1801EC2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall COverlaySwapChain::IsHardwareProtected(COverlaySwapChain *this)
{
  return *((_BYTE *)this + 100);
}
