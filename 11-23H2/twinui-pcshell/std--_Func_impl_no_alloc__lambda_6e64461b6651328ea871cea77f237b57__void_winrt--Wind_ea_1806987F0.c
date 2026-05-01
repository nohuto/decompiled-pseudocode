/*
 * XREFs of std::_Func_impl_no_alloc__lambda_6e64461b6651328ea871cea77f237b57__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1806987F0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnTaskbarSettingChanged@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4TaskbarSettingChangedEvent@Dashboard@Shell@UI@WindowsUdk@3@@Z @ 0x1806976B4 (-OnTaskbarSettingChanged@-$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6@UDashboard.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_6e64461b6651328ea871cea77f237b57__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call(
        __int64 a1,
        void (__fastcall ****a2)(_QWORD, void *, __int64 *))
{
  void (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v4)(_QWORD, void *, _QWORD *); // [rsp+38h] [rbp+18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+20h] BYREF
  __int64 *v6; // [rsp+48h] [rbp+28h]

  v3 = *a2;
  *a2 = 0LL;
  v4 = v3;
  v6 = (__int64 *)&v4;
  if ( v3 )
  {
    v5 = 0LL;
    (**v3)(v3, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension6>, &v5);
    if ( v5 )
    {
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
      winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::OnTaskbarSettingChanged(
        (__int64 *)&v4,
        (unsigned int *)(a1 + 8));
    }
  }
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
}
