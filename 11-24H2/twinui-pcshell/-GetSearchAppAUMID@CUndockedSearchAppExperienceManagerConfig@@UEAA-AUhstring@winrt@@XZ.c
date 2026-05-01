/*
 * XREFs of ?GetSearchAppAUMID@CUndockedSearchAppExperienceManagerConfig@@UEAA?AUhstring@winrt@@XZ @ 0x180243EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052A5C (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1801C4BD4 (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 *     ?GetIdentityToUse@SearchAppIdentity@Search@Windows@@CA?AW4SearchAppIdentityToUse@123@XZ @ 0x1802C2ABC (-GetIdentityToUse@SearchAppIdentity@Search@Windows@@CA-AW4SearchAppIdentityToUse@123@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ @ 0x1803C1BE0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=8
volatile signed __int32 **__fastcall CUndockedSearchAppExperienceManagerConfig::GetSearchAppAUMID(
        __int64 a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 **v3; // rax
  char v4; // di
  volatile signed __int32 *v5; // rsi
  volatile signed __int32 *v6; // rax
  int IdentityToUse; // eax
  const unsigned __int16 *v8; // rdx
  __int64 *v10; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v11; // [rsp+48h] [rbp-11h] BYREF
  volatile signed __int32 *v12; // [rsp+50h] [rbp-9h] BYREF
  DWORD pcbData[2]; // [rsp+58h] [rbp-1h] BYREF
  volatile signed __int32 *v14; // [rsp+60h] [rbp+7h] BYREF
  volatile signed __int32 *v15; // [rsp+68h] [rbp+Fh] BYREF
  volatile signed __int32 *v16; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v17[7]; // [rsp+78h] [rbp+1Fh] BYREF
  int pvData; // [rsp+D0h] [rbp+77h] BYREF
  volatile signed __int32 *v19; // [rsp+D8h] [rbp+7Fh] BYREF

  pcbData[1] = 0;
  LODWORD(v19) = 1;
  v17[0] = *(_QWORD *)winrt::hstring::hstring((winrt::hstring *)&v11, L"com.microsoft.windows.app.search");
  winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
    (const struct winrt::param::hstring *)&v10,
    (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v17,
    (__int64)&v19);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v11);
  if ( v10 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53852258>::GetImpl'::`2'::impl) )
    {
      winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
        &v10,
        &v12);
      LODWORD(v19) = 1;
      v17[0] = *(_QWORD *)winrt::hstring::hstring((winrt::hstring *)&v14, L"com.microsoft.windows.app.searchMI");
      winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
        (const struct winrt::param::hstring *)&v11,
        (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v17,
        (__int64)&v19);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
      if ( v11 )
      {
        v3 = (volatile signed __int32 **)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                                           &v11,
                                           &v16);
        v4 = 1;
      }
      else
      {
        v3 = (volatile signed __int32 **)winrt::hstring::hstring(
                                           (winrt::hstring *)&v15,
                                           (const struct winrt::hstring *)&v12);
        v4 = 2;
      }
      v5 = *v3;
      *v3 = 0LL;
      v19 = v5;
      if ( (v4 & 2) != 0 )
      {
        v4 &= ~2u;
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
      }
      if ( (v4 & 1) != 0 )
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
      pvData = 0;
      pcbData[0] = 4;
      if ( RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
             L"LaunchLowILNextTime",
             0x10u,
             0LL,
             &pvData,
             pcbData)
        || pvData != 1 )
      {
        v19 = 0LL;
        *a2 = v5;
      }
      else
      {
        v6 = v12;
        v12 = 0LL;
        *a2 = v6;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v19);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
    }
    else
    {
      winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
        &v10,
        a2);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  }
  else
  {
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
    IdentityToUse = Windows::Search::SearchAppIdentity::GetIdentityToUse();
    if ( IdentityToUse )
    {
      if ( IdentityToUse == 1 )
        v8 = L"Microsoft.Search_8wekyb3d8bbwe!CortanaUI";
      else
        v8 = L"Microsoft.Cortana_8wekyb3d8bbwe!CortanaUI";
    }
    else
    {
      v8 = L"Microsoft.Windows.Search_cw5n1h2txyewy!CortanaUI";
    }
    winrt::hstring::hstring((winrt::hstring *)a2, v8);
  }
  return a2;
}
