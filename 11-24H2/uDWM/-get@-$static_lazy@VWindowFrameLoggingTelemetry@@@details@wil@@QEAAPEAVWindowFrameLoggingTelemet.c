/*
 * XREFs of ?get@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemetry@@P6AXXZ@Z @ 0x1800C9D18
 * Callers:
 *     ?FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x1800C9CA0 (-FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     atexit @ 0x18009B974 (atexit.c)
 *     ??1Completer@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C9C34 (--1Completer@-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<WindowFrameLoggingTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( InitOnceBeginInitialize(&`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    qword_180129D98 = 0LL;
    dword_180129DA4 = 0;
    v8 = &qword_180129D90;
    qword_180129D90 = (__int64)&WindowFrameLogging::`vftable';
    v4 = &`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper;
    byte_180129DA0 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<WindowFrameLoggingTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
