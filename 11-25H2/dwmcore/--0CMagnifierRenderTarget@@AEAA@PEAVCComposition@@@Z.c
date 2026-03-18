/*
 * XREFs of ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18028EEAC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z @ 0x180206E18 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z.c)
 */

CMagnifierRenderTarget *__fastcall CMagnifierRenderTarget::CMagnifierRenderTarget(
        CMagnifierRenderTarget *this,
        struct CComposition *a2)
{
  const char *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v5 = 28;
  v4 = "DWM Rendertarget (magnifier)";
  COffScreenRenderTarget::COffScreenRenderTarget((unsigned __int64)this, a2, (__int64)&v4, 0);
  *(_QWORD *)this = &CMagnifierRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 11) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &COffScreenRenderTarget::`vftable'{for `IRenderTarget'};
  *((_QWORD *)this + 373) = 0LL;
  *((_BYTE *)this + 2992) = 0;
  *((_QWORD *)this + 368) = 0LL;
  *((_QWORD *)this + 369) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 370) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 371) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 372) = 0x3FF0000000000000LL;
  return this;
}
