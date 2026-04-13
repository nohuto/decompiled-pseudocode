/*
 * XREFs of ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x180035570
 * Callers:
 *     ?FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x1800432D0 (-FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA.c)
 * Callees:
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800396A0 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::TraceLoggingProvider::OnErrorReported(
        wil::TraceLoggingProvider *this,
        char a2,
        const struct wil::FailureInfo *a3)
{
  if ( !a2 && (*((_BYTE *)a3 + 4) & 2) == 0 )
  {
    if ( *((_DWORD *)this + 5) == 1 )
    {
      wil::TraceLoggingProvider::ReportTelemetryFailure(this, a3);
    }
    else if ( *((_DWORD *)this + 5) == 2 )
    {
      wil::TraceLoggingProvider::ReportTraceLoggingFailure(this, a3);
    }
  }
}
