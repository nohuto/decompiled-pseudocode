/*
 * XREFs of ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B8CC0
 * Callers:
 *     ?StopActivity@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@MEAAXXZ @ 0x1800B6D30 (-StopActivity@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ @ 0x1800B7940 (-StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW4SnappedWindowOcclusionModel@@22@Z @ 0x1800B8058 (-Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW.c)
 *     ?StopActivity@ActivationRequested@ShellPositionerTelemetry@@MEAAXXZ @ 0x1800E25A0 (-StopActivity@ActivationRequested@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@EnumSnappedWindows@CSnapComponentTelemetry@@MEAAXXZ @ 0x1801D9CC0 (-StopActivity@EnumSnappedWindows@CSnapComponentTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CreateXamlApplication@XamlExplorerHostTelemetry@@MEAAXXZ @ 0x1801EED60 (-StopActivity@CreateXamlApplication@XamlExplorerHostTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@InitializePosition@ShellPositionerTelemetry@@MEAAXXZ @ 0x1801F81C0 (-StopActivity@InitializePosition@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?Stop@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXKKPEAUtagRECT@@0@Z @ 0x180203624 (-Stop@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXKKPEAUtagRECT@@0@Z.c)
 *     ?StopActivity@CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@MEAAXXZ @ 0x1804574A0 (-StopActivity@CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@MEAAXXZ @ 0x1804C6830 (-StopActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ExternalDragDetected@MultitaskingViewTelemetry@@MEAAXXZ @ 0x1804DE0E0 (-StopActivity@ExternalDragDetected@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@MEAAXXZ @ 0x1804EDA60 (-StopActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PresentationRequested@ShellPositionerTelemetry@@MEAAXXZ @ 0x1804EDCA0 (-StopActivity@PresentationRequested@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z @ 0x18051E650 (-Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z.c)
 *     ?StopActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@MEAAXXZ @ 0x18051EAE0 (-StopActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@MEAAXXZ @ 0x18051ED20 (-StopActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@ShowWindowAttempted@TabletModeTraceLogging@@MEAAXXZ @ 0x18051F1A0 (-StopActivity@ShowWindowAttempted@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@TMPControlGained@TabletModeTraceLogging@@MEAAXXZ @ 0x18051F3E0 (-StopActivity@TMPControlGained@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@TMPControlLost@TabletModeTraceLogging@@MEAAXXZ @ 0x18051F620 (-StopActivity@TMPControlLost@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@InitializeSnapFlyoutHost@CSnapComponentTelemetry@@MEAAXXZ @ 0x1805A1F10 (-StopActivity@InitializeSnapFlyoutHost@CSnapComponentTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@MEAAXXZ @ 0x1805A2150 (-StopActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ProcessView@CSnapComponentTelemetry@@MEAAXXZ @ 0x1805A4230 (-StopActivity@ProcessView@CSnapComponentTelemetry@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // rbx

  v1 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v1 )
  {
    v3 = v1 + 33;
    AcquireSRWLockExclusive(v3);
  }
  else
  {
    v3 = 0LL;
  }
  **(_DWORD **)(a1 + 272) = 2;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
