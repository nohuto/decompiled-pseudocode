/*
 * XREFs of ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1802D91B4
 * Callers:
 *     ??_GCHolographicInteropTarget@@MEAAPEAXI@Z @ 0x180280390 (--_GCHolographicInteropTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x180282028 (-InternalRelease@-$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseInteropTextures@CHolographicManager@@QEAAXXZ @ 0x1802D8D54 (-ReleaseInteropTextures@CHolographicManager@@QEAAXXZ.c)
 */

void __fastcall CHolographicInteropTarget::~CHolographicInteropTarget(CHolographicInteropTarget *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CHolographicInteropTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CHolographicInteropTarget::`vftable'{for `IPixelFormat's `CRenderTarget'};
  *((_QWORD *)this + 11) = &CHolographicInteropTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 12) = &CHolographicInteropTarget::`vftable'{for `IRenderTarget's `CRenderTarget'};
  *((_QWORD *)this + 20) = &CHolographicInteropTarget::`vftable'{for `IPixelFormat's `IMonitorTarget'};
  *((_QWORD *)this + 21) = &CHolographicInteropTarget::`vftable'{for `IRenderTarget's `IMonitorTarget'};
  *((_QWORD *)this + 22) = &CHolographicInteropTarget::`vftable';
  CHolographicManager::ReleaseInteropTextures(*((CHolographicManager **)this + 23));
  v2 = (void *)*((_QWORD *)this + 34);
  if ( v2 )
    CloseHandle(v2);
  v3 = (void *)*((_QWORD *)this + 35);
  if ( v3 )
    CloseHandle(v3);
  Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease((CD3DDevice **)this + 25);
  CRenderTarget::~CRenderTarget(this);
}
