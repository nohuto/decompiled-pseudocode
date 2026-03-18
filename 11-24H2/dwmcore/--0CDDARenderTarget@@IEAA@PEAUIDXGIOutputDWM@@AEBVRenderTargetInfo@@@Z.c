/*
 * XREFs of ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x180284AAC
 * Callers:
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x180284C3C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 * Callees:
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180061250 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180189448 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z @ 0x180189500 (--0-$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z.c)
 *     ?EnableTightDirtyRegion@?$CTargetDirtyBase@$07@@QEAAX_N@Z @ 0x180189754 (-EnableTightDirtyRegion@-$CTargetDirtyBase@$07@@QEAAX_N@Z.c)
 *     ??0CMonitorTransform@@QEAA@XZ @ 0x180246D9C (--0CMonitorTransform@@QEAA@XZ.c)
 */

CDDARenderTarget *__fastcall CDDARenderTarget::CDDARenderTarget(
        CDDARenderTarget *this,
        struct IDXGIOutputDWM *a2,
        const struct RenderTargetInfo *a3)
{
  __int64 v5; // r9
  bool IsHDR; // al

  CRenderTarget::CRenderTarget(this, g_pComposition);
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)this = &CDDARenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 11) = &CDDARenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CDDARenderTarget::`vftable'{for `IRenderTarget'};
  *((_QWORD *)this + 20) = &CDDARenderTarget::`vftable';
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    (_QWORD *)this + 21,
    v5);
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_OWORD *)this + 12) = *(_OWORD *)a3;
  *((_QWORD *)this + 26) = *((_QWORD *)a3 + 2);
  CMonitorTransform::CMonitorTransform((CDDARenderTarget *)((char *)this + 216));
  CTargetDirtyBase<8>::CTargetDirtyBase<8>(
    (__int64)this + 480,
    ((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  *((_QWORD *)this + 60) = &CTargetDirtyBase<8>::`vftable';
  *((_WORD *)this + 1400) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_BYTE *)this + 212) = 0;
  IsHDR = RenderTargetInfo::IsHDR((CDDARenderTarget *)((char *)this + 192));
  *((_DWORD *)this + 32) = IsHDR ? 10 : 87;
  *((_DWORD *)this + 34) = IsHDR;
  *((_DWORD *)this + 33) = 3;
  CTargetDirtyBase<8>::EnableTightDirtyRegion((__int64)this + 480, 1);
  return this;
}
