/*
 * XREFs of ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B7880
 * Callers:
 *     ?StartActivity@ProcessView@CSnapComponentTelemetry@@QEAAXXZ @ 0x1800B7748 (-StartActivity@ProcessView@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAAXXZ @ 0x1800EB2E0 (-StartActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@QEAAXXZ @ 0x1800EB464 (-StartActivity@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAAXXZ @ 0x1800ECD64 (-StartActivity@InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXUtagPOINT@@IK@Z @ 0x1800ECDF0 (-StartActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXUtagPOINT@@IK@Z.c)
 *     ?StartActivity@ActivationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x1800ECF98 (-StartActivity@ActivationRequested@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@InitializePosition@ShellPositionerTelemetry@@QEAAXXZ @ 0x1800ED2A8 (-StartActivity@InitializePosition@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EnumSnappedWindows@CSnapComponentTelemetry@@QEAAXXZ @ 0x1800ED334 (-StartActivity@EnumSnappedWindows@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CreateXamlApplication@XamlExplorerHostTelemetry@@QEAAXXZ @ 0x1801B2E70 (-StartActivity@CreateXamlApplication@XamlExplorerHostTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x1802206A8 (-StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@QEAAXXZ @ 0x180288BD0 (-StartActivity@CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1804C679C (-StartActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExternalDragDetected@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1804DD6C8 (-StartActivity@ExternalDragDetected@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAAXXZ @ 0x1804ED6EC (-StartActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x18051DCA4 (-StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x18051DD88 (-StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@.c)
 *     ?StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@I@Z @ 0x18051E2AC (-StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__.c)
 *     ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18051E3D0 (-StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONE.c)
 *     ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18051E510 (-StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rdi

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
  v4 = *(_QWORD *)(a1 + 272);
  if ( *(_DWORD *)WindowManagementLogging::Provider() > 5u )
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  else
    *(_OWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)v4 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
