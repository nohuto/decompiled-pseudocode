/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_ResumeCoro$1 @ 0x18027C8F0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_InitCoro$2 @ 0x18027C7C4 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Ini.c)
 * Callees:
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?release_ref@?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18019A524 (-release_ref@-$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAA.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@experimental@std@@@experimental@std@@@Z @ 0x1801AEF7C (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@AE.c)
 *     ?get_strong@?$implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@QEAA?AU?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1801BEBD0 (-get_strong@-$implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U13456@@wi.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@@impl@winrt@@QEAA@XZ @ 0x1801BEC14 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_foreground@winrt@@YA@AEBUDispatcherQueue@Sy.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVCLauncherTipContextMenu@@UtagRECT@@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1802E7674 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1805E15F8 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUW.c)
 *     ??$await_transform@Uawaitable@?1??resume_background@winrt@@YA@XZ@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAUawaitable@?1??resume_background@2@YA@XZ@@Z @ 0x180629E78 (--$await_transform@Uawaitable@-1--resume_background@winrt@@YA@XZ@@-$promise_base@Up_ea_180629E78.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180725ADC (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180725ADC.c)
 *     ?insert@?$_Hash@V?$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@std@@@std@@@std@@@std@@_N@2@$$QEAU?$pair@QEAUHWND__@@PEAUHWINEVENTHOOK__@@@2@@Z @ 0x180725C38 (-insert@-$_Hash@V-$_Umap_traits@PEAUHWND__@@PEAUHWINEVENTHOOK__@@V-$_Uhash_compare@PEAUHWND__@@U.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync__ResumeCoro_1(
        __int64 a1)
{
  _WORD *v2; // rsi
  __int64 v3; // r10
  _QWORD *v4; // r14
  HWND v5; // r14
  DWORD idThread; // eax
  HWINEVENTHOOK v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_9;
    case 2:
      winrt::implements<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::WindowsTracker>::get_strong(
        *(_QWORD *)(a1 + 145),
        (_QWORD *)(a1 + 16));
      *(_QWORD *)(a1 + 128) = a1 - 96;
      *(_QWORD *)(a1 + 24) = v3 + 24;
      *(_DWORD *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 36) = 0;
      v4 = (_QWORD *)___await_transform_Uawaitable__1__resume_background_winrt__YA_XZ____promise_base_Upromise_type___coroutine_traits_U__IAsyncOperation_UIRandomAccessStream_Streams_Storage_Windows_winrt___Foundation_Windows_winrt___JUhstring_4__experimental_std__U__IAsyncOperation_UIRandomAccessStream_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__X_impl_winrt__QEAA_A_P__QEAUawaitable__1__resume_background_2_YA_XZ__Z(
                       a1 - 96,
                       a1 + 40);
      *(_QWORD *)(a1 + 112) = v4;
      if ( !winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
      {
        *v2 = 4;
        if ( (unsigned __int8)___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVSnapFlyoutHost__AEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAU_RTL_SRWLOCK__P6AXPEAU1__Z_1_ReleaseSRWLockExclusive__YAX0_ZU__integral_constant__K_00_wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil___wil___experimental_std_____notify_awaiter_Uawaitable__1__resume_foreground_winrt__YA_AEBUDispatcherQueue_System_Windows_3_W4DispatcherQueuePriority_563__Z__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVSnapFlyoutHost__AEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAU_RTL_SRWLOCK__P6AXPEAU1__Z_1_ReleaseSRWLockExclusive__YAX0_ZU__integral_constant__K_00_wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil___wil___experimental_std___experimental_std___Z(v4) )
          return;
      }
      goto LABEL_6;
    case 4:
LABEL_6:
      _await_resume___notify_awaiter_Uawaitable__1__resume_foreground_winrt__YA_AEBUDispatcherQueue_System_Windows_3_W4DispatcherQueuePriority_563__Z__impl_winrt__QEAA_XZ(*(_QWORD *)(a1 + 112));
      v5 = *(HWND *)(a1 + 153);
      idThread = GetWindowThreadProcessId(v5, (LPDWORD)(a1 + 48));
      if ( idThread )
      {
        v7 = SetWinEventHook(
               0x8001u,
               0x8001u,
               0LL,
               winrt::Windows::Internal::Shell::implementation::WindowsTracker::WinEventProc,
               *(_DWORD *)(a1 + 48),
               idThread,
               0);
        v8 = *(_QWORD *)(a1 + 145) + 40LL;
        *(_QWORD *)(a1 + 56) = v5;
        *(_QWORD *)(a1 + 64) = v7;
        std::_Hash<std::_Umap_traits<HWND__ *,HWINEVENTHOOK__ *,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,HWINEVENTHOOK__ *>>,0>>::insert(
          v8,
          a1 + 72);
      }
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::release_ref((_QWORD *)(a1 + 16));
      v9 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,CLauncherTipContextMenu *,tagRECT>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,void>::final_suspend(
             *(_QWORD *)(a1 + 128),
             a1 + 96);
      *(_QWORD *)(a1 + 88) = v9;
      *v2 = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend(v9) )
        goto LABEL_9;
      return;
    case 5:
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::release_ref((_QWORD *)(a1 + 16));
LABEL_9:
      *(_QWORD *)(a1 + 128) = a1 - 96;
      winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a1 - 96);
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 96));
      break;
    default:
      __debugbreak();
      break;
  }
}
