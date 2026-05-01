/*
 * XREFs of ??_EGamingOverlayTelemetry@@UEAAPEAXI@Z @ 0x180326D40
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_576b8a055e1eddaf8c0f48bcebe2427e_@@CA@XZ @ 0x18068A0F0 (-_lambda_invoker_cdecl_@_lambda_576b8a055e1eddaf8c0f48bcebe2427e_@@CA@XZ.c)
 * Callees:
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1802198EC (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 */

GamingOverlayTelemetry *__fastcall GamingOverlayTelemetry::`vector deleting destructor'(
        GamingOverlayTelemetry *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
