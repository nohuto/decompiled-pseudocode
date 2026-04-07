/*
 * XREFs of ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x180110558
 * Callers:
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x1801100F0 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x1801103F8 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 * Callees:
 *     atexit @ 0x18005CBB8 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x18005D66A (InitOnceBeginInitialize_0.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x18009A44C (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ @ 0x180110160 (--1Completer@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::static_lazy<ScalingCompatLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( InitOnceBeginInitialize_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v8, (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`ScalingCompatLogging::Instance'::`2'::wrapper;
    v9 = qword_18014BE50;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_18014BE50);
    qword_18014BE50[0] = &ScalingCompatLogging::`vftable';
    qword_18014BE68 = (__int64)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<ScalingCompatLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}
