/*
 * XREFs of ??1CVisibilityOverride@@UEAA@XZ @ 0x18020962C
 * Callers:
 *     ??_GCVisibilityOverride@@UEAAPEAXI@Z @ 0x1802095F0 (--_GCVisibilityOverride@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_UnsubscribeToWNF@CVisibilityOverride@@AEAAXXZ @ 0x180209694 (-_UnsubscribeToWNF@CVisibilityOverride@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVisibilityOverride::~CVisibilityOverride(CVisibilityOverride *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CVisibilityOverride::`vftable';
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IVisibilityOverride,IImmersiveSessionIdleNotification>::`vftable'{for `IVisibilityOverride'};
  *((_QWORD *)this + 4) = &CVisibilityOverride::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSessionIdleNotification>'};
  CVisibilityOverride::_UnsubscribeToWNF(this);
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
