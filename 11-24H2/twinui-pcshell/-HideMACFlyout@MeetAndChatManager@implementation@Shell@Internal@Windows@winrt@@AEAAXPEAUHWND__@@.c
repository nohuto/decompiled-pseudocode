/*
 * XREFs of ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1805F4850
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_a9532b1fa26d741b99fb0a1f5016c730___::Invoke @ 0x1805F52C0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1805F52C0.c)
 *     ?RegisterFlyoutWindow@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@56@AEBUWindowId@WindowManagement@ApplicationModel@456@AEBUhstring@6@@Z @ 0x1805F59C8 (-RegisterFlyoutWindow@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AUIIn.c)
 *     ?ToggleFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805F6F30 (-ToggleFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4L.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$get_weak@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@?$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@56789@UITapInvokeSettingTester@56789@@impl@winrt@@IEAA?AU?$weak_ref@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@2@XZ @ 0x1800D3220 (--$get_weak@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@-$root_implements@UTouchKey.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@AEBU?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@3@@Z @ 0x18023C320 (-Completed@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Start.c)
 *     ??0CorrelationVector@@QEAA@XZ @ 0x1802BE4B4 (--0CorrelationVector@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAA@XZ @ 0x1802CE874 (--1-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$ViewType@I@ShowFlyout@MeetAndChatTelemetry@@QEAAX$$QEAI@Z @ 0x1805F15BC (--$ViewType@I@ShowFlyout@MeetAndChatTelemetry@@QEAAX$$QEAI@Z.c)
 *     winrt::impl::make_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d___ @ 0x1805F1DD8 (winrt--impl--make_delegate_winrt--Windows--Foundation--AsyncActionCompletedHandler__lambda_f792d.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1805F2818 (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_Tl_ea_1805F2818.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1805F29B4 (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_Tl_ea_1805F29B4.c)
 *     _lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_ @ 0x1805F2C08 (_lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_--__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_.c)
 *     ??1HideFlyout@MeetAndChatTelemetry@@QEAA@XZ @ 0x1805F2E50 (--1HideFlyout@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805F3C08 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 *     ?StartActivity@HideFlyout@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z @ 0x1805F6260 (-StartActivity@HideFlyout@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        HWND a2)
{
  PVOID Ptr; // rbx
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v8; // [rsp+28h] [rbp-D8h] BYREF
  void *v9; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-C8h] BYREF
  RTL_SRWLOCK v11; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v12; // [rsp+48h] [rbp-B8h]
  __int64 *v13; // [rsp+50h] [rbp-B0h]
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  void **v15; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v16[42]; // [rsp+1B0h] [rbp+B0h] BYREF

  CorrelationVector::CorrelationVector((CorrelationVector *)&v9);
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"HideFlyout");
  v16[0] = &MeetAndChatTelemetry::HideFlyout::`vftable';
  MeetAndChatTelemetry::HideFlyout::StartActivity(
    (MeetAndChatTelemetry::HideFlyout *)v16,
    (const struct CorrelationVector *)&v9);
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView((__int64)this, &v11);
  Ptr = v11.Ptr;
  LODWORD(v7) = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)v11.Ptr + 24LL))(v11.Ptr);
  MeetAndChatTelemetry::ShowFlyout::ViewType<unsigned int>((__int64)v16, (int *)&v7);
  v5 = (__int64 *)(*(__int64 (__fastcall **)(PVOID, _BYTE *, HWND))(*(_QWORD *)Ptr + 16LL))(Ptr, v10, a2);
  winrt::impl::root_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::get_weak<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>(
    (__int64)this + 48,
    &v7);
  v6 = v7;
  v7 = 0LL;
  v14 = v6;
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v15,
    (__int64)v16);
  v15 = &MeetAndChatTelemetry::HideFlyout::`vftable';
  v13 = &v14;
  winrt::impl::make_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d___(
    &v8,
    &v14);
  lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_(&v14);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::Completed(
    v5,
    &v8);
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v10);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  MeetAndChatTelemetry::HideFlyout::~HideFlyout((MeetAndChatTelemetry::HideFlyout *)v16);
  std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(&v9);
}
