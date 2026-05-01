/*
 * XREFs of wil::details::lambda_call__lambda_49f0d603c537ac1ec5e9185e8119d3f7___::_lambda_call__lambda_49f0d603c537ac1ec5e9185e8119d3f7___ @ 0x1804E5BD0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_bd3c35641f5306c8094e2486c081427f___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x1804EAAB0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_1804EAAB0.c)
 *     _WindowWrapperBase::RequestCloseAsync_::_1_::dtor$2 @ 0x1804EBA17 (_WindowWrapperBase--RequestCloseAsync_--_1_--dtor$2.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_ed7f0a6228c8488fd474f055f2d85ce3___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x1804F1390 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_1804F1390.c)
 *     _UwpWindowWrapperBase::RequestCloseAsync_::_1_::dtor$2 @ 0x1804F17D7 (_UwpWindowWrapperBase--RequestCloseAsync_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_49f0d603c537ac1ec5e9185e8119d3f7___::_lambda_call__lambda_49f0d603c537ac1ec5e9185e8119d3f7___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 573) = 0;
  }
  return result;
}
