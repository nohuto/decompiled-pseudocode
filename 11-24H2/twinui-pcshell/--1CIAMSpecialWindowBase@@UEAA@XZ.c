/*
 * XREFs of ??1CIAMSpecialWindowBase@@UEAA@XZ @ 0x180213B54
 * Callers:
 *     ??_GCIAMSpecialWindow@@UEAAPEAXI@Z @ 0x180213B10 (--_GCIAMSpecialWindow@@UEAAPEAXI@Z.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCIAMSpecialWindowBase@@UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1802F0090 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMark_ea_1802F0090.c)
 *     ??_GCIAMSpecialWindowBase@@UEAAPEAXI@Z @ 0x1802F0190 (--_GCIAMSpecialWindowBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CIAMSpecialWindowBase::~CIAMSpecialWindowBase(CIAMSpecialWindowBase *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CIAMSpecialWindowBase::`vftable';
  DestroyWindow(*((HWND *)this + 2));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
