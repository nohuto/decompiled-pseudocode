/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_ResumeCoro$1 @ 0x18065ED10
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_InitCoro$2 @ 0x18065EBD8 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Ini.c)
 * Callees:
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1801BC970 (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1802229A8 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUG.c)
 *     ?unconditional_release_ref@?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180294DFC (-unconditional_release_ref@-$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031C2C0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180335A4C (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180335A4C.c)
 *     ?await_suspend@awaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180596590 (-await_suspend@awaitable@-1--resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4.c)
 *     ??$emplace@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@1@@Z @ 0x18065E138 (--$emplace@U-$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@-$_Hash@V-$_Umap_traits@PEAUHWND__@@P.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync__ResumeCoro_1(
        unsigned __int64 a1)
{
  _WORD *v2; // r14
  __int64 v3; // r9
  const struct winrt::impl::slim_source_location *v4; // rax
  int WindowFromWindowId; // eax
  HWND v6; // rbx
  DWORD idThread; // eax
  __int64 v8; // rdx
  HWINEVENTHOOK v9; // rax
  float *v10; // rcx
  _BYTE pExceptionObject[88]; // [rsp+50h] [rbp-58h] BYREF

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_16;
    case 2:
      v3 = *(_QWORD *)(a1 + 177);
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( v3 )
      {
        *(_QWORD *)(a1 + 16) = v3;
        winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(v3);
      }
      *(_QWORD *)(a1 + 160) = a1 - 112;
      *(_QWORD *)(a1 + 24) = v3 + 24;
      *(_DWORD *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 36) = 0;
      if ( *(_DWORD *)(a1 - 112 + 96) == 2 )
      {
        v4 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 88);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v4);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      *v2 = 4;
      if ( `winrt::resume_foreground'::`2'::awaitable::await_suspend(a1 + 24, a1) )
        return;
      goto LABEL_11;
    case 4:
LABEL_11:
      *(_DWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 112) = 0LL;
      *(_DWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 128) = 0LL;
      *(_QWORD *)(a1 + 136) = 0LL;
      WindowFromWindowId = GetWindowFromWindowId(*(_QWORD *)(a1 + 185), a1 + 112);
      winrt::check_hresult((int *)(a1 + 144), WindowFromWindowId, a1 + 120);
      v6 = *(HWND *)(a1 + 112);
      idThread = GetWindowThreadProcessId(v6, (LPDWORD)(a1 + 40));
      if ( idThread )
      {
        v9 = SetWinEventHook(
               0x8001u,
               0x8001u,
               0LL,
               winrt::Windows::Internal::Shell::implementation::WindowsTracker::WinEventProc,
               *(_DWORD *)(a1 + 40),
               idThread,
               0);
        v10 = (float *)(*(_QWORD *)(a1 + 177) + 40LL);
        *(_QWORD *)(a1 + 48) = v6;
        *(_QWORD *)(a1 + 56) = v9;
        std::_Hash<std::_Umap_traits<HWND__ *,HWINEVENTHOOK__ *,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,HWINEVENTHOOK__ *>>,0>>::emplace<std::pair<HWND__ * const,HWINEVENTHOOK__ *>>(
          v10,
          a1 + 64,
          (unsigned __int8 *)(a1 + 48));
      }
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::unconditional_release_ref((__int64 *)(a1 + 16));
      *(_QWORD *)(a1 + 80) = *(_QWORD *)(a1 + 160);
      *v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(a1 + 80),
              v8) )
        goto LABEL_16;
      return;
    case 5:
      if ( *(_QWORD *)(a1 + 16) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::unconditional_release_ref((__int64 *)(a1 + 16));
LABEL_16:
      *(_QWORD *)(a1 + 160) = a1 - 112;
      winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x140);
      break;
    default:
      __debugbreak();
      break;
  }
}
