/*
 * XREFs of ?Provider@ControllerProcessorTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x18017CB3C
 * Callers:
 *     ?LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z @ 0x18017C948 (-LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     ?LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z @ 0x18017C998 (-LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x18017CA20 (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelemetry@@P6AXXZ@Z @ 0x18017CBFC (-get@-$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelem.c)
 */

const struct _tlgProvider_t *__fastcall ControllerProcessorTelemetry::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<ControllerProcessorTelemetry>::get(
                                             a1,
                                             _lambda_eeadc07ead9c453f2bc1ae732b24d90f_::_lambda_invoker_cdecl_)
                                         + 8);
}
