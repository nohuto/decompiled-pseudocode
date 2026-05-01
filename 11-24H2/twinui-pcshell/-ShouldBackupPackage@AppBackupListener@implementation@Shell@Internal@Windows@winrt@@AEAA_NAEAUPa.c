/*
 * XREFs of ?ShouldBackupPackage@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEAUPackageId@ApplicationModel@56@@Z @ 0x180052C74
 * Callers:
 *     ?HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUpdatingEventArgs@856@@Z @ 0x1800528B0 (-HandlePackageUpdateEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUP.c)
 *     ?HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageInstallingEventArgs@856@@Z @ 0x180052B20 (-HandlePackageInstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXU.c)
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x1801A5BC0 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180050094 (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052ABC (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBA@XZ @ 0x180054CAC (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@_N@Foundation@Window.c)
 *     ?IsManagedByOrganization@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801E9680 (-IsManagedByOrganization@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapI.c)
 *     ?FindPackagesForUserWithPackageTypes@?$consume_Windows_Management_Deployment_IPackageManager2@UPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0AEBW4PackageTypes@Deployment@Management@Windows@3@@Z @ 0x180284548 (-FindPackagesForUserWithPackageTypes@-$consume_Windows_Management_Deployment_IPackageManager2@UP.c)
 *     ??0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ @ 0x1802BF3F0 (--0PackageManager@Deployment@Management@Windows@winrt@@QEAA@XZ.c)
 *     ?Current@?$consume_Windows_Foundation_Collections_IIterator@U?$IIterator@UPackage@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackage@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x1802CD69C (-Current@-$consume_Windows_Foundation_Collections_IIterator@U-$IIterator@UPackage@ApplicationMod.c)
 */

// Hidden C++ exception states: #wind=10
char __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::ShouldBackupPackage(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this,
        __int64 **a2)
{
  __int64 v3; // rdi
  __int64 **v4; // rax
  __int64 *v5; // rdx
  const WCHAR *v6; // rcx
  __int64 v7; // r9
  char result; // al
  __int64 v9; // rax
  const WCHAR *v10; // r8
  __int64 v11; // rdx
  signed __int64 v12; // r8
  char v13; // si
  __int64 v14; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v16[4]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v17; // [rsp+70h] [rbp-68h] BYREF
  __int64 v18; // [rsp+78h] [rbp-60h] BYREF
  __int64 v19; // [rsp+98h] [rbp-40h] BYREF
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v20; // [rsp+E0h] [rbp+8h] BYREF
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v21; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v22; // [rsp+F8h] [rbp+20h] BYREF

  v20 = this;
  try
  {
    winrt::Windows::Management::Deployment::PackageManager::PackageManager((winrt::Windows::Management::Deployment::PackageManager *)&v14);
    LODWORD(v20) = 1;
    v18 = *winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
             a2,
             &v21);
    v19 = 0LL;
    winrt::impl::consume_Windows_Management_Deployment_IPackageManager2<winrt::Windows::Management::Deployment::PackageManager>::FindPackagesForUserWithPackageTypes(
      (unsigned int)&v14,
      (unsigned int)&v22,
      (unsigned int)&v19,
      (unsigned int)&v18,
      (__int64)&v20);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
    winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
      a2,
      v15);
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
      &v22,
      &v21);
    if ( (unsigned __int8)winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::IsManagedByOrganization(&v21) )
    {
      v3 = (__int64)v21;
      v20 = v21;
    }
    else
    {
      v3 = 0LL;
      v20 = 0LL;
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    }
    v16[1] = 0LL;
    while ( v3 )
    {
      winrt::impl::consume_Windows_Foundation_Collections_IIterator<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::ApplicationModel::Package>,winrt::Windows::ApplicationModel::Package>::Current(
        &v20,
        &v21);
      v4 = (__int64 **)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                         &v21,
                         v16);
      v5 = winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
             v4,
             &v17);
      if ( v15[0] )
      {
        v6 = *(const WCHAR **)(v15[0] + 16LL);
        v7 = *(unsigned int *)(v15[0] + 4LL);
      }
      else
      {
        v6 = &pvData;
        v7 = 0LL;
      }
      v9 = *v5;
      if ( *v5 )
      {
        v10 = *(const WCHAR **)(v9 + 16);
        v11 = *(unsigned int *)(v9 + 4);
      }
      else
      {
        v10 = &pvData;
        v11 = 0LL;
      }
      if ( v11 == v7 )
      {
        v12 = (char *)v10 - (char *)v6;
        while ( v11 )
        {
          if ( *(const WCHAR *)((char *)v6 + v12) != *v6 )
            goto LABEL_37;
          --v11;
          ++v6;
        }
        v13 = 1;
      }
      else
      {
LABEL_37:
        v13 = 0;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v17);
      if ( v16[0] )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v16);
      if ( v13 )
      {
        if ( v21 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v21);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v20);
        winrt::handle_type<winrt::impl::hstring_traits>::close(v15);
        if ( v22 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v22);
        if ( v14 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
        return 1;
      }
      if ( v21 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v21);
      if ( !(unsigned __int8)winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults(&v20) )
      {
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v20);
        v3 = 0LL;
        v20 = 0LL;
      }
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(v15);
    if ( v22 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v22);
    if ( v14 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
    result = 0;
  }
  catch ( ... )
  {
    return 0;
  }
  return result;
}
