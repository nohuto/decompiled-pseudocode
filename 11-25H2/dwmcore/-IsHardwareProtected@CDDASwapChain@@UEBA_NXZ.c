/*
 * XREFs of ?IsHardwareProtected@CDDASwapChain@@UEBA_NXZ @ 0x1802D18D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDDASwapChain::IsHardwareProtected(CDDASwapChain *this)
{
  return *((_BYTE *)this + 104);
}
