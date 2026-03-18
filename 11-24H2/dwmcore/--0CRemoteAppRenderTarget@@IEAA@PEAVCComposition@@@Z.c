/*
 * XREFs of ??0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1802749D8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180189448 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z @ 0x180189500 (--0-$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z.c)
 */

CRemoteAppRenderTarget *__fastcall CRemoteAppRenderTarget::CRemoteAppRenderTarget(
        CRemoteAppRenderTarget *this,
        struct CComposition *a2)
{
  char v3; // al
  CRemoteAppRenderTarget *result; // rax

  CRenderTarget::CRenderTarget(this, a2);
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)this = &CRemoteAppRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 11) = &CRemoteAppRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CRemoteAppRenderTarget::`vftable'{for `IRenderTarget'};
  *((_QWORD *)this + 20) = &CRemoteAppRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &CRemoteAppRenderTarget::`vftable'{for `IVailRenderTarget'};
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *(_QWORD *)((char *)this + 252) = 1065353216LL;
  *((_QWORD *)this + 24) = 1065353216LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *(_QWORD *)((char *)this + 212) = 1065353216LL;
  *(_QWORD *)((char *)this + 220) = 0LL;
  *((_DWORD *)this + 57) = 0;
  *((_QWORD *)this + 29) = 1065353216LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  v3 = *((_BYTE *)this + 257) & 0xE9;
  *((_BYTE *)this + 256) = -86;
  *((_BYTE *)this + 257) = v3 | 0x29;
  *(_QWORD *)((char *)this + 260) = 0LL;
  *(_QWORD *)((char *)this + 268) = 0LL;
  CTargetDirtyBase<8>::CTargetDirtyBase<8>(
    (__int64)this + 280,
    ((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  *((_QWORD *)this + 35) = &CTargetDirtyBase<8>::`vftable';
  *((_QWORD *)this + 326) = 0LL;
  *((_DWORD *)this + 650) = 96;
  *((_QWORD *)this + 327) = 0LL;
  result = this;
  *((_QWORD *)this + 328) = 1LL;
  *((_DWORD *)this + 33) = 3;
  return result;
}
