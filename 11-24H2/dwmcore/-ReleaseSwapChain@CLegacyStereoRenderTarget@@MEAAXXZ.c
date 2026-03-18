/*
 * XREFs of ?ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ @ 0x1802781F0
 * Callers:
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x180284150 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ @ 0x18024E5F0 (-ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ.c)
 */

void __fastcall CLegacyStereoRenderTarget::ReleaseSwapChain(CLegacyStereoRenderTarget *this)
{
  CLegacyRenderTarget::ReleaseSwapChain((unsigned __int64)this);
  wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::reset((__int64 *)this + 4170);
}
