/*
 * XREFs of ?GetCurrentAsync@DisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801E88B4
 * Callers:
 *     CActionCenterExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x180240500 (CActionCenterExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x180241960 (CToastCenterExperienceManager--RegisterForDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x18025A510 (MultitaskingViewGestureHandler--CacheMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x180285FD0 (TaskViewFrame--UpdateWorkAreaAsync$_ResumeCoro$1.c)
 *     CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x18038F6D0 (CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::UpdateMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1803F1460 (winrt--Windows--Internal--Shell--implementation--PenMenuSystemTrayManager--UpdateMo_ea_1803F1460.c)
 * Callees:
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??$call@P6A?AU?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@AEBUIDisplayMonitorInfoCollectionStatics@Shell@UI@WindowsUdk@4@@Z@?$factory_cache_entry@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@UIDisplayMonitorInfoCollectionStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AU?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@2@AEBUIDisplayMonitorInfoCollectionStatics@Shell@UI@WindowsUdk@2@@Z@Z @ 0x180209010 (--$call@P6A-AU-$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Founda.c)
 */

_QWORD *__fastcall winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection::GetCurrentAsync(_QWORD *a1)
{
  const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *v3)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_1808CA748);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection,winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollectionStatics> )
  {
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection,winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollectionStatics>,
      a1);
    _InterlockedDecrement64(&qword_1808CA748);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CA748);
    v3 = _lambda_ca8bd2610b0f0373fab456524c49e747_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection,winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollectionStatics>::call<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection> (*)(winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollectionStatics const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
