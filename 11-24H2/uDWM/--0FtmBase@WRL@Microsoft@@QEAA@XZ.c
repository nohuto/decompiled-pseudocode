/*
 * XREFs of ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800A2D14
 * Callers:
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerChangedEventArgs___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerChangedEventArgs____Microsoft::WRL::FtmBase___lambda_b46eae7c97fd0c0221a3f2c2069b78bc___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs_____lambda_b46eae7c97fd0c0221a3f2c2069b78bc___ @ 0x1800A28A8 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerDisabledEventArgs___Windows::Devices::Display::Core::IDisplayManagerDisabledEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerDisabledEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerDisabledEventArgs____Microsoft::WRL::FtmBase___lambda_4f72ee05bd0124e78352738e10539777___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerDisabledEventArgs_____lambda_4f72ee05bd0124e78352738e10539777___ @ 0x1800A2974 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1800A2974.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerEnabledEventArgs___Windows::Devices::Display::Core::IDisplayManagerEnabledEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerEnabledEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerEnabledEventArgs____Microsoft::WRL::FtmBase___lambda_77212a9e6487372bbfeab6a574df83fb___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerEnabledEventArgs_____lambda_77212a9e6487372bbfeab6a574df83fb___ @ 0x1800A2A40 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1800A2A40.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs____Microsoft::WRL::FtmBase___lambda_30e9d5213486065023276bc34b6ef1c0___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs_____lambda_30e9d5213486065023276bc34b6ef1c0___ @ 0x1800A2B0C (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1800A2B0C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
Microsoft::WRL::FtmBase *__fastcall Microsoft::WRL::FtmBase::FtmBase(Microsoft::WRL::FtmBase *this)
{
  __int64 *v2; // r14
  LPUNKNOWN v3; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  LPUNKNOWN ppunkMarshal; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &Microsoft::WRL::FtmBase::`vftable';
  v2 = (__int64 *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  ppunkMarshal = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppunkMarshal);
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v3 = ppunkMarshal;
    QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2);
    ((void (__fastcall *)(LPUNKNOWN, GUID *, __int64 *))QueryInterface)(
      v3,
      &GUID_00000003_0000_0000_c000_000000000046,
      v2);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppunkMarshal);
  return this;
}
