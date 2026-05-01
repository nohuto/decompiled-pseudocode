/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs___::_)(Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs___::Invoke @ 0x1803C8000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs___::___Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs_____lambda_c68d2c3cb8c3b8a8d7d1e52e9b1b50b8___1_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( *(_QWORD *)(a1 + 16) )
  {
    LOBYTE(v5) = 0;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 48LL))(a3, &v5);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
      *(_QWORD *)(a1 + 16),
      (_BYTE)v5 == 0 ? 0x80004005 : 0);
  }
  return 0LL;
}
