/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage$_ResumeCoro$1 @ 0x180256590
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage$_InitCoro$2 @ 0x1802564CC (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--ReportMeetAndChatUsage$_InitCo.c)
 * Callees:
 *     ??$await_transform@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCStartExperienceManager@@@experimental@std@@QEAA?A_P$$QEAU?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@Z @ 0x18006D86C (--$await_transform@U-$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180248A54 (-await_ready@-$notify_awaiter@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Manage.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF128 (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@Windows@2@W4MeetAndChatUsageType@5672@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@Windows@2@W4MeetAndChatUsageType@5672@@experimental@std@@@experimental@std@@@Z @ 0x1806C6F88 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVMeetAndChatIris@im.c)
 *     ?ReportActionAsync@?$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider@Iris@Services@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUIrisCreative@Iris@Services@WindowsUdk@3@AEBW4IrisAction@5673@@Z @ 0x1806C8494 (-ReportActionAsync@-$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider.c)
 *     ?ReportImpressionAsync@?$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider@Iris@Services@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUIrisCreative@Iris@Services@WindowsUdk@3@@Z @ 0x1806C84FC (-ReportImpressionAsync@-$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProv.c)
 *     ?await_resume@?$notify_awaiter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1806C88E0 (-await_resume@-$notify_awaiter@U-$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foun.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage__ResumeCoro_1(
        __int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int16 v7; // ax
  __int64 v8; // rax
  __int64 v9; // rcx
  winrt::Windows::Foundation::IUnknown *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_19;
      case 2:
        v1 = *(_QWORD *)(a1 + 122);
        v2 = v1 + 32;
        if ( !*(_QWORD *)(v1 + 32) || !*(_DWORD *)(v1 + 48) )
          goto LABEL_18;
        v3 = *(_DWORD *)(a1 + 130);
        if ( v3 )
        {
          if ( v3 != 1 )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x19B,
              (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatiris.cpp",
              (const char *)1);
          *(_DWORD *)(a1 + 72) = 0;
          v8 = winrt::impl::consume_WindowsUdk_Services_Iris_IIrisServiceProvider<winrt::WindowsUdk::Services::Iris::IIrisServiceProvider>::ReportActionAsync(
                 v2,
                 a1 + 80,
                 *(_QWORD *)(v1 + 40));
          v6 = std::experimental::coroutine_traits<winrt::fire_and_forget,CStartExperienceManager *>::promise_type::await_transform<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>>(
                 v9,
                 a1 + 88,
                 v8);
          *(_QWORD *)(a1 + 64) = v6;
          if ( !winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::await_ready() )
          {
            v7 = 6;
            goto LABEL_8;
          }
LABEL_16:
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>>::await_resume(*(_QWORD *)(a1 + 64));
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 88);
          v10 = (winrt::Windows::Foundation::IUnknown *)(a1 + 80);
        }
        else
        {
          v4 = winrt::impl::consume_WindowsUdk_Services_Iris_IIrisServiceProvider<winrt::WindowsUdk::Services::Iris::IIrisServiceProvider>::ReportImpressionAsync(
                 v2,
                 a1 + 24,
                 *(_QWORD *)(v1 + 40));
          v6 = std::experimental::coroutine_traits<winrt::fire_and_forget,CStartExperienceManager *>::promise_type::await_transform<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>>(
                 v5,
                 a1 + 32,
                 v4);
          *(_QWORD *)(a1 + 16) = v6;
          if ( !winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::await_ready() )
          {
            v7 = 4;
LABEL_8:
            *(_WORD *)(a1 + 8) = v7;
            winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,enum winrt::Windows::Internal::Shell::MeetAndChatUsageType>::promise_type>(
              v6,
              a1);
            return;
          }
LABEL_14:
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>>::await_resume(*(_QWORD *)(a1 + 16));
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 32);
          v10 = (winrt::Windows::Foundation::IUnknown *)(a1 + 24);
        }
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(v10);
LABEL_18:
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
          a1,
          a1 + 120);
LABEL_19:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1);
        break;
      case 4:
        goto LABEL_14;
      case 5:
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 32);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 24));
        goto LABEL_19;
      case 6:
        goto LABEL_16;
      case 7:
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 88);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 80));
        goto LABEL_19;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
