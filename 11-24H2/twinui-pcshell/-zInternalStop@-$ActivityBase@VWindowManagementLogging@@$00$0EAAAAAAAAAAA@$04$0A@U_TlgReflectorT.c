/*
 * XREFs of ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801200AC
 * Callers:
 *     ?Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x18011FB08 (-Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 *     ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18011FD88 (-Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?StopActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@MEAAXXZ @ 0x180328A40 (-StopActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@MEAAXXZ @ 0x180328C70 (-StopActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@MEAAXXZ @ 0x1804B08A0 (-StopActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ShowAltTab@MultitaskingViewTelemetry@@MEAAXXZ @ 0x1804B0AD0 (-StopActivity@ShowAltTab@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@MEAAXXZ @ 0x1804B2390 (-StopActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@MEAAXXZ @ 0x1804ED830 (-StopActivity@ExitCompactOverlayModeForView@OverlayModeTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TMChangeHandler@ShellPositionerTelemetry@@MEAAXXZ @ 0x1804EDEE0 (-StopActivity@TMChangeHandler@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@AppToAppSwitch@TabletModeTelemetry@@MEAAXXZ @ 0x18051E8B0 (-StopActivity@AppToAppSwitch@TabletModeTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@WindowArrangementView_Show@TabletModeTelemetry@@MEAAXXZ @ 0x180522C40 (-StopActivity@WindowArrangementView_Show@TabletModeTelemetry@@MEAAXXZ.c)
 *     ?Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18052D784 (-Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?StopActivity@TMAppArrange@TabletModeTelemetry@@MEAAXXZ @ 0x18052D9E0 (-StopActivity@TMAppArrange@TabletModeTelemetry@@MEAAXXZ.c)
 *     ?Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z @ 0x180530540 (-Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z.c)
 *     ?StopActivity@TMAppResize@TabletModeTelemetry@@MEAAXXZ @ 0x1805307A0 (-StopActivity@TMAppResize@TabletModeTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnSnappingCancelled@CSnapComponentTelemetry@@MEAAXXZ @ 0x1805A2390 (-StopActivity@OnSnappingCancelled@CSnapComponentTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801200F0 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  **(_DWORD **)(a1 + 272) = 2;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
