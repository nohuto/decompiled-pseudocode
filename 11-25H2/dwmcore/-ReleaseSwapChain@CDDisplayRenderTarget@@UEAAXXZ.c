/*
 * XREFs of ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x18020F410
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x18023F450 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ??1CDDisplayRenderTarget@@MEAA@XZ @ 0x18027F880 (--1CDDisplayRenderTarget@@MEAA@XZ.c)
 *     ?DetachFromChannel@CDDisplayRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z @ 0x180280DC0 (-DetachFromChannel@CDDisplayRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x18028A410 (-ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTA.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ @ 0x18020F47C (-ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x18020F4BC (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18020F6F0 (-reset@-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z @ 0x18020F714 (-Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18020FBF0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

void __fastcall CDDisplayRenderTarget::ReleaseSwapChain(CDDisplayRenderTarget *this)
{
  __int64 v2; // rcx

  CDDisplayRenderTarget::ResetSyncLockGroup((CDDisplayRenderTarget *)((char *)this - 160));
  COverlayContext::Reset((CDDisplayRenderTarget *)((char *)this + 64));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 5);
  v2 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v2 )
    CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalRelease();
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset((char *)this + 56);
  CTargetStats::Reset((CDDisplayRenderTarget *)((char *)this + 33368), *((_DWORD *)this + 8339), 0LL);
  *((_BYTE *)this + 33744) = 0;
}
