/*
 * XREFs of ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x180110034
 * Callers:
 *     ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x1801102CC (-GetLegacyPhoneScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z.c)
 *     ?_GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x1801104C8 (-_GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 * Callees:
 *     atexit @ 0x18005CBB8 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x18005D66A (InitOnceBeginInitialize_0.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x18009A44C (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x1801100F0 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     ?IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z @ 0x180110354 (-IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x1801103F8 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 */

char __fastcall ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked<enum ScalingCompatTelemetry::AppType &,unsigned int &,unsigned int &>(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  char result; // al
  __int64 v7; // rcx
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  union _RTL_RUN_ONCE *v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  WINBOOL fPending; // [rsp+68h] [rbp+20h] BYREF

  result = ScalingCompatTelemetry::CScalingCompatTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2);
  if ( result )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize_0(
           &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context) )
    {
      if ( fPending )
      {
        v9 = &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper;
        Context = qword_18014BE30;
        wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_18014BE30);
        qword_18014BE30[0] = &ScalingCompatTelemetry::CScalingCompatTelemetry::`vftable';
        atexit(_lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_);
        v10 = 0;
        wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::Completer::~Completer(&v9);
      }
    }
    return ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked_(v7, *a1, *a2, *a3);
  }
  return result;
}
