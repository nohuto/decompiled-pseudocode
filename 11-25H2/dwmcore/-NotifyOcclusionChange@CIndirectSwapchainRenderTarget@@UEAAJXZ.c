/*
 * XREFs of ?NotifyOcclusionChange@CIndirectSwapchainRenderTarget@@UEAAJXZ @ 0x18028E920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::NotifyOcclusionChange(CIndirectSwapchainRenderTarget *this)
{
  *((_BYTE *)this + 66) = 1;
  return 0LL;
}
