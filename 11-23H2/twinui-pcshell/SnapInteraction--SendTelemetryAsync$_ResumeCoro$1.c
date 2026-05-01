/*
 * XREFs of SnapInteraction::SendTelemetryAsync$_ResumeCoro$1 @ 0x180224510
 * Callers:
 *     SnapInteraction::SendTelemetryAsync$_InitCoro$2 @ 0x18022441C (SnapInteraction--SendTelemetryAsync$_InitCoro$2.c)
 * Callees:
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1802D2E70 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@U-$IAsyncOperation@UIR.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     _SnapInteraction::SendTelemetryAsync_::_5_::_parameters_::__parameters_ @ 0x18066F9A4 (_SnapInteraction--SendTelemetryAsync_--_5_--_parameters_--__parameters_.c)
 *     ?SendTelemetry@SnapInteraction@@YAXAEBU?$com_ptr@UIApplicationView@@@winrt@@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x18066FDE8 (-SendTelemetry@SnapInteraction@@YAXAEBU-$com_ptr@UIApplicationView@@@winrt@@AEBV-$duration@_JU-$.c)
 */

// Hidden C++ exception states: #try_helpers=1
void __fastcall SnapInteraction::SendTelemetryAsync__ResumeCoro_1(__int64 a1)
{
  _WORD *v1; // rbx
  __int64 v2; // rcx
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (_WORD *)a1;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
    case 5:
      goto LABEL_6;
    case 2:
      *(_BYTE *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = a1 + 16;
      if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
        goto LABEL_4;
      v1[4] = 4;
      ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std___experimental_std___Z(
        v2,
        v1);
      break;
    case 4:
LABEL_4:
      _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
      try
      {
        SnapInteraction::SendTelemetry(v1 + 17, v1 + 21);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x26,
          (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
          v3);
        v1 = (_WORD *)a1;
      }
      std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
        v1,
        v1 + 16);
LABEL_6:
      SnapInteraction::SendTelemetryAsync_::_5_::_parameters_::__parameters_(v1 + 17);
      if ( v1[5] )
        operator delete(v1);
      break;
    default:
      __debugbreak();
      break;
  }
}
