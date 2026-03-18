/*
 * XREFs of ?ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ @ 0x180282D80
 * Callers:
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x18028F6F0 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ @ 0x180259AC0 (-ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ.c)
 */

void __fastcall CLegacyStereoRenderTarget::ReleaseSwapChain(CLegacyStereoRenderTarget *this)
{
  CLegacyRenderTarget::ReleaseSwapChain((unsigned __int64)this);
  wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::reset((__int64 *)this + 4218);
}
