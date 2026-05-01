/*
 * XREFs of ?Current@Window@Xaml@UI@Windows@winrt@@SA@XZ @ 0x1801E251C
 * Callers:
 *     ?Initialize@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x180052650 (-Initialize@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@w.c)
 *     ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x180117958 (--0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAE.c)
 * Callees:
 *     ?GetMicrosoftResourceManager@?$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics@UISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800C5F68 (-GetMicrosoftResourceManager@-$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemR.c)
 *     ??$call@P6A?AUWindow@Xaml@UI@Windows@winrt@@AEBUIWindowStatics@2345@@Z@?$factory_cache_entry@UWindow@Xaml@UI@Windows@winrt@@UIWindowStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUWindow@Xaml@UI@Windows@2@AEBUIWindowStatics@4562@@Z@Z @ 0x1801E2594 (--$call@P6A-AUWindow@Xaml@UI@Windows@winrt@@AEBUIWindowStatics@2345@@Z@-$factory_cache_entry@UWi.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::UI::Xaml::Window::Current(_QWORD *a1)
{
  __int64 (__fastcall *v3)(const struct winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics *); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_1808CB798);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Window,winrt::Windows::UI::Xaml::IWindowStatics> )
  {
    winrt::impl::consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics<winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::GetMicrosoftResourceManager(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Window,winrt::Windows::UI::Xaml::IWindowStatics>,
      a1);
    _InterlockedDecrement64(&qword_1808CB798);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CB798);
    v3 = _lambda_fbc83b1fe666e9204d492b54b5fecab0_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Window,winrt::Windows::UI::Xaml::IWindowStatics>::call<winrt::Windows::UI::Xaml::Window (*)(winrt::Windows::UI::Xaml::IWindowStatics const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
