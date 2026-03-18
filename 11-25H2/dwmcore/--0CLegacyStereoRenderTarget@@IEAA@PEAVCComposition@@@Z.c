/*
 * XREFs of ??0CLegacyStereoRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027F060
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180206FFC (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CLegacyStereoRenderTarget *__fastcall CLegacyStereoRenderTarget::CLegacyStereoRenderTarget(
        CLegacyStereoRenderTarget *this,
        struct CComposition *a2)
{
  CLegacyStereoRenderTarget *result; // rax

  CLegacyRenderTarget::CLegacyRenderTarget(this, a2);
  *(_QWORD *)this = &CLegacyStereoRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CLegacyRenderTarget::`vftable'{for `IPixelFormat's `CRenderTarget'};
  *((_QWORD *)this + 11) = &CLegacyStereoRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CLegacyStereoRenderTarget::`vftable'{for `IRenderTarget's `CRenderTarget'};
  *((_QWORD *)this + 20) = &CLegacyStereoRenderTarget::`vftable'{for `IPixelFormat's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 21) = &CLegacyStereoRenderTarget::`vftable'{for `IRenderTarget's `IOverlayMonitorTarget'};
  *((_QWORD *)this + 22) = &CLegacyStereoRenderTarget::`vftable';
  result = this;
  *((_QWORD *)this + 4238) = 0LL;
  *((_BYTE *)this + 33912) = 0;
  return result;
}
