/*
 * XREFs of ??0CVisualCapture@@QEAA@PEAVCComposition@@@Z @ 0x1802B207C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z @ 0x180206E18 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z.c)
 */

CVisualCapture *__fastcall CVisualCapture::CVisualCapture(CVisualCapture *this, struct CComposition *a2)
{
  const char *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v5 = 32;
  v4 = "DWM Rendertarget (VisualCapture)";
  COffScreenRenderTarget::COffScreenRenderTarget((unsigned __int64)this, a2, (__int64)&v4, 0);
  *((_DWORD *)this + 696) = 0;
  *((_DWORD *)this + 38) = 0;
  *(_QWORD *)this = &CVisualCapture::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 11) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CVisualCapture::`vftable'{for `IRenderTarget'};
  return this;
}
