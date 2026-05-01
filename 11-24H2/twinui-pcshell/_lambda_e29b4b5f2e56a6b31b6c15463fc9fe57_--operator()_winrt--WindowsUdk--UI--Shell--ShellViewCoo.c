/*
 * XREFs of _lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const_&_ @ 0x1803C4948
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_e29b4b5f2e56a6b31b6c15463fc9fe57___::Invoke @ 0x1803C4CC0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1803C4CC0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052A5C (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Query@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180054A2C (-Query@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801C9A54 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?Size@?$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18021DD9C (-Size@-$consume_Windows_Storage_Streams_IRandomAccessStream@UIRandomAccessStream@Streams@Storage.c)
 *     ?WorkAreaOffset@?$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18036E4BC (-WorkAreaOffset@-$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManag.c)
 *     ??$try_query@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1803C4A50 (--$try_query@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     ?ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z @ 0x1803C4EF0 (-ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_e29b4b5f2e56a6b31b6c15463fc9fe57_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_const___(
        __int64 *a1,
        __int64 *a2,
        __int64 **a3)
{
  __int64 *v5; // rax
  char v6; // bl
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]
  __int64 v12; // [rsp+60h] [rbp+28h] BYREF
  __int64 *v13; // [rsp+68h] [rbp+30h] BYREF
  __int64 **v14; // [rsp+70h] [rbp+38h]
  volatile signed __int32 *v15; // [rsp+78h] [rbp+40h] BYREF

  v14 = a3;
  v13 = a2;
  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager>(
    a1 + 1,
    &v12);
  if ( v12 )
  {
    winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
      a3,
      &v13);
    v11 = 0LL;
    v10 = *winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaOffset(
             (__int64 *)&v13,
             &v15);
    v5 = winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::Query(
           &v13,
           &v15);
    v6 = winrt::operator==(v5, (char *)L"LogonWebHost");
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
    if ( v6 )
    {
      *(_BYTE *)(*a1 + 104) = 1;
      v11 = 0x42C8000042C80000LL;
    }
    v7 = *a1;
    v8 = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStream<winrt::Windows::Storage::Streams::IRandomAccessStream>::Size((__int64 *)&v13);
    CNetworkExperienceManager::ShowFlyout(v7, &v10, v8);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  return 0LL;
}
