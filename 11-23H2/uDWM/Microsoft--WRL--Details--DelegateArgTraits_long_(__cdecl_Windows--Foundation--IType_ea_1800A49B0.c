/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs____Microsoft::WRL::FtmBase___lambda_30e9d5213486065023276bc34b6ef1c0___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs___::_scalar_deleting_destructor_ @ 0x1800A49B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs_____::___Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs____Microsoft::WRL::FtmBase___lambda_30e9d5213486065023276bc34b6ef1c0___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs___::_scalar_deleting_destructor_(
        __int64 a1,
        char a2)
{
  *(_DWORD *)(a1 + 60) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 32));
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
  return a1;
}
