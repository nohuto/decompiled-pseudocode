/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e4e3b38ea4e4911517cc25fd51baafe0__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1805DADF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e4e3b38ea4e4911517cc25fd51baafe0_::operator() @ 0x1805CCC08 (_lambda_e4e3b38ea4e4911517cc25fd51baafe0_--operator().c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_e4e3b38ea4e4911517cc25fd51baafe0__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v3 = v2;
  lambda_e4e3b38ea4e4911517cc25fd51baafe0_::operator()(
    a1,
    (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
}
