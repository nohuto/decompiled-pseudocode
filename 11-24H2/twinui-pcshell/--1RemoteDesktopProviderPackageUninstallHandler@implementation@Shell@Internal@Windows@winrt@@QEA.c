/*
 * XREFs of ??1RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18063F090
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@URemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x180642660 (-_Destroy@-$_Ref_count_obj2@URemoteDesktopProviderPackageUninstallHandler@implementation@Shell@I.c)
 * Callees:
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x180611408 (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@_ea_180611408.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler::~RemoteDesktopProviderPackageUninstallHandler(
        winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler *this)
{
  __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BGI_AA_impl_winrt__QEAA_XZ((__int64 *)this + 1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(this);
}
