/*
 * XREFs of ?get@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAAPEAVCScalingCompatTelemetry@ScalingCompatTelemetry@@P6AXXZ@Z @ 0x1800F5878
 * Callers:
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x1800F5564 (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 * Callees:
 *     atexit @ 0x18009B974 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x18009C5BC (InitOnceBeginInitialize_0.c)
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x1800F55C4 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 */

__int64 *__fastcall wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( InitOnceBeginInitialize_0(
         &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
         0,
         &v6,
         (LPVOID *)&v8)
    && v6 )
  {
    qword_180129E60 = 0LL;
    dword_180129E6C = 0;
    v8 = &qword_180129E58;
    qword_180129E58 = (__int64)&WindowFrameLogging::`vftable';
    v4 = &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper;
    byte_180129E68 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
