/*
 * XREFs of ?ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ @ 0x18024E5F0
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1801E4CCC (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ?ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ @ 0x1802781F0 (-ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z @ 0x180188D04 (-Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z.c)
 *     ?reset@?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180188F20 (-reset@-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x180188FFC (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x180247A80 (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 */

void __fastcall CLegacyRenderTarget::ReleaseSwapChain(unsigned __int64 this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  CSyncLockGroup *v4; // rcx

  COverlayContext::Reset((COverlayContext *)(this + 56));
  CTargetStats::Reset((CTargetStats *)(this + 32968), *(_DWORD *)(this + 32936), 0LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 32));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 40));
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset((CCachedVisualImage **)(this + 48), v2, v3);
  v4 = *(CSyncLockGroup **)(this + 33344);
  if ( v4 )
  {
    CSyncLockGroup::RemoveRenderTarget(
      v4,
      (struct IMonitorTarget *)(this & ((unsigned __int128)-(__int128)(this - 160) >> 64)));
    *(_QWORD *)(this + 33344) = 0LL;
  }
  *(_BYTE *)(this + 33352) = 0;
}
