/*
 * XREFs of ?Provider@UDwmTrace@@SAPEBU_tlgProvider_t@@XZ @ 0x1800153C0
 * Callers:
 *     ??$TopLevelWindow3D_StartAnimation@AEAW4WindowAnimationType@CTopLevelWindow3D@@@UDwmTrace@@SAXAEAW4WindowAnimationType@CTopLevelWindow3D@@@Z @ 0x180015284 (--$TopLevelWindow3D_StartAnimation@AEAW4WindowAnimationType@CTopLevelWindow3D@@@UDwmTrace@@SAXAE.c)
 *     ?TopLevelWindow3D_StartAnimationCompleted@UDwmTrace@@SAXXZ @ 0x18001549C (-TopLevelWindow3D_StartAnimationCompleted@UDwmTrace@@SAXXZ.c)
 *     ?WindowMoveResizeCrossfadeAnimationScheduled@UDwmTrace@@SAXXZ @ 0x18004A950 (-WindowMoveResizeCrossfadeAnimationScheduled@UDwmTrace@@SAXXZ.c)
 *     ?WindowMoveResizeCrossfadeBeginPostTransition@UDwmTrace@@SAXXZ @ 0x18004C79C (-WindowMoveResizeCrossfadeBeginPostTransition@UDwmTrace@@SAXXZ.c)
 *     ?WindowMoveResizeCrossfadeAnimationTeardownComplete@UDwmTrace@@SAXXZ @ 0x18007D704 (-WindowMoveResizeCrossfadeAnimationTeardownComplete@UDwmTrace@@SAXXZ.c)
 *     ?WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ @ 0x18008BEAC (-WindowSnapBeginPreTransition@UDwmTrace@@SAXXZ.c)
 *     ?WindowMoveResizeCrossfadeCaptureVisualsComplete@UDwmTrace@@SAXXZ @ 0x18008BEFC (-WindowMoveResizeCrossfadeCaptureVisualsComplete@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationBeginSchedulingFirstAnimation@UDwmTrace@@SAXXZ @ 0x180097A8C (-ResponsiveRotationBeginSchedulingFirstAnimation@UDwmTrace@@SAXXZ.c)
 *     ?WindowSnapSignalReceived@UDwmTrace@@SAXXZ @ 0x180097ADC (-WindowSnapSignalReceived@UDwmTrace@@SAXXZ.c)
 *     ?UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ @ 0x1800A42AC (-UDwmCreatingVirtualMonitor_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmDisplayIsPhysicalMonitorDevice_@UDwmTrace@@QEAAXXZ @ 0x1800A4300 (-UDwmDisplayIsPhysicalMonitorDevice_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ @ 0x1800A4354 (-UDwmHolographicDeviceDriverDetected_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ @ 0x1800A43A8 (-UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmHolographicOnChanged_@UDwmTrace@@QEAAXXZ @ 0x1800A43FC (-UDwmHolographicOnChanged_@UDwmTrace@@QEAAXXZ.c)
 *     ?UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ @ 0x1800A4450 (-UDwmRemovingVirtualMonitor_@UDwmTrace@@QEAAXXZ.c)
 *     ?ResponsiveRotationAnimationTeardownComplete@UDwmTrace@@SAXXZ @ 0x1800E13E8 (-ResponsiveRotationAnimationTeardownComplete@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationBeginPreTransition@UDwmTrace@@SAXXZ @ 0x1800E1438 (-ResponsiveRotationBeginPreTransition@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationBeginSchedulingSecondAnimation@UDwmTrace@@SAXXZ @ 0x1800E1488 (-ResponsiveRotationBeginSchedulingSecondAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationFinishSchedulingFirstAnimation@UDwmTrace@@SAXXZ @ 0x1800E14D8 (-ResponsiveRotationFinishSchedulingFirstAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationFinishSchedulingHalfAnimation@UDwmTrace@@SAXXZ @ 0x1800E1528 (-ResponsiveRotationFinishSchedulingHalfAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationFinishSchedulingSecondAnimation@UDwmTrace@@SAXXZ @ 0x1800E1578 (-ResponsiveRotationFinishSchedulingSecondAnimation@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationPreRotationVisualsCaptured@UDwmTrace@@SAXXZ @ 0x1800E15C8 (-ResponsiveRotationPreRotationVisualsCaptured@UDwmTrace@@SAXXZ.c)
 *     ?ResponsiveRotationUpdateAngle@UDwmTrace@@SAXXZ @ 0x1800E1618 (-ResponsiveRotationUpdateAngle@UDwmTrace@@SAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x1800153E0 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall UDwmTrace::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<UDwmTrace>::get(
                                             a1,
                                             _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_)
                                         + 8);
}
