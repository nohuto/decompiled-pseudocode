/*
 * XREFs of ??_GMobilityExperienceLogging@Telemetry@MobilityExperience@@UEAAPEAXI@Z @ 0x18002CF30
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_8df9595ef2b54e9d87dd50e21e23ed4b_@@CA@XZ @ 0x180024050 (-_lambda_invoker_cdecl_@_lambda_8df9595ef2b54e9d87dd50e21e23ed4b_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_41dc59efcb7f6863bfbeda390f55e438_@@CA@XZ @ 0x180040AA0 (-_lambda_invoker_cdecl_@_lambda_41dc59efcb7f6863bfbeda390f55e438_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_f445b1b04a1e911cb28a3e84927aae7d_@@CA@XZ @ 0x180040B30 (-_lambda_invoker_cdecl_@_lambda_f445b1b04a1e911cb28a3e84927aae7d_@@CA@XZ.c)
 * Callees:
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18002AA44 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

MobilityExperience::Telemetry::MobilityExperienceLogging *__fastcall MobilityExperience::Telemetry::MobilityExperienceLogging::`scalar deleting destructor'(
        MobilityExperience::Telemetry::MobilityExperienceLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
