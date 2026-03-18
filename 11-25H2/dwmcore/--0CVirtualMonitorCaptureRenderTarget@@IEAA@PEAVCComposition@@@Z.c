/*
 * XREFs of ??0CVirtualMonitorCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027F65C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180206B4C (--0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CVirtualMonitorCaptureRenderTarget *__fastcall CVirtualMonitorCaptureRenderTarget::CVirtualMonitorCaptureRenderTarget(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CComposition *a2)
{
  CVirtualMonitorCaptureRenderTarget *result; // rax

  CCaptureRenderTarget::CCaptureRenderTarget(this, a2);
  *(_QWORD *)this = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 11) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `IRenderTarget'};
  *((_QWORD *)this + 342) = &CCaptureRenderTarget::`vftable';
  result = this;
  *((_QWORD *)this + 401) = 0LL;
  return result;
}
