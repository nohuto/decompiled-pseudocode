/*
 * XREFs of ?FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x1800432D0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@details@wil@@QEAAPEAVContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@P6AXXZ@Z @ 0x180045150 (-get@-$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@details@.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::FallbackTelemetryCallback(
        __int64 a1,
        const struct wil::FailureInfo *a2)
{
  char v3; // di
  wil::TraceLoggingProvider *v4; // rax

  v3 = a1;
  v4 = (wil::TraceLoggingProvider *)wil::details::static_lazy<ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry>::get(
                                      a1,
                                      _lambda_f445b1b04a1e911cb28a3e84927aae7d_::_lambda_invoker_cdecl_);
  wil::TraceLoggingProvider::OnErrorReported(v4, v3, a2);
}
