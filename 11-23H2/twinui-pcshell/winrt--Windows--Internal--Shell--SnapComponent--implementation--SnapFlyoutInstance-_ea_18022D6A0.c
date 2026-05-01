/*
 * XREFs of winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync$_ResumeCoro$1 @ 0x18022D6A0
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync$_InitCoro$2 @ 0x18022D580 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance--TryGetMaximi.c)
 * Callees:
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x1801FB824 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDa.c)
 *     ?TryGetMaximizeButtonRectFromAppWindow@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z @ 0x180224F54 (-TryGetMaximizeButtonRectFromAppWindow@SnapLayoutHelpers@@YA_NPEAUHWND__@@PEAUCRect@Geometry@@@Z.c)
 *     ??$await_transform@Uawaitable@?1??resume_background@winrt@@YA@XZ@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAUawaitable@?1??resume_background@2@YA@XZ@@Z @ 0x180225528 (--$await_transform@Uawaitable@-1--resume_background@winrt@@YA@XZ@@-$promise_base@Up_ea_180225528.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHWND__@@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180225988 (--1-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@URect@Foundation@Windows@w.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180228D8C (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Founda_ea_180228D8C.c)
 *     ??$SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect@AEBURect@Foundation@Windows@winrt@@@SnapFlyoutTelemetry@@SAXAEBURect@Foundation@Windows@winrt@@@Z @ 0x18022C0B0 (--$SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect@AEBURect@Foundation@Windows@winrt@@@Snap.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHWND__@@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18022D984 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_18022D984.c)
 */

// Hidden C++ exception states: #try_helpers=2
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetMaximizeButtonRectFromTitleBarInfoAsync__ResumeCoro_1(
        __int64 a1)
{
  _WORD *v2; // r14
  __int64 v3; // rcx
  int *v4; // rbx
  struct Geometry::CRect *v5; // r8
  unsigned __int64 v6; // rdx
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  _QWORD *v10; // rax

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
    case 5:
      goto LABEL_8;
    case 2:
      *(_BYTE *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 112) = ___await_transform_Uawaitable__1__resume_background_winrt__YA_XZ____promise_base_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt__PEAUDashboardManager_implementation_Shell_Internal_34__experimental_std__UIAsyncAction_Foundation_Windows_winrt__X_impl_winrt__QEAA_A_P__QEAUawaitable__1__resume_background_2_YA_XZ__Z(
                                a1 - 112,
                                (_QWORD *)(a1 + 24),
                                a1 + 16);
      if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
        goto LABEL_4;
      *v2 = 4;
      ___await_suspend_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt__PEAUDashboardManager_implementation_Shell_Internal_34__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt__PEAUDashboardManager_implementation_Shell_Internal_34__experimental_std___experimental_std___Z(
        v3,
        (void *)a1);
      break;
    case 4:
LABEL_4:
      _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
      v4 = (int *)(a1 + 32);
      *(_DWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 36) = 0LL;
      *(_DWORD *)(a1 + 44) = 0;
      if ( SnapLayoutHelpers::TryGetMaximizeButtonRectFromAppWindow(
             *(HWND *)(a1 + 129),
             (struct tagRECT *)(a1 + 32),
             v5) )
      {
        v7 = (float)(*(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 36));
        v8 = (float)(*(_DWORD *)(a1 + 40) - *v4);
        v9 = (float)*(int *)(a1 + 36);
        *(float *)(a1 + 48) = (float)*v4;
        *(float *)(a1 + 52) = v9;
        *(float *)(a1 + 56) = v8;
        *(float *)(a1 + 60) = v7;
        SnapFlyoutTelemetry::SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect<winrt::Windows::Foundation::Rect const &>(
          (struct winrt::Windows::Foundation::Rect *)(a1 + 48),
          v6);
        *(_OWORD *)(a1 - 16) = *(_OWORD *)(a1 + 48);
      }
      else
      {
        *(_OWORD *)(a1 + 64) = 0LL;
        *(_OWORD *)(a1 - 16) = 0LL;
      }
      v10 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend(
              a1 - 112,
              (_QWORD *)(a1 + 104));
      *(_QWORD *)(a1 + 96) = v10;
      *v2 = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,void>::final_suspend_awaiter::await_suspend(v10) )
      {
LABEL_8:
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,void>(a1 - 112);
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112));
      }
      break;
    default:
      __debugbreak();
      break;
  }
}
