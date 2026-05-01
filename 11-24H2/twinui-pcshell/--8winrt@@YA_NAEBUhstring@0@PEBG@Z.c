/*
 * XREFs of ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801C9A54
 * Callers:
 *     ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180051A30 (-FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     _anonymous_namespace_::ContextToSearchShowArgs @ 0x18010F3F8 (_anonymous_namespace_--ContextToSearchShowArgs.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1802430DC (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18025AA00 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180275210 (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x180284768 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 *     ??9winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1802CE7B0 (--9winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?HandleEnterFSEDialogResult@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@AEAAJUhstring@7@AEAVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@@Z @ 0x180330D48 (-HandleEnterFSEDialogResult@GamingPostureController@implementation@Posture@GamingExperiences@Int.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x180332AE0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180332AE0.c)
 *     _lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_ @ 0x1803C4948 (_lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 *     _anonymous_namespace_::ContextToLauncherDismissMethod @ 0x18045DBD4 (_anonymous_namespace_--ContextToLauncherDismissMethod.c)
 *     _lambda_d81cebd908bc953c0c32f92e43af8435_::operator() @ 0x1805EDF2C (_lambda_d81cebd908bc953c0c32f92e43af8435_--operator().c)
 *     ?GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA?AV?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEBUUri@Foundation@56@@Z @ 0x180666E24 (-GetForLaunchUri@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@SA-AV-$unique_ptr@UL.c)
 *     GetStoredEnterprisePinGeneration @ 0x180690EBC (GetStoredEnterprisePinGeneration.c)
 * Callees:
 *     <none>
 */

char __fastcall winrt::operator==(__int64 *a1, char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  const WCHAR *v4; // r9
  __int64 v5; // rcx
  signed __int64 v6; // r9
  char v7; // r8

  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)&a2[2 * v2] );
  v3 = *a1;
  if ( v3 )
  {
    v4 = *(const WCHAR **)(v3 + 16);
    v5 = *(unsigned int *)(v3 + 4);
  }
  else
  {
    v4 = &pvData;
    v5 = 0LL;
  }
  if ( v5 != v2 )
    return 0;
  v6 = (char *)v4 - a2;
  v7 = 1;
  while ( v5 )
  {
    if ( *(_WORD *)&a2[v6] != *(_WORD *)a2 )
      return 0;
    --v5;
    a2 += 2;
  }
  return v7;
}
