/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$1 @ 0x180259740
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_InitCoro$2 @ 0x180259674 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMetaDataAsync$_I.c)
 * Callees:
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x180072F74 (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180087AA4 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800B3E54 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ?release_ref@?$com_ptr@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BCF98 (-release_ref@-$com_ptr@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1802D2E70 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@U-$IAsyncOperation@UIR.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ??$NullFactory_Error@AEAY0GF@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0GF@$$CBG@Z @ 0x1806EF074 (--$NullFactory_Error@AEAY0GF@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0GF@$$CBG@Z.c)
 *     ??$try_as@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1806F0384 (--$try_as@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@IUnknown@Founda.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806F1F48 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?BackupUserIntentAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806F2010 (-BackupUserIntentAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@U.c)
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0@Z @ 0x1806F351C (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AE_ea_1806F351C.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync__ResumeCoro_1(
        __int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 Factory; // rax
  __int64 v4; // rcx
  winrt::Windows::Foundation::IUnknown *v5; // rdi
  __int64 v6; // rcx
  const winrt::hresult_error *v7; // [rsp+28h] [rbp-30h] BYREF

  v1 = a1;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
      goto LABEL_14;
    case 2:
      winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
        *(_QWORD *)(a1 + 158),
        (__int64 *)(a1 + 16));
      *(_BYTE *)(v1 + 24) = 0;
      *(_QWORD *)(v1 + 32) = v1 + 24;
      if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
        goto LABEL_5;
      *(_WORD *)(v1 + 8) = 4;
      ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std___experimental_std___Z(
        v2,
        v1);
      return;
    case 4:
LABEL_5:
      _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
      *(_QWORD *)(v1 + 72) = L"WindowsUdk.System.UserProfile.AppListBackupExtension";
      *(_QWORD *)(v1 + 80) = 52LL;
      winrt::param::hstring::hstring((winrt::param::hstring *)(v1 + 40), v1 + 72);
      winrt::param::hstring::hstring(
        (winrt::param::hstring *)(v1 + 88),
        L"com.microsoft.windows.extension.applistbackup");
      try
      {
        Factory = winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
                    (const struct winrt::param::hstring *)(v1 + 120),
                    (const struct winrt::param::hstring *)(v1 + 88));
        winrt::Windows::Foundation::IUnknown::try_as<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>(
          Factory,
          v1 + 128);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 120));
        if ( *(_QWORD *)(v1 + 128) )
        {
          v4 = v1 + 128;
          if ( *(_BYTE *)(v1 + 166) )
          {
            v5 = (winrt::Windows::Foundation::IUnknown *)(v1 + 136);
            winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupUserIntentAsync(
              v4,
              v1 + 136);
          }
          else
          {
            v5 = (winrt::Windows::Foundation::IUnknown *)(v1 + 144);
            winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
              v4,
              v1 + 144);
          }
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(v5);
        }
        else
        {
          CAppBackupListenerTelemetry::NullFactory_Error<unsigned short const (&)[101]>();
        }
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(v1 + 128));
      }
      catch ( const winrt::hresult_error *v7 )
      {
        v6 = *((unsigned int *)v7 + 3);
        *(_DWORD *)(a1 + 152) = v6;
        CAppBackupListenerTelemetry::DeviceMetaData_Error<unsigned short const (&)[58],int>(v6, a1 + 152);
        v1 = a1;
      }
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref((__int64 *)(v1 + 16));
      std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
        v1,
        v1 + 156);
      goto LABEL_14;
    case 5:
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref((__int64 *)(a1 + 16));
LABEL_14:
      if ( *(_WORD *)(v1 + 10) )
        operator delete((void *)v1);
      break;
    default:
      __debugbreak();
      break;
  }
}
