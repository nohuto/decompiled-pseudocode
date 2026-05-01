/*
 * XREFs of _lambda_0e377e64aae41d271781dea56205f73a_$_ResumeCoro$1::operator() @ 0x1801FE7B0
 * Callers:
 *     _lambda_0e377e64aae41d271781dea56205f73a_$_InitCoro$2::operator() @ 0x1801FE6E8 (_lambda_0e377e64aae41d271781dea56205f73a_$_InitCoro$2--operator().c)
 * Callees:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x180072C04 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienc.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?UpdateAutoForegroundWindowForHotkeys@XamlLauncher@@AEAAXPEAUWindowId@UI@Windows@@@Z @ 0x18019BF1C (-UpdateAutoForegroundWindowForHotkeys@XamlLauncher@@AEAAXPEAUWindowId@UI@Windows@@@Z.c)
 *     ?await_resume@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@XZ @ 0x1801B3360 (-await_resume@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x1801FB824 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDa.c)
 *     std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_0e377e64aae41d271781dea56205f73a__const___enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&_::promise_type::await_transform_winrt::apartment_context_&_ @ 0x1801FB834 (std--experimental--coroutine_traits_winrt--fire_and_forget__lambda_0e377e64aae41d271781dea56205f.c)
 *     std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_c27fb3894833df319de68fad3b02a886__const___::promise_type::final_suspend @ 0x180201824 (std--experimental--coroutine_traits_winrt--fire_and_forget__lambda_c27fb3894833df319de68fad3b02a.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180234F54 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall lambda_0e377e64aae41d271781dea56205f73a___ResumeCoro_1::operator()(__int64 a1)
{
  char v1; // cl
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdi

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
      case 5:
        goto LABEL_11;
      case 2:
        v1 = **(_DWORD **)(a1 + 74) == 1;
        v2 = *(_QWORD *)(a1 + 66);
        if ( v1 == *(_BYTE *)(*(_QWORD *)v2 + 176LL) )
          goto LABEL_10;
        *(_BYTE *)(*(_QWORD *)v2 + 176LL) = v1;
        *(_BYTE *)(a1 + 16) = 0;
        *(_QWORD *)(a1 + 24) = a1 + 16;
        if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
        {
LABEL_6:
          _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
          v5 = std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_0e377e64aae41d271781dea56205f73a__const___enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const___::promise_type::await_transform_winrt::apartment_context___(
                 v4,
                 a1 + 40,
                 **(_QWORD **)(a1 + 66) + 496LL);
          *(_QWORD *)(a1 + 32) = v5;
          if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
          {
LABEL_9:
            winrt::impl::notify_awaiter<winrt::apartment_context &>::await_resume(*(_QWORD *)(a1 + 32));
            winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 40);
            XamlLauncher::UpdateAutoForegroundWindowForHotkeys(**(XamlLauncher ***)(a1 + 66), 0LL);
LABEL_10:
            std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_c27fb3894833df319de68fad3b02a886__const___::promise_type::final_suspend(
              a1,
              a1 + 64);
LABEL_11:
            if ( *(_WORD *)(a1 + 10) )
              operator delete((void *)a1);
          }
          else
          {
            *(_WORD *)(a1 + 8) = 6;
            winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CJumpViewExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type>(
              v5,
              a1);
          }
        }
        else
        {
          *(_WORD *)(a1 + 8) = 4;
          ___await_suspend_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt__PEAUDashboardManager_implementation_Shell_Internal_34__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt__PEAUDashboardManager_implementation_Shell_Internal_34__experimental_std___experimental_std___Z(
            v3,
            (void *)a1);
        }
        break;
      case 4:
        goto LABEL_6;
      case 6:
        goto LABEL_9;
      case 7:
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 40);
        goto LABEL_11;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits_winrt::fire_and_forget__lambda_c27fb3894833df319de68fad3b02a886__const___::promise_type::unhandled_exception();
  }
}
