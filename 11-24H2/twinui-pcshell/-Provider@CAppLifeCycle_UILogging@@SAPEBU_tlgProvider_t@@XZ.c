/*
 * XREFs of ?Provider@CAppLifeCycle_UILogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1803A9BF0
 * Callers:
 *     ??1Completer@?$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ @ 0x1803A8AA0 (--1Completer@-$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ.c)
 *     ?AppLaunched_@AppLaunchTelemetry@PerfTrack@@QEAAXW4Location@2@PEBG@Z @ 0x1803A90F4 (-AppLaunched_@AppLaunchTelemetry@PerfTrack@@QEAAXW4Location@2@PEBG@Z.c)
 *     ?AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1@Z @ 0x1804C713C (-AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1.c)
 * Callees:
 *     ?get@?$static_lazy@VCAppLifeCycle_UILogging@@@details@wil@@QEAAPEAVCAppLifeCycle_UILogging@@P6AXXZ@Z @ 0x1803AA148 (-get@-$static_lazy@VCAppLifeCycle_UILogging@@@details@wil@@QEAAPEAVCAppLifeCycle_UILogging@@P6AX.c)
 */

const struct _tlgProvider_t *__fastcall CAppLifeCycle_UILogging::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<CAppLifeCycle_UILogging>::get(
                                             a1,
                                             _lambda_692b62e119e69287558415adb7754127_::_lambda_invoker_cdecl_)
                                         + 8);
}
