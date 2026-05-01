/*
 * XREFs of ?WatchCurrentThread@TouchEdgeGestureTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1800D1428
 * Callers:
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18058D2A8 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180594CA0 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x180595230 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z @ 0x1800D13E0 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@PEBD@Z.c)
 *     ?get@?$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@P6AXXZ@Z @ 0x1800D1468 (-get@-$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@.c)
 */

wil::ActivityThreadWatcher *__fastcall TouchEdgeGestureTelemetry::WatchCurrentThread(
        wil::ActivityThreadWatcher *a1,
        const char *a2)
{
  struct wil::details::IFailureCallback *v4; // rax

  v4 = (struct wil::details::IFailureCallback *)wil::details::static_lazy<TouchEdgeGestureTelemetry>::get(
                                                  a1,
                                                  _lambda_a7362a5569191a78ac5e080098becae6_::_lambda_invoker_cdecl_);
  wil::ActivityThreadWatcher::ActivityThreadWatcher(a1, v4, a2);
  return a1;
}
