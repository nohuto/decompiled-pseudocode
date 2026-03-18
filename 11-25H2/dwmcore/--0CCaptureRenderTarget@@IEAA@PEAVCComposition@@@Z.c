/*
 * XREFs of ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180206B4C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CVirtualMonitorCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027F65C (--0CVirtualMonitorCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180206CD0 (-AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z @ 0x180206E18 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z.c)
 *     ??0?$CMergedRectBase@$03@@QEAA@_N@Z @ 0x18020762C (--0-$CMergedRectBase@$03@@QEAA@_N@Z.c)
 */

CCaptureRenderTarget *__fastcall CCaptureRenderTarget::CCaptureRenderTarget(
        CCaptureRenderTarget *this,
        struct CComposition *a2)
{
  CComposition *v3; // rcx
  const char *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v6 = 26;
  v5 = "DWM Rendertarget (capture)";
  ((void (__fastcall *)(CCaptureRenderTarget *, struct CComposition *, const char **, __int64))COffScreenRenderTarget::COffScreenRenderTarget)(
    this,
    a2,
    &v5,
    1LL);
  *(_QWORD *)this = &CCaptureRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 11) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CCaptureRenderTarget::`vftable'{for `IRenderTarget'};
  *((_QWORD *)this + 342) = &CCaptureRenderTarget::`vftable';
  *((_QWORD *)this + 343) = 0LL;
  CMergedRectBase<4>::CMergedRectBase<4>((char *)this + 2768, 0LL);
  *((_BYTE *)this + 2940) = 0;
  *((_QWORD *)this + 370) = 0LL;
  *((_QWORD *)this + 371) = 0LL;
  *((_QWORD *)this + 372) = 0LL;
  *((_QWORD *)this + 373) = 0LL;
  *((_QWORD *)this + 375) = 0LL;
  *((_QWORD *)this + 377) = 0LL;
  *((_QWORD *)this + 378) = 0LL;
  *((_QWORD *)this + 379) = 0LL;
  *((_QWORD *)this + 380) = 0LL;
  *((_QWORD *)this + 381) = 0LL;
  *((_QWORD *)this + 382) = 0LL;
  *((_QWORD *)this + 383) = 0LL;
  *((_QWORD *)this + 384) = 0LL;
  *((_QWORD *)this + 385) = 0LL;
  *((_QWORD *)this + 386) = 0LL;
  *((_QWORD *)this + 387) = 0LL;
  *((_QWORD *)this + 388) = 0LL;
  *((_QWORD *)this + 389) = 0LL;
  *((_QWORD *)this + 390) = 0LL;
  *((_QWORD *)this + 391) = 0LL;
  *((_QWORD *)this + 392) = 0LL;
  *((_QWORD *)this + 394) = 0LL;
  *((_BYTE *)this + 3160) = 0;
  *((_WORD *)this + 1471) = 1;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *((_DWORD *)this + 748) = -1;
  *((_DWORD *)this + 736) = 0;
  *((_DWORD *)this + 737) = 0x40000000;
  *((_DWORD *)this + 49) = 0;
  *((_BYTE *)this + 3144) = 1;
  CComposition::AddCursorVisualListener(v3, this);
  return this;
}
