/*
 * XREFs of ??1CDCompositionInteropVisual@@UEAA@XZ @ 0x18001ACEC
 * Callers:
 *     ??_GCWindowBackgroundTreatmentVisual@@UEAAPEAXI@Z @ 0x18001AC90 (--_GCWindowBackgroundTreatmentVisual@@UEAAPEAXI@Z.c)
 *     ??_ECDCompositionInteropVisual@@UEAAPEAXI@Z @ 0x1800B3370 (--_ECDCompositionInteropVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18001BFC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDCompositionInteropVisual::~CDCompositionInteropVisual(CDCompositionInteropVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 34);
  if ( v2 )
  {
    *((_QWORD *)this + 34) = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
  }
  v3 = *((_QWORD *)this + 33);
  if ( v3 )
  {
    *((_QWORD *)this + 33) = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 32);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 248);
  CVisual::~CVisual(this);
}
