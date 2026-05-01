/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18021D1B0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_InitCoro$2 @ 0x18021D0FC (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_InitCo.c)
 * Callees:
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVXamlLauncher@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x180059E08 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVXamlLauncher@@UDismis.c)
 *     ??$await_transform@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCStartExperienceManager@@@experimental@std@@QEAA?A_P$$QEAU?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@Z @ 0x18006D86C (--$await_transform@U-$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@Uguid@2@W4DashboardInvokeType@Dashboard@5UI@WindowsUdk@2@URect@Foundation@72@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@Uguid@2@W4DashboardInvokeType@Dashboard@5UI@WindowsUdk@2@URect@Foundation@72@@experimental@std@@@experimental@std@@@Z @ 0x1800715E8 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@i.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x180072F74 (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@V?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x18018F814 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashb_ea_18018F814.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ?release_ref@?$com_ptr@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BCF98 (-release_ref@-$com_ptr@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ?TrySetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ @ 0x18021DF18 (-TrySetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AU-.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@@experimental@std@@@Z @ 0x18022F954 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_18022F954.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180248A54 (-await_ready@-$notify_awaiter@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Manage.c)
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF128 (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@?$notify_awaiter@AEAU?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF640 (-await_resume@-$notify_awaiter@AEAU-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@Q.c)
 *     ??1?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ @ 0x1802E79A0 (--1-$notify_awaiter@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ.c)
 *     ??$WindowTabHostThumbnailQueued@_N@WindowTabHostTelemetry@@SAX$$QEA_N@Z @ 0x1802E8178 (--$WindowTabHostThumbnailQueued@_N@WindowTabHostTelemetry@@SAX$$QEA_N@Z.c)
 *     ?ShouldTrySetThumbnail@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1802E86E4 (-ShouldTrySetThumbnail@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     ?await_ready@?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA_NXZ @ 0x1802E8734 (-await_ready@-$notify_awaiter@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA_.c)
 *     ?await_resume@?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ @ 0x1806389B4 (-await_resume@-$notify_awaiter@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA.c)
 *     ??$WindowTabHostThumbnailQueueChurn@IAEAI@WindowTabHostTelemetry@@SAX$$QEAIAEAI@Z @ 0x18063A7FC (--$WindowTabHostThumbnailQueueChurn@IAEAI@WindowTabHostTelemetry@@SAX$$QEAIAEAI@Z.c)
 *     ??$await_transform@AEBV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@QEAA?A_PAEBV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@3@@Z @ 0x18063A878 (--$await_transform@AEBV-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@@promise_type@-$corouti.c)
 *     ?ShouldKeepSettingThumbnail@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18063C0C0 (-ShouldKeepSettingThumbnail@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync__ResumeCoro_1(
        __int64 *a1)
{
  __int64 v2; // rcx
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  char v7; // bl
  int v8; // ecx
  unsigned int v9; // ecx
  __int64 v10; // r15
  __int64 v11; // rcx
  void *v12; // rbx
  char *v13; // r14
  unsigned int v14; // eax

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_28;
      case 2:
        winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
          *(__int64 *)((char *)a1 + 162),
          a1 + 2);
        *((_BYTE *)a1 + 24) = 0;
        a1[4] = (__int64)(a1 + 3);
        if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
          goto LABEL_6;
        *((_WORD *)a1 + 4) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUDashboardManager_implementation_Shell_Internal_Windows_2_Uguid_2_W4DashboardInvokeType_Dashboard_5UI_WindowsUdk_2_URect_Foundation_72__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUDashboardManager_implementation_Shell_Internal_Windows_2_Uguid_2_W4DashboardInvokeType_Dashboard_5UI_WindowsUdk_2_URect_Foundation_72__experimental_std___experimental_std___Z(
          v2,
          a1);
        return;
      case 4:
LABEL_6:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
        a1[5] = 0LL;
        if ( !winrt::Windows::Internal::Shell::implementation::TabProxyWindow::ShouldTrySetThumbnail(*(winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)((char *)a1 + 162)) )
        {
          *((_BYTE *)a1 + 152) = 0;
          WindowTabHostTelemetry::WindowTabHostThumbnailQueued<bool>();
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref(a1 + 2);
          goto LABEL_27;
        }
        *((_DWORD *)a1 + 12) = 0;
        break;
      case 5:
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref(a1 + 2);
        goto LABEL_28;
      case 6:
        goto LABEL_15;
      case 7:
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 9);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 8));
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref(a1 + 2);
        goto LABEL_28;
      case 8:
        goto LABEL_11;
      case 9:
        winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::~notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>(a1 + 14);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref(a1 + 2);
        goto LABEL_28;
      default:
        __debugbreak();
        return;
    }
    while ( 1 )
    {
      v3 = *(winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)((char *)a1 + 162);
      if ( !winrt::Windows::Internal::Shell::implementation::TabProxyWindow::ShouldKeepSettingThumbnail(v3) )
        break;
      v4 = winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync(v3, a1 + 8);
      v6 = std::experimental::coroutine_traits<winrt::fire_and_forget,CStartExperienceManager *>::promise_type::await_transform<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>>(
             v5,
             (__int64)(a1 + 9),
             v4);
      a1[7] = v6;
      if ( !(unsigned __int8)winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::await_ready(v6) )
      {
        *((_WORD *)a1 + 4) = 6;
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<bool>>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,CopilotHotkeyManager *>::promise_type>(
          v6,
          a1);
        return;
      }
LABEL_15:
      v7 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<bool> &>::await_resume(a1[7]);
      winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 9);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 8));
      v8 = *((_DWORD *)a1 + 12);
      if ( v7 )
      {
        *(__int64 *)((char *)a1 + 44) = (unsigned int)(v8 + *((_DWORD *)a1 + 11));
      }
      else
      {
        v9 = v8 + 1;
        *((_DWORD *)a1 + 12) = v9;
        v10 = *(__int64 *)((char *)a1 + 162);
        if ( v9 >= 3 )
        {
          v13 = (char *)a1 + 44;
          *((_DWORD *)a1 + 11) += v9;
          _Platform_AcquireSRWLockExclusive((PSRWLOCK)(v10 + 168));
          *(_DWORD *)(v10 + 136) = 0;
          ReleaseSRWLockExclusive_0((PSRWLOCK)(v10 + 168));
          goto LABEL_24;
        }
        _Platform_AcquireSRWLockExclusive((PSRWLOCK)(v10 + 168));
        *(_DWORD *)(v10 + 136) = 2;
        ReleaseSRWLockExclusive_0((PSRWLOCK)(v10 + 168));
        if ( *((_DWORD *)a1 + 12) > 1u )
        {
          v12 = (void *)std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type::await_transform<std::chrono::duration<__int64,std::ratio<1,1000>> const &>(
                          v11,
                          a1 + 14);
          a1[13] = (__int64)v12;
          if ( !(unsigned __int8)winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::await_ready(v12) )
          {
            *((_WORD *)a1 + 4) = 8;
            winrt::impl::notify_awaiter<std::chrono::duration<int,std::ratio<60,1>>>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type>(v12);
            return;
          }
LABEL_11:
          winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::await_resume(a1[13]);
          winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::~notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>(a1 + 14);
        }
      }
      ++*((_DWORD *)a1 + 10);
    }
    v13 = (char *)a1 + 44;
LABEL_24:
    *((_BYTE *)a1 + 153) = 1;
    WindowTabHostTelemetry::WindowTabHostThumbnailQueued<bool>();
    v14 = *((_DWORD *)a1 + 10);
    if ( v14 > 1 )
    {
      *((_DWORD *)a1 + 39) = v14 - 1;
      WindowTabHostTelemetry::WindowTabHostThumbnailQueueChurn<unsigned int,unsigned int &>((char *)a1 + 156, v13);
    }
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref(a1 + 2);
LABEL_27:
    std::experimental::coroutine_traits<winrt::fire_and_forget,XamlLauncher *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::final_suspend(
      (__int64)a1,
      (_BYTE *)a1 + 160);
LABEL_28:
    if ( *((_WORD *)a1 + 5) )
      operator delete(a1);
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
