/*
 * XREFs of ??1CVisualCapture@@UEAA@XZ @ 0x1802B20F0
 * Callers:
 *     ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x1802B2160 (--_GCVisualCapture@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x1802A0670 (-UnRegisterNotifiers@CVisualCapture@@UEAAXXZ.c)
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1802B2728 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

void __fastcall CVisualCapture::~CVisualCapture(CVisualCapture *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CVisualCapture::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 11) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CVisualCapture::`vftable'{for `IRenderTarget'};
  CVisualCapture::UnRegisterNotifiers((struct CResource **)this);
  v2 = (void *)*((_QWORD *)this + 347);
  if ( v2 )
    CloseHandle(v2);
  CVisualCapture::SendCaptureCompleted(this);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
