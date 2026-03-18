/*
 * XREFs of ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180206FFC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CLegacyStereoRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027F060 (--0CLegacyStereoRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180207184 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CFSVPProvider@@QEAA@PEAVIOverlayMonitorTarget@@@Z @ 0x1802071F8 (--0CFSVPProvider@@QEAA@PEAVIOverlayMonitorTarget@@@Z.c)
 *     ??0?$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z @ 0x18020723C (--0-$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z.c)
 *     ??0CTargetStats@@QEAA@XZ @ 0x18020728C (--0CTargetStats@@QEAA@XZ.c)
 *     ??0CMonitorTransform@@QEAA@XZ @ 0x180251D18 (--0CMonitorTransform@@QEAA@XZ.c)
 *     ??0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@_N@Z @ 0x18025451C (--0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@_N@Z.c)
 */

CLegacyRenderTarget *__fastcall CLegacyRenderTarget::CLegacyRenderTarget(
        CLegacyRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v3; // r11
  CLegacyRenderTarget *result; // rax

  CRenderTarget::CRenderTarget(this, a2);
  *((_QWORD *)this + 10) = &CLegacyRenderTarget::`vftable'{for `IPixelFormat's `CRenderTarget'};
  *(_QWORD *)this = &CLegacyRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 11) = &CLegacyStereoRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CLegacyStereoRenderTarget::`vftable'{for `IRenderTarget's `CRenderTarget'};
  *((_QWORD *)this + 20) = &CLegacyRenderTarget::`vftable'{for `IPixelFormat's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 21) = &CLegacyStereoRenderTarget::`vftable'{for `IRenderTarget's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 22) = &CLegacyStereoRenderTarget::`vftable';
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  COverlayContext::COverlayContext(
    (CLegacyRenderTarget *)((char *)this + 216),
    (struct IOverlayMonitorTarget *)(((unsigned __int64)this + 160) & -(__int64)(this != 0LL)),
    0);
  CMonitorTransform::CMonitorTransform((CLegacyRenderTarget *)((char *)this + 30888));
  CTargetDirtyBase<8>::CTargetDirtyBase<8>(
    (char *)this + 31152,
    v3 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  *((_QWORD *)this + 4184) = ((unsigned __int64)this + 160) & -(__int64)(this != 0LL);
  *((_QWORD *)this + 3894) = &CMonitorDirty::`vftable';
  *((_DWORD *)this + 8370) = 0;
  *((_DWORD *)this + 8371) = 3;
  *(_QWORD *)((char *)this + 33500) = 0LL;
  *((_DWORD *)this + 8377) = 0;
  *((_QWORD *)this + 4186) = 0LL;
  *((_DWORD *)this + 8374) = 0;
  *(_WORD *)((char *)this + 33509) = 0;
  *((_BYTE *)this + 33511) = 0;
  CTargetStats::CTargetStats((CLegacyRenderTarget *)((char *)this + 33512));
  *((_QWORD *)this + 4225) = 0LL;
  CFSVPProvider::CFSVPProvider(
    (CLegacyRenderTarget *)((char *)this + 33808),
    (struct IOverlayMonitorTarget *)(((unsigned __int64)this + 160) & -(__int64)(this != 0LL)));
  result = this;
  *((_QWORD *)this + 4236) = 0LL;
  *((_BYTE *)this + 33900) = 0;
  *((_DWORD *)this + 8474) = 0x1000000;
  *((_DWORD *)this + 38) = 1065353216;
  return result;
}
