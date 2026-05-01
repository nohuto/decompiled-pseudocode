/*
 * XREFs of ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18021DD9C
 * Callers:
 *     ?TileStoreChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUITileStore@Tiles@456@AEBUITileStoreChangedEventArgs@8456@@Z @ 0x18021DD70 (-TileStoreChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUITileStore.c)
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x18024B870 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 *     XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x18024CCD0 (XamlLauncher--SearchShowRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18025AA00 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x1802739C8 (-OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180281A80 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x18036D090 (CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1803702A0 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     _lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_ @ 0x1803C4948 (_lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 *     XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x18045F620 (XamlLauncher--LauncherDismissRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x1804A36D0 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 *     ?OnWindowMigrationEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@4567@AEBUWindowMigrationEventArgs@94567@@Z @ 0x180588C50 (-OnWindowMigrationEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@win.c)
 *     ?OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@AEBUWindowMigrationEventArgs@34567@@Z @ 0x1805B60C0 (-OnWindowMigrationEvent@SnapMigrationHandler@@AEAAXAEBUIWindowManagementEvents2@WindowManagement.c)
 *     _lambda_a44a1a72576a729f64e0a6d83c71a024_::operator() @ 0x1805CC610 (_lambda_a44a1a72576a729f64e0a6d83c71a024_--operator().c)
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805F5FBC (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 *     ??$unbox_value_type@_KAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_KAEBUIInspectable@Foundation@Windows@1@@Z @ 0x1806485E8 (--$unbox_value_type@_KAEBUIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_KAEBUIInspectab.c)
 *     ?ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA?AUIBuffer@Streams@Storage@Windows@winrt@@QEAUHWND__@@AEBUhstring@7@@Z @ 0x18064F350 (-ReadBufferFromSharedMemory@FileMappingHelpers@Util@@QEAA-AUIBuffer@Streams@Storage@Windows@winr.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size(
        __int64 *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *a1;
  v7 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 48LL))(v1, &v7);
  winrt::check_hresult(&v6, v2, &v4);
  return v7;
}
