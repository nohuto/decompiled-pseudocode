/*
 * XREFs of ??1VirtualTouchpadControllerProxy@@UEAA@XZ @ 0x180134C30
 * Callers:
 *     ??_EVirtualTouchpadControllerProxy@@UEAAPEAXI@Z @ 0x180134D90 (--_EVirtualTouchpadControllerProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ServerDestroyed@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x18013689C (-ServerDestroyed@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall VirtualTouchpadControllerProxy::~VirtualTouchpadControllerProxy(VirtualTouchpadControllerProxy *this)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rcx

  *(_QWORD *)this = &VirtualTouchpadControllerProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &VirtualTouchpadControllerProxy::`vftable'{for `IVirtualTouchpadControllerProxy'};
  *((_QWORD *)this + 16) = &VirtualTouchpadControllerProxy::`vftable'{for `IInputSiteTransformClientPrivate'};
  v2 = (unsigned __int64)this + 136;
  *((_QWORD *)this + 17) = &VirtualTouchpadControllerProxy::`vftable'{for `ISystemContextObserver'};
  InputTraceLogging::VirtualTouchpad::ServerDestroyed(this);
  v3 = *((_QWORD *)this + 51);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 32LL))(
      v3,
      v2 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 51);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 4);
}
