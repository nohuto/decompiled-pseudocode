/*
 * XREFs of ?FindFirstFocusableElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456@@Z @ 0x1806BB4DC
 * Callers:
 *     ?MoveFocus@TaskViewFrame@@UEAAJI@Z @ 0x1806BB790 (-MoveFocus@TaskViewFrame@@UEAAJI@Z.c)
 * Callees:
 *     ??R_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@QEBA@AEBUIFocusManagerStatics4@Input@Xaml@UI@Windows@winrt@@@Z @ 0x1802C7738 (--R_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@QEBA@AEBUIFocusManagerStatics4@Input@Xaml@UI@Windo.c)
 *     ??$call@AEAV_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@@?$factory_cache_entry@UFocusManager@Input@Xaml@UI@Windows@winrt@@UIFocusManagerStatics4@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@@Z @ 0x1806B9B20 (--$call@AEAV_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@@-$factory_cache_entry@UFocusManager@Inpu.c)
 */

const struct winrt::Windows::UI::Xaml::DependencyObject *__fastcall winrt::Windows::UI::Xaml::Input::FocusManager::FindFirstFocusableElement(
        const struct winrt::Windows::UI::Xaml::DependencyObject *a1,
        __int64 *a2)
{
  __int64 *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_1808CC398;
  _InterlockedIncrement64(&qword_1808CC398);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4> )
  {
    _lambda_49e62eb3f931e46ad527edc5ebe4a7b3_::operator()(
      &v4,
      a1,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>);
    _InterlockedDecrement64(&qword_1808CC398);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CC398);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Input::FocusManager,winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>::call<_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_ &>(
      (__int64 *)a1,
      a1,
      &v4);
  }
  return a1;
}
