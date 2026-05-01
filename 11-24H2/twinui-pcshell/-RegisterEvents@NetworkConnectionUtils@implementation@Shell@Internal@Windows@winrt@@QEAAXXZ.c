/*
 * XREFs of ?RegisterEvents@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1806707D8
 * Callers:
 *     ?GetInstance@NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEBA?AU13456@XZ @ 0x180670530 (-GetInstance@NetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@QEBA-AU.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??1?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x180649A34 (--1-$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@wi_ea_180649A34.c)
 *     ??$?0UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUIInspectable@Foundation@45@@Z@NetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@QEAA@$$QEAU?$weak_ref@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@@4@$$QEAP8NetworkConnectionUtils@implementation@Shell@Internal@34@EAAXAEBUIInspectable@Foundation@34@@Z@Z @ 0x18066FD78 (--$-0UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUIInsp.c)
 *     ??$get_weak@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@@?$root_implements@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@IEAA?AU?$weak_ref@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1806700B4 (--$get_weak@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@@-$root_impleme.c)
 *     ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@Uauto_revoke_t@5@AEBUNetworkStatusChangedEventHandler@2345@@Z @ 0x1806706CC (-NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@Uauto_revoke_.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::RegisterEvents(
        winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils *this)
{
  __int64 v2; // rdx
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int128 v6; // [rsp+20h] [rbp-20h] BYREF
  __int64 v7[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+18h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF

  winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils,winrt::Windows::Internal::Shell::NetworkConnectionUtils>::get_weak<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils>(
    (volatile signed __int64 *)this,
    &v9);
  *(_QWORD *)&v6 = winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::OnNetworkStatusChanged;
  DWORD2(v6) = 0;
  winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(
    &v8,
    &v9,
    &v6);
  v3 = winrt::Windows::Networking::Connectivity::NetworkInformation::NetworkStatusChanged(v7, v2, &v8);
  v4 = *v3;
  *v3 = 0LL;
  *((_QWORD *)&v6 + 1) = v3[1];
  *(_QWORD *)&v6 = 0LL;
  v10 = v4;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)&v6, (__int64 *)this + 6);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 6, &v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  v5 = *((_QWORD *)&v6 + 1);
  *((_QWORD *)&v6 + 1) = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v5;
  __1__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  __1__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v7);
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
}
