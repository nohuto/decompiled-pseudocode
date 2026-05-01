/*
 * XREFs of ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800EB3A0
 * Callers:
 *     ??1ProcessView@CSnapComponentTelemetry@@QEAA@XZ @ 0x1800EA588 (--1ProcessView@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1EnumSnappedWindows@CSnapComponentTelemetry@@QEAA@XZ @ 0x1800EADD0 (--1EnumSnappedWindows@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1XamlLaunchedOnThread@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1800EB128 (--1XamlLaunchedOnThread@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ??1FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAA@XZ @ 0x180220EA4 (--1FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAA@XZ @ 0x180220ED0 (--1OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1InitializePosition@ShellPositionerTelemetry@@QEAA@XZ @ 0x1802CC904 (--1InitializePosition@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1ActivationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x1802CC9B4 (--1ActivationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1CreateXamlApplication@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802CCE2C (--1CreateXamlApplication@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ??1InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAA@XZ @ 0x1802CCFE4 (--1InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802CD068 (--1CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ??1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804C6194 (--1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804DC774 (--1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAA@XZ @ 0x1804EBE24 (--1InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x1804EBE50 (--1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAA@XZ @ 0x180517DBC (--1ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ @ 0x180517DE8 (--1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1ShowWindowAttempted@TabletModeTraceLogging@@QEAA@XZ @ 0x180517E7C (--1ShowWindowAttempted@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ @ 0x180517EA8 (--1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ @ 0x180517ED4 (--1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180026C3C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800EB3D8 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 */

__int64 __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
  return wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
