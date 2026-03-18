/*
 * XREFs of ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027EBEC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180207184 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CFSVPProvider@@QEAA@PEAVIOverlayMonitorTarget@@@Z @ 0x1802071F8 (--0CFSVPProvider@@QEAA@PEAVIOverlayMonitorTarget@@@Z.c)
 *     ??0?$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z @ 0x18020723C (--0-$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z.c)
 *     ??0CTargetStats@@QEAA@XZ @ 0x18020728C (--0CTargetStats@@QEAA@XZ.c)
 *     ??0CMonitorTransform@@QEAA@XZ @ 0x180251D18 (--0CMonitorTransform@@QEAA@XZ.c)
 *     ??0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@_N@Z @ 0x18025451C (--0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@_N@Z.c)
 */

CDDisplayRenderTarget *__fastcall CDDisplayRenderTarget::CDDisplayRenderTarget(
        CDDisplayRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v3; // r11
  CDDisplayRenderTarget *result; // rax

  CRenderTarget::CRenderTarget(this, a2);
  *((_QWORD *)this + 10) = &CDDisplayRenderTarget::`vftable'{for `IPixelFormat's `CRenderTarget'};
  *(_QWORD *)this = &CDDisplayRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 11) = &CDDisplayRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CDDisplayRenderTarget::`vftable'{for `IRenderTarget's `CRenderTarget'};
  *((_QWORD *)this + 20) = &CDDisplayRenderTarget::`vftable'{for `IPixelFormat's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 21) = &CDDisplayRenderTarget::`vftable'{for `IRenderTarget's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 22) = &CDDisplayRenderTarget::`vftable';
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  COverlayContext::COverlayContext(
    (CDDisplayRenderTarget *)((char *)this + 224),
    (struct IOverlayMonitorTarget *)(((unsigned __int64)this + 160) & -(__int64)(this != 0LL)),
    1);
  CMonitorTransform::CMonitorTransform((CDDisplayRenderTarget *)((char *)this + 30896));
  CTargetDirtyBase<8>::CTargetDirtyBase<8>(
    (__int64)this + 31160,
    v3 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  *((_QWORD *)this + 4185) = ((unsigned __int64)this + 160) & -(__int64)(this != 0LL);
  *((_QWORD *)this + 3895) = &CMonitorDirty::`vftable';
  *(_QWORD *)((char *)this + 33500) = 0LL;
  *(_QWORD *)((char *)this + 33508) = 0LL;
  *((_QWORD *)this + 4186) = 0LL;
  *((_DWORD *)this + 8374) = 0;
  *(_WORD *)((char *)this + 33509) = 0;
  *((_BYTE *)this + 33511) = 0;
  *((_DWORD *)this + 8379) = 0;
  *((_DWORD *)this + 8380) = 3;
  CTargetStats::CTargetStats((CDDisplayRenderTarget *)((char *)this + 33528));
  CFSVPProvider::CFSVPProvider(
    (CDDisplayRenderTarget *)((char *)this + 33816),
    (struct IOverlayMonitorTarget *)(((unsigned __int64)this + 160) & -(__int64)(this != 0LL)));
  *((_QWORD *)this + 4237) = 0LL;
  result = this;
  *((_WORD *)this + 16952) = 0;
  *(_QWORD *)((char *)this + 132) = 3LL;
  *((_DWORD *)this + 32) = 87;
  return result;
}
