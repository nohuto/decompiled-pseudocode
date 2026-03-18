/*
 * XREFs of ?reset@?$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801E4FDC
 * Callers:
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801E4EBC (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 *     ?CheckOcclusionState@CDDARenderTarget@@UEAAJ_N@Z @ 0x1801F1630 (-CheckOcclusionState@CDDARenderTarget@@UEAAJ_N@Z.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180280E34 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1802814CC (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VISwapChain@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1801E5020 (-InternalRelease@-$CMILRefCountBaseT@VISwapChain@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CDDASwapChain,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CMILRefCountBaseT<ISwapChain,CMilObjectDeleter>::InternalRelease(result);
  return result;
}
