/*
 * XREFs of ?reset@?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802038FC
 * Callers:
 *     ?ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ @ 0x1802781F0 (-ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x180284150 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180203920 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalRelease(result);
  return result;
}
