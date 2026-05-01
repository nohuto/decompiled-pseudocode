/*
 * XREFs of SnapFlyoutHost::ShowSnapBarAsync$_ResumeCoro$1 @ 0x180228170
 * Callers:
 *     SnapFlyoutHost::ShowSnapBarAsync$_InitCoro$2 @ 0x1802280A0 (SnapFlyoutHost--ShowSnapBarAsync$_InitCoro$2.c)
 * Callees:
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1802D2E70 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@U-$IAsyncOperation@UIR.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ?release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x1802E917A (-release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?get_strong@?$implements@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@UIControlWindow@34567@@winrt@@QEAA?AU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1802E9980 (-get_strong@-$implements@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows.c)
 *     ??$SnapBar_ShowAsync@_KAEAW4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@SnapFlyoutTelemetry@@SAX$$QEA_KAEAW4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180678404 (--$SnapBar_ShowAsync@_KAEAW4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@SnapFlyoutTelemetry@@SAX.c)
 *     ?InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@PEAUHMONITOR__@@@Z @ 0x18067AF34 (-InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@P.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall SnapFlyoutHost::ShowSnapBarAsync__ResumeCoro_1(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  HMONITOR v4; // rax

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
      goto LABEL_9;
    case 2:
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 66);
      SnapFlyoutTelemetry::SnapBar_ShowAsync<unsigned __int64,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind &>(
        a1 + 16,
        a1 + 58);
      v2 = *(_DWORD *)(a1 + 58);
      if ( v2 == 3 || !v2 )
        goto LABEL_8;
      winrt::implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::get_strong(
        *(_QWORD *)(a1 + 50),
        a1 + 24);
      *(_BYTE *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 40) = a1 + 32;
      if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
      {
LABEL_7:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
        v4 = MonitorFromWindow(*(HWND *)(a1 + 66), 2u);
        SnapFlyoutHost::InternalShowBar(*(_QWORD *)(a1 + 50), *(_QWORD *)(a1 + 66), *(unsigned int *)(a1 + 58), v4);
        winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 24);
LABEL_8:
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
          a1,
          a1 + 48);
LABEL_9:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1);
      }
      else
      {
        *(_WORD *)(a1 + 8) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std___experimental_std___Z(
          v3,
          a1);
      }
      return;
    case 4:
      goto LABEL_7;
    case 5:
      winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 24);
      goto LABEL_9;
    default:
      __debugbreak();
      return;
  }
}
