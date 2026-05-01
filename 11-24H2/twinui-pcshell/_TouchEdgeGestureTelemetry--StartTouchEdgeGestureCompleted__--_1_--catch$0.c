/*
 * XREFs of _TouchEdgeGestureTelemetry::StartTouchEdgeGestureCompleted__::_1_::catch$0 @ 0x1806F5BCE
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TouchEdgeGestureTelemetry::StartTouchEdgeGestureCompleted__::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 248),
    (void *)0x70,
    (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
    a4);
  return 0LL;
}
