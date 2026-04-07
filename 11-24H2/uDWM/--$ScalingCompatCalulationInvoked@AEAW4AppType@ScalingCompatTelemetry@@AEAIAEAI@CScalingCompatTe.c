/*
 * XREFs of ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x1800F5564
 * Callers:
 *     ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x180098D78 (-ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18007B788 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x1800F57A8 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 *     ?get@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAAPEAVCScalingCompatTelemetry@ScalingCompatTelemetry@@P6AXXZ@Z @ 0x1800F5878 (-get@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAAPEAVCScali.c)
 */

char __fastcall ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked<enum ScalingCompatTelemetry::AppType &,unsigned int &,unsigned int &>(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  wil::TraceLoggingProvider *v6; // rax
  char result; // al
  __int64 v8; // rcx
  __int64 v9; // rcx

  v6 = (wil::TraceLoggingProvider *)wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::get(
                                      a1,
                                      _lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_);
  result = wil::TraceLoggingProvider::IsEnabled_(v6);
  if ( result )
  {
    wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::get(
      v8,
      _lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_);
    return ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked_(v9, *a1, *a2, *a3);
  }
  return result;
}
