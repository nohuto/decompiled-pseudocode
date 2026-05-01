/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$1 @ 0x180612A90
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_InitCoro$2 @ 0x180612A24 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMetaDataAsync$_I.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x18004C624 (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052A5C (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CAB80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1802135EC (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0@Z @ 0x1802BC960 (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AE_ea_1802BC960.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$NullFactory_Error@AEAY0GF@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0GF@$$CBG@Z @ 0x18061037C (--$NullFactory_Error@AEAY0GF@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0GF@$$CBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync__ResumeCoro_1(
        __int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  void *v3; // r8
  void (__fastcall ***v4)(_QWORD, void *, __int64); // rcx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 **v8; // rcx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v9; // rbx
  __int64 v10; // rcx
  const winrt::hresult_error *v11; // [rsp+28h] [rbp-40h] BYREF

  v1 = a1;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
      goto LABEL_21;
    case 2:
      winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
        *(_QWORD *)(a1 + 161),
        (_QWORD *)(a1 + 16));
      *(_BYTE *)(v1 + 24) = 0;
      *(_WORD *)(v1 + 8) = 4;
      `winrt::resume_background'::`2'::awaitable::await_suspend(v2, (void (*)(void *, void *))v1, v3);
      return;
    case 4:
      *(_QWORD *)(a1 + 64) = L"WindowsUdk.System.UserProfile.AppListBackupExtension";
      *(_QWORD *)(a1 + 72) = 52LL;
      winrt::param::hstring::hstring(a1 + 32, (__int64 *)(a1 + 64));
      winrt::param::hstring::hstring(
        (winrt::param::hstring *)(v1 + 80),
        L"com.microsoft.windows.extension.applistbackup");
      try
      {
        v4 = *(void (__fastcall ****)(_QWORD, void *, __int64))winrt::WindowsUdk::ApplicationModel::AppExtensions::ExtensionFactory::GetFactory(
                                                                 (const struct winrt::param::hstring *)(v1 + 112),
                                                                 (const struct winrt::param::hstring *)(v1 + 80),
                                                                 v1 + 32);
        if ( v4 )
        {
          *(_QWORD *)(v1 + 152) = 0LL;
          (**v4)(
            v4,
            &winrt::impl::guid_v<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>,
            v1 + 152);
          v5 = *(_QWORD *)(v1 + 152);
          v6 = v5;
          v7 = v5;
        }
        else
        {
          v5 = 0LL;
          v6 = 0LL;
          v7 = 0LL;
        }
        *(_QWORD *)(v1 + 120) = v7;
        if ( *(_QWORD *)(v1 + 112) )
        {
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(v1 + 112));
          v5 = v6;
        }
        if ( v5 )
        {
          v8 = (__int64 **)(v1 + 120);
          if ( *(_BYTE *)(v1 + 169) )
          {
            v9 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v1 + 128);
            winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
              v8,
              (_QWORD *)(v1 + 128));
          }
          else
          {
            v9 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v1 + 136);
            winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
              v8,
              (_QWORD *)(v1 + 136));
          }
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(v9);
        }
        else
        {
          CAppBackupListenerTelemetry::NullFactory_Error<unsigned short const (&)[101]>(0LL);
        }
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v1 + 120));
      }
      catch ( const winrt::hresult_error *v11 )
      {
        v10 = *((unsigned int *)v11 + 3);
        *(_DWORD *)(a1 + 144) = v10;
        CAppBackupListenerTelemetry::DeviceMetaData_Error<unsigned short const (&)[58],int>(v10);
        v1 = a1;
      }
      if ( *(_QWORD *)(v1 + 16) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(v1 + 16));
      goto LABEL_21;
    case 5:
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
LABEL_21:
      if ( *(_WORD *)(v1 + 10) )
        operator delete((void *)v1, (const struct std::nothrow_t *)0xC0);
      break;
    default:
      __debugbreak();
      break;
  }
}
