/*
 * XREFs of TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1 @ 0x18021FA90
 * Callers:
 *     TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_InitCoro$2 @ 0x18021F9D0 (TouchEdgeGripperHost--NotifyGripperDismissedIfNecessaryAsync$_InitCoro$2.c)
 * Callees:
 *     ??$await_transform@AEAUapartment_context@winrt@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCActionCenterExperienceManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@QEAA?A_PAEAUapartment_context@winrt@@@Z @ 0x180065BEC (--$await_transform@AEAUapartment_context@winrt@@@promise_type@-$coroutine_traits@Ufire_and_forge.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180067A6C (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x180072C04 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienc.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@XZ @ 0x1801B3360 (-await_resume@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180234F54 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ?get_strong@?$implements@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@UIControlWindow@34567@@winrt@@QEAA?AU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1802E9980 (-get_strong@-$implements@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows.c)
 *     ?release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x18064E058 (-release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 *     ?NotifyGripperDismissed@TouchEdgeGestureTelemetry@@SAXXZ @ 0x180656CD4 (-NotifyGripperDismissed@TouchEdgeGestureTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // rcx
  __int64 v3; // rdi

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_9;
      case 2:
        TouchEdgeGestureTelemetry::NotifyGripperDismissed();
        winrt::implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::get_strong(
          *(_QWORD *)(a1 + 58),
          a1 + 16);
        v3 = std::experimental::coroutine_traits<winrt::fire_and_forget,CActionCenterExperienceManager *,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>::promise_type::await_transform<winrt::apartment_context &>(
               v2,
               a1 + 32,
               (__int64 *)(v1 + 88));
        *(_QWORD *)(a1 + 24) = v3;
        if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
          goto LABEL_6;
        *(_WORD *)(a1 + 8) = 4;
        winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CJumpViewExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type>(
          v3,
          a1);
        return;
      case 4:
LABEL_6:
        winrt::impl::notify_awaiter<winrt::apartment_context &>::await_resume(*(_QWORD *)(a1 + 24));
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 32);
        if ( !*(_BYTE *)(a1 + 66) )
          std::_Func_class<void,>::operator()(*(_QWORD *)(a1 + 58) + 168LL);
        winrt::com_ptr<TouchEdgeGripperHost>::release_ref(a1 + 16);
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
          a1,
          a1 + 56);
        goto LABEL_9;
      case 5:
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 32);
        winrt::com_ptr<TouchEdgeGripperHost>::release_ref(a1 + 16);
LABEL_9:
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
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
