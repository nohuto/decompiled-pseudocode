/*
 * XREFs of ?InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@SA@XZ @ 0x1801F9B10
 * Callers:
 *     ?EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ @ 0x1801F9A7C (-EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ.c)
 *     ?XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ @ 0x18059636C (-XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ.c)
 *     ?XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ @ 0x1805B4654 (-XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ.c)
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x1806092E8 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??$call@P6A?AUWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@AEBUIWindowsXamlManagerStatics@23456@@Z@?$factory_cache_entry@UWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@UIWindowsXamlManagerStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUWindowsXamlManager@Hosting@Xaml@UI@Windows@2@AEBUIWindowsXamlManagerStatics@45672@@Z@Z @ 0x18020FABC (--$call@P6A-AUWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@AEBUIWindowsXamlManagerStatics@2.c)
 */

_QWORD *__fastcall winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager::InitializeForCurrentThread(_QWORD *a1)
{
  const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *v3)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_1808CB7B8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager,winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics> )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager,winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>,
      a1);
    _InterlockedDecrement64(&qword_1808CB7B8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CB7B8);
    v3 = _lambda_ca8bd2610b0f0373fab456524c49e747_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager,winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::call<winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager (*)(winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
