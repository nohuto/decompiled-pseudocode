/*
 * XREFs of ??0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027EEE4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1802D9270 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180207184 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CHolographicInteropTarget *__fastcall CHolographicInteropTarget::CHolographicInteropTarget(
        CHolographicInteropTarget *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CHolographicInteropTarget *result; // rax

  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)(v2 + 80) = &CHolographicInteropTarget::`vftable'{for `IPixelFormat's `CRenderTarget'};
  *(_QWORD *)v2 = &CHolographicInteropTarget::`vftable'{for `CNotificationResource'};
  *(_QWORD *)(v2 + 88) = &CHolographicInteropTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)(v2 + 96) = &CHolographicInteropTarget::`vftable'{for `IRenderTarget's `CRenderTarget'};
  *(_QWORD *)(v2 + 160) = &CHolographicInteropTarget::`vftable'{for `IPixelFormat's `IMonitorTarget'};
  *(_QWORD *)(v2 + 168) = &CHolographicInteropTarget::`vftable'{for `IRenderTarget's `IMonitorTarget'};
  *(_QWORD *)(v2 + 176) = &CHolographicInteropTarget::`vftable';
  *(_QWORD *)(v2 + 200) = 0LL;
  *(_OWORD *)(v2 + 208) = 0LL;
  *(_QWORD *)(v2 + 224) = 0LL;
  *(_DWORD *)(v2 + 232) = 0;
  result = (CHolographicInteropTarget *)v2;
  *(_QWORD *)(v2 + 240) = 0LL;
  *(_QWORD *)(v2 + 252) = 0LL;
  *(_QWORD *)(v2 + 260) = 0LL;
  return result;
}
