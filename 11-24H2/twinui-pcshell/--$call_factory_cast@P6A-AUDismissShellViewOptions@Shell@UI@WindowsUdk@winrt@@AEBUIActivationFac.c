/*
 * XREFs of ??$call_factory_cast@P6A?AUDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@ZU12345@U6785@V_lambda_0df55e773ac92632ea908e96f7e5a375_@@@impl@winrt@@YA?A_P$$QEAV_lambda_0df55e773ac92632ea908e96f7e5a375_@@@Z @ 0x180211D0C
 * Callers:
 *     ??0DismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x180211CEC (--0DismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$ActivateInstance@UDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDismissShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x180211D84 (--$ActivateInstance@UDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@@IActivationFactory@Foun.c)
 *     ??$call@P6A?AUDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@AEBUIActivationFactory@Foundation@Windows@5@@Z@?$factory_cache_entry@UDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDismissShellViewOptions@Shell@UI@WindowsUdk@2@AEBUIActivationFactory@Foundation@Windows@2@@Z@Z @ 0x1802A8F04 (--$call@P6A-AUDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@AEBUIActivationFactory@Foundati.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::call_factory_cast<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions (*)(winrt::Windows::Foundation::IActivationFactory const &),winrt::WindowsUdk::UI::Shell::DismissShellViewOptions,winrt::Windows::Foundation::IActivationFactory,_lambda_0df55e773ac92632ea908e96f7e5a375_>(
        __int64 a1)
{
  __int64 (__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *); // [rsp+50h] [rbp+18h] BYREF

  _InterlockedIncrement64(&qword_1808CA728);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions>(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions,winrt::Windows::Foundation::IActivationFactory>,
      a1);
    _InterlockedDecrement64(&qword_1808CA728);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CA728);
    v3 = _lambda_0df55e773ac92632ea908e96f7e5a375_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions,winrt::Windows::Foundation::IActivationFactory>::call<winrt::WindowsUdk::UI::Shell::DismissShellViewOptions (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
