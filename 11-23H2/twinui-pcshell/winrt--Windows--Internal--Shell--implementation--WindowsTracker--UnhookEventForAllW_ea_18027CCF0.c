/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_ResumeCoro$1 @ 0x18027CCF0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_InitCoro$2 @ 0x18027CBCC (winrt--Windows--Internal--Shell--implementation--WindowsTracker--UnhookEventForAllWindowsAsync$_.c)
 * Callees:
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x18004ED80 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@e.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180072A3C (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@.c)
 *     ??$await_transform@Uawaitable@?1??resume_background@winrt@@YA@XZ@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAUawaitable@?1??resume_background@2@YA@XZ@@Z @ 0x180072BE0 (--$await_transform@Uawaitable@-1--resume_background@winrt@@YA@XZ@@-$promise_base@Upromise_type@-.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801860B8 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1801860B8.c)
 *     ?release_ref@?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18019A524 (-release_ref@-$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAA.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@experimental@std@@@experimental@std@@@Z @ 0x1801AEF7C (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@AE.c)
 *     ?get_strong@?$implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U13456@@winrt@@QEAA?AU?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1801BEBD0 (-get_strong@-$implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U13456@@wi.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@@impl@winrt@@QEAA@XZ @ 0x1801BEC14 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_foreground@winrt@@YA@AEBUDispatcherQueue@Sy.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync__ResumeCoro_1(
        __int64 a1)
{
  _WORD *v2; // r15
  __int64 v3; // r10
  _QWORD *v4; // rbx
  __m128i **v5; // rdi
  __m128i *i; // rbx
  HWINEVENTHOOK v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdx

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_12;
    case 2:
      winrt::implements<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::WindowsTracker>::get_strong(
        *(_QWORD *)(a1 + 97),
        (_QWORD *)(a1 + 16));
      *(_QWORD *)(a1 + 80) = a1 - 96;
      *(_QWORD *)(a1 + 24) = v3 + 24;
      *(_DWORD *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 36) = 0;
      v4 = ___await_transform_Uawaitable__1__resume_background_winrt__YA_XZ____promise_base_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt____V_experimental_std__UIAsyncAction_Foundation_Windows_winrt__X_impl_winrt__QEAA_A_P__QEAUawaitable__1__resume_background_2_YA_XZ__Z(
             a1 - 96,
             (_QWORD *)(a1 + 40),
             a1 + 24);
      *(_QWORD *)(a1 + 64) = v4;
      if ( !winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
      {
        *v2 = 4;
        if ( (unsigned __int8)___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVSnapFlyoutHost__AEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAU_RTL_SRWLOCK__P6AXPEAU1__Z_1_ReleaseSRWLockExclusive__YAX0_ZU__integral_constant__K_00_wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil___wil___experimental_std_____notify_awaiter_Uawaitable__1__resume_foreground_winrt__YA_AEBUDispatcherQueue_System_Windows_3_W4DispatcherQueuePriority_563__Z__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVSnapFlyoutHost__AEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAU_RTL_SRWLOCK__P6AXPEAU1__Z_1_ReleaseSRWLockExclusive__YAX0_ZU__integral_constant__K_00_wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil___wil___experimental_std___experimental_std___Z(v4) )
          return;
      }
      goto LABEL_6;
    case 4:
LABEL_6:
      _await_resume___notify_awaiter_Uawaitable__1__resume_foreground_winrt__YA_AEBUDispatcherQueue_System_Windows_3_W4DispatcherQueuePriority_563__Z__impl_winrt__QEAA_XZ(*(_QWORD *)(a1 + 64));
      v5 = *(__m128i ***)(*(_QWORD *)(a1 + 97) + 48LL);
      for ( i = *v5; i != (__m128i *)v5; i = (__m128i *)i->m128i_i64[0] )
      {
        v7 = (HWINEVENTHOOK)_mm_srli_si128(i[1], 8).m128i_u64[0];
        if ( v7 )
          UnhookWinEvent(v7);
      }
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::release_ref((_QWORD *)(a1 + 16));
      v8 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,TaskViewFrame *,IImmersiveMonitor *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend(
             *(_QWORD *)(a1 + 80),
             (_QWORD *)(a1 + 56));
      *(_QWORD *)(a1 + 48) = v8;
      *v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend(
              v8,
              v9) )
        goto LABEL_12;
      return;
    case 5:
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::release_ref((_QWORD *)(a1 + 16));
LABEL_12:
      *(_QWORD *)(a1 + 80) = a1 - 96;
      winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a1 - 96);
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 96));
      break;
    default:
      __debugbreak();
      break;
  }
}
