/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release$_ResumeCoro$1 @ 0x18027D060
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release$_InitCoro$2 @ 0x18027CF78 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--final_release$_InitCoro$2.c)
 * Callees:
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1800AD848 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashb_ea_1800AD848.c)
 *     ?await_resume@?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1800ADA7C (-await_resume@-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ??$await_transform@UIAsyncAction@Foundation@Windows@winrt@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@QEAA?A_P$$QEAUIAsyncAction@Foundation@Windows@winrt@@@Z @ 0x1801AEBB8 (--$await_transform@UIAsyncAction@Foundation@Windows@winrt@@@promise_type@-$coroutine_traits@Ufir.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1802D2E70 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@U-$IAsyncOperation@UIR.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF128 (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ??1?$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x180725410 (--1-$unique_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U-$default_delete@U.c)
 *     ?ShutdownQueueAsync@?$consume_Windows_System_IDispatcherQueueController@UIDispatcherQueueController@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180725A14 (-ShutdownQueueAsync@-$consume_Windows_System_IDispatcherQueueController@UIDispatcherQueueControl.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release__ResumeCoro_1(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rcx

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
      case 5:
        goto LABEL_9;
      case 2:
        *(_BYTE *)(a1 + 16) = 0;
        *(_QWORD *)(a1 + 24) = a1 + 16;
        if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
          goto LABEL_5;
        *(_WORD *)(a1 + 8) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std___experimental_std___Z(
          v1,
          a1);
        return;
      case 4:
LABEL_5:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
        v2 = winrt::impl::consume_Windows_System_IDispatcherQueueController<winrt::Windows::System::IDispatcherQueueController>::ShutdownQueueAsync(
               *(_QWORD *)(a1 + 82) + 32LL,
               a1 + 40);
        *(_QWORD *)(a1 + 32) = std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type::await_transform<winrt::Windows::Foundation::IAsyncAction>(
                                 v3,
                                 a1 + 48,
                                 v2);
        if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
          goto LABEL_8;
        *(_WORD *)(a1 + 8) = 6;
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type>();
        return;
      case 6:
LABEL_8:
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::await_resume(*(_QWORD *)(a1 + 32));
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 48);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 40));
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
          a1,
          a1 + 80);
        goto LABEL_9;
      case 7:
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 48);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 40));
LABEL_9:
        std::unique_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::~unique_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>(a1 + 82);
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
