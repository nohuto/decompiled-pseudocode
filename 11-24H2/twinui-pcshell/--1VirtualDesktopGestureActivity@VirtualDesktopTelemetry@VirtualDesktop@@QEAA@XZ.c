/*
 * XREFs of ??1VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180152128
 * Callers:
 *     ??1VirtualDesktopGestureHandler@@UEAA@XZ @ 0x18015208C (--1VirtualDesktopGestureHandler@@UEAA@XZ.c)
 *     ??4VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV012@@Z @ 0x18055CD70 (--4VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV012@@.c)
 *     ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180563100 (-StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?StartTouchSwipe@VirtualDesktopGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x1805631F0 (-StartTouchSwipe@VirtualDesktopGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 *     _VirtualDesktopGestureHandler::StartTouchSwipe_::_1_::dtor$0 @ 0x1806F2E77 (_VirtualDesktopGestureHandler--StartTouchSwipe_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180152180 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::~VirtualDesktopGestureActivity(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity *this)
{
  *(_QWORD *)this = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(this);
}
