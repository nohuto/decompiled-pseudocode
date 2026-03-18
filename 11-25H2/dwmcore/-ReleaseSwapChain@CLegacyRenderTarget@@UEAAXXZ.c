/*
 * XREFs of ?ReleaseSwapChain@CLegacyRenderTarget@@UEAAXXZ @ 0x180259AC0
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1801A885C (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ?ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ @ 0x180282D80 (-ReleaseSwapChain@CLegacyStereoRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x18020F4BC (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18020F6F0 (-reset@-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z @ 0x18020F714 (-Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z.c)
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x180252A2C (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 */

void __fastcall CLegacyRenderTarget::ReleaseSwapChain(unsigned __int64 this)
{
  CSyncLockGroup *v2; // rcx

  COverlayContext::Reset((COverlayContext *)(this + 56));
  CTargetStats::Reset((CTargetStats *)(this + 33352), *(_DWORD *)(this + 33320), 0LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 32));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)(this + 40));
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset((CResource **)(this + 48));
  v2 = *(CSyncLockGroup **)(this + 33728);
  if ( v2 )
  {
    CSyncLockGroup::RemoveRenderTarget(
      v2,
      (struct IMonitorTarget *)(this & ((unsigned __int128)-(__int128)(this - 160) >> 64)));
    *(_QWORD *)(this + 33728) = 0LL;
  }
  *(_BYTE *)(this + 33736) = 0;
}
