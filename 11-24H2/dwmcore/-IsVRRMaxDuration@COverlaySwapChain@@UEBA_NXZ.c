/*
 * XREFs of ?IsVRRMaxDuration@COverlaySwapChain@@UEBA_NXZ @ 0x1802BF6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall COverlaySwapChain::IsVRRMaxDuration(COverlaySwapChain *this)
{
  return *((_QWORD *)this + 18) == 0xFFFFFFFFLL;
}
