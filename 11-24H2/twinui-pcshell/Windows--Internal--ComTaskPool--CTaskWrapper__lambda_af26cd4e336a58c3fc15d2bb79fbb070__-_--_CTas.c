/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070__&_::_CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070__&_ @ 0x1801C4AD8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_b8a139c36294ee7a0b7be3bff03bc510___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::_scalar_deleting_destructor_ @ 0x180210370 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180210370.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070__&_::_scalar_deleting_destructor_ @ 0x1802BD5F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070__-_--_scal.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070____::_CTaskWrapper__lambda_af26cd4e336a58c3fc15d2bb79fbb070____(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
