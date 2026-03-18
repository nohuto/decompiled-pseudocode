/*
 * XREFs of ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1802814CC
 * Callers:
 *     ??1CRemoteAppRenderTarget@@MEAA@XZ @ 0x1802752E0 (--1CRemoteAppRenderTarget@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CRemoteAppRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x180277D40 (-NotifyInvalidResource@CRemoteAppRenderTarget@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180280E34 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x1802811E4 (-ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRE.c)
 *     ?SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z @ 0x180281C48 (-SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801E4FDC (-reset@-$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x18020AD50 (-RemoveResourceNotifier@-$CDeviceResourceT@V-$CMILCOMBaseT@VISwapChain@@VIDeviceResource@@VCMilO.c)
 */

void __fastcall CRemoteAppRenderTarget::ReleaseSwapChain(CRemoteAppRenderTarget *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx

  v1 = (__int64 *)((char *)this + 176);
  v3 = *((_QWORD *)this + 22);
  if ( v3 )
  {
    CDeviceResourceT<CMILCOMBaseT<ISwapChain,IDeviceResource,CMilObjectDeleter>>::RemoveResourceNotifier(
      v3,
      ((unsigned __int64)this + 160) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    *((_QWORD *)this + 23) = 0LL;
    wil::com_ptr_t<CDDASwapChain,wil::err_returncode_policy>::reset(v1);
  }
}
