/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_a02d817213a1872483990d5857a507da_@@CA@AEBUIPackageCatalogStatics@ApplicationModel@Windows@winrt@@@Z @ 0x180313070
 * Callers:
 *     <none>
 * Callees:
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052A5C (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 */

const struct winrt::Windows::ApplicationModel::IPackageCatalogStatics *__fastcall _lambda_a02d817213a1872483990d5857a507da_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::ApplicationModel::IPackageCatalogStatics *a1,
        __int64 **a2)
{
  winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
    a2,
    a1);
  return a1;
}
