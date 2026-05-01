/*
 * XREFs of ?get@?$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAAPEAVPenWorkspaceBrokerTelemetry@@P6AXXZ@Z @ 0x1803F4C74
 * Callers:
 *     ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x1803F188C (--$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z.c)
 * Callees:
 *     atexit @ 0x1802D1A98 (atexit.c)
 *     ??1Completer@?$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ @ 0x1803F24F0 (--1Completer@-$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<PenWorkspaceBrokerTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8)
    && v6 )
  {
    qword_1808CD418 = 0LL;
    dword_1808CD424 = 0;
    v8 = &qword_1808CD410;
    qword_1808CD410 = (__int64)&IamTraceLogging::`vftable';
    v4 = &`PenWorkspaceBrokerTelemetry::Instance'::`2'::wrapper;
    byte_1808CD420 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<PenWorkspaceBrokerTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
