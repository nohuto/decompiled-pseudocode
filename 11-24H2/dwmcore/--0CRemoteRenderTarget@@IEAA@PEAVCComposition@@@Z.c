/*
 * XREFs of ??0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180274B30
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180189448 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z @ 0x180189500 (--0-$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z.c)
 *     ?EnableTightDirtyRegion@?$CTargetDirtyBase@$07@@QEAAX_N@Z @ 0x180189754 (-EnableTightDirtyRegion@-$CTargetDirtyBase@$07@@QEAAX_N@Z.c)
 */

CRemoteRenderTarget *__fastcall CRemoteRenderTarget::CRemoteRenderTarget(
        CRemoteRenderTarget *this,
        struct CComposition *a2)
{
  char v3; // al

  CRenderTarget::CRenderTarget(this, a2);
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)this = &CRemoteRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 11) = &CRemoteRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CRemoteRenderTarget::`vftable'{for `IRenderTarget's `CRenderTarget'};
  *((_QWORD *)this + 20) = &CRemoteRenderTarget::`vftable'{for `IPixelFormat's `IMonitorTarget'};
  *((_QWORD *)this + 21) = &CRemoteRenderTarget::`vftable'{for `IRenderTarget's `IMonitorTarget'};
  *((_QWORD *)this + 22) = &CRemoteRenderTarget::`vftable';
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *(_QWORD *)((char *)this + 300) = 1065353216LL;
  *((_QWORD *)this + 30) = 1065353216LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = 0;
  *(_QWORD *)((char *)this + 260) = 1065353216LL;
  *(_QWORD *)((char *)this + 268) = 0LL;
  *((_DWORD *)this + 69) = 0;
  *((_QWORD *)this + 35) = 1065353216LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 0;
  v3 = *((_BYTE *)this + 305);
  *((_BYTE *)this + 304) = -86;
  *((_BYTE *)this + 305) = v3 & 0xC0 | 0x29;
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 82) = 0;
  *(_QWORD *)((char *)this + 308) = 0LL;
  *((_DWORD *)this + 79) = 0;
  *(_WORD *)((char *)this + 329) = 0;
  *((_BYTE *)this + 331) = 0;
  CTargetDirtyBase<8>::CTargetDirtyBase<8>(
    (__int64)this + 336,
    ((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  *((_QWORD *)this + 42) = &CTargetDirtyBase<8>::`vftable';
  *((_QWORD *)this + 332) = 0LL;
  *((_QWORD *)this + 333) = 0LL;
  *((_WORD *)this + 1336) = 0;
  *((_BYTE *)this + 2674) = 0;
  *((_DWORD *)this + 38) = 1065353216;
  *((_DWORD *)this + 32) = 87;
  *(_QWORD *)((char *)this + 132) = 3LL;
  CTargetDirtyBase<8>::EnableTightDirtyRegion((__int64)this + 336, 1);
  return this;
}
