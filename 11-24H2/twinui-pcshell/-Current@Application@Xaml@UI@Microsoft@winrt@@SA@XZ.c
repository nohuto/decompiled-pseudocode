/*
 * XREFs of ?Current@Application@Xaml@UI@Microsoft@winrt@@SA@XZ @ 0x1804569B8
 * Callers:
 *     winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_ResumeCoro$1 @ 0x18024A880 (winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Resu.c)
 * Callees:
 *     ?GetMicrosoftResourceManager@?$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics@UISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800C5F68 (-GetMicrosoftResourceManager@-$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemR.c)
 *     ??$call@P6A?AUApplication@Xaml@UI@Microsoft@winrt@@AEBUIApplicationStatics@2345@@Z@?$factory_cache_entry@UApplication@Xaml@UI@Microsoft@winrt@@UIApplicationStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUApplication@Xaml@UI@Microsoft@2@AEBUIApplicationStatics@4562@@Z@Z @ 0x180455D38 (--$call@P6A-AUApplication@Xaml@UI@Microsoft@winrt@@AEBUIApplicationStatics@2345@@Z@-$factory_cac.c)
 */

_QWORD *__fastcall winrt::Microsoft::UI::Xaml::Application::Current(_QWORD *a1)
{
  const struct winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics *(__fastcall *v3)(const struct winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics *, __int64 *); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_1808CB878);
  if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Application,winrt::Microsoft::UI::Xaml::IApplicationStatics> )
  {
    winrt::impl::consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics<winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::GetMicrosoftResourceManager(
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Application,winrt::Microsoft::UI::Xaml::IApplicationStatics>,
      a1);
    _InterlockedDecrement64(&qword_1808CB878);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CB878);
    v3 = _lambda_fbc83b1fe666e9204d492b54b5fecab0_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Application,winrt::Microsoft::UI::Xaml::IApplicationStatics>::call<winrt::Microsoft::UI::Xaml::Application (*)(winrt::Microsoft::UI::Xaml::IApplicationStatics const &)>(
      (__int64)a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
