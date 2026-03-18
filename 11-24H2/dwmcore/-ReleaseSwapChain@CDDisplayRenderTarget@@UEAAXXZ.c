/*
 * XREFs of ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x180188F50
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x180235DA0 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ??1CDDisplayRenderTarget@@MEAA@XZ @ 0x1802750D4 (--1CDDisplayRenderTarget@@MEAA@XZ.c)
 *     ?DetachFromChannel@CDDisplayRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z @ 0x180276350 (-DetachFromChannel@CDDisplayRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x18027F5F0 (-ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTA.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z @ 0x180188D04 (-Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z.c)
 *     ?reset@?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180188F20 (-reset@-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ @ 0x180188FBC (-ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x180188FFC (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180203920 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

void __fastcall CDDisplayRenderTarget::ReleaseSwapChain(CDDisplayRenderTarget *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx

  CDDisplayRenderTarget::ResetSyncLockGroup((CDDisplayRenderTarget *)((char *)this - 160));
  COverlayContext::Reset((CDDisplayRenderTarget *)((char *)this + 64));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 5);
  v4 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v4 )
    CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalRelease();
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset((CCachedVisualImage **)this + 7, v2, v3);
  CTargetStats::Reset((CDDisplayRenderTarget *)((char *)this + 32984), *((_DWORD *)this + 8243), 0LL);
  *((_BYTE *)this + 33360) = 0;
}
