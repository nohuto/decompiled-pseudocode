/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs____Microsoft::WRL::FtmBase___lambda_30e9d5213486065023276bc34b6ef1c0___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs___::_scalar_deleting_destructor_ @ 0x1800A3060
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs_____::___Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs____Microsoft::WRL::FtmBase___lambda_30e9d5213486065023276bc34b6ef1c0___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  *((_DWORD *)a1 + 15) = -1073741823;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a1 + 4);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(a1, v4);
  return a1;
}
