/*
 * XREFs of ?WasAlreadyReportedToTelemetry@DeviceAttached@RawInputProvidersTracing@@MEAA_NJ@Z @ 0x1800D96C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RawInputProvidersTracing::DeviceAttached::WasAlreadyReportedToTelemetry(
        RawInputProvidersTracing::DeviceAttached *this,
        int a2)
{
  bool v2; // zf

  v2 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen == a2;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = a2;
  return v2;
}
