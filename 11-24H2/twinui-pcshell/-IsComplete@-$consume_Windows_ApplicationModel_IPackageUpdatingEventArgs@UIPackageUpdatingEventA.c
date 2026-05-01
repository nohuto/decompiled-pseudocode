/*
 * XREFs of ?IsComplete@?$consume_Windows_ApplicationModel_IPackageUpdatingEventArgs@UIPackageUpdatingEventArgs@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805F6DE8
 * Callers:
 *     ?HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUpdatingEventArgs@856@@Z @ 0x1800528B0 (-HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUP.c)
 *     _lambda_724db070561b64a1d673c65688c83bb1_::operator()_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___ @ 0x1805F0DE4 (_lambda_724db070561b64a1d673c65688c83bb1_--operator()_winrt--Windows--Foundation--IAsyncOperatio.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1805F4B20 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurr_ea_1805F4B20.c)
 *     ?_lambda_invoker_cdecl_@_lambda_c5531eb30e442e1349f82459eb3a7316_@@CA@AEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@Z @ 0x1806383F0 (-_lambda_invoker_cdecl_@_lambda_c5531eb30e442e1349f82459eb3a7316_@@CA@AEBUIGameBarStatics@UI@Gam.c)
 *     ?CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1806396BC (-CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<winrt::Windows::ApplicationModel::IPackageUpdatingEventArgs>::IsComplete(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *a1;
  v4 = 0;
  v6 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 80LL))(v1, &v6);
  winrt::check_hresult(&v7, v2, (__int64)&v4);
  return v6;
}
