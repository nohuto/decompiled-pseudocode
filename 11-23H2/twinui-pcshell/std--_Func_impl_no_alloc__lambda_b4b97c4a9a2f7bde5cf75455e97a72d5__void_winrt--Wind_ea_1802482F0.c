/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b4b97c4a9a2f7bde5cf75455e97a72d5__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1802482F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_::operator() @ 0x180236F2C (_lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_--operator().c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_b4b97c4a9a2f7bde5cf75455e97a72d5__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call(
        __int64 a1,
        IUnknown **a2)
{
  IUnknown *v2; // rax
  IUnknown *v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v3 = v2;
  lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_::operator()(
    (winrt::Windows::Internal::Shell::implementation::DashboardManager **)(a1 + 8),
    &v3);
}
