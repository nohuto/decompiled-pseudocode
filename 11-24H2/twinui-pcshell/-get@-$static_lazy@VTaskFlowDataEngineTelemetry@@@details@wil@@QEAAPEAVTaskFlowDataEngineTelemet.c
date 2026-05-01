/*
 * XREFs of ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x1802AB248
 * Callers:
 *     ?Provider@TaskFlowDataEngineTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802AB228 (-Provider@TaskFlowDataEngineTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _lambda_4637121c97463dde84d1e4eb150ea79f_::operator() @ 0x1803FC79C (_lambda_4637121c97463dde84d1e4eb150ea79f_--operator().c)
 *     _lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator() @ 0x1803FCD30 (_lambda_c6edb9ea9ae2a095d75d0a6fb7353035_--operator().c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x18021E528 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  WINBOOL v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+44h] [rbp+Ch]
  __int64 *v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = HIDWORD(a1);
  v10 = 0LL;
  v8 = 0;
  if ( __std_init_once_begin_initialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &v8, (LPVOID *)&v10)
    && v8 )
  {
    qword_1808CB468 = 0LL;
    dword_1808CB474 = 0;
    v10 = &qword_1808CB460;
    qword_1808CB460 = (__int64)&ShellScreenClippingLogging::`vftable';
    v6 = &`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper;
    byte_1808CB470 = 0;
    qword_1808CB478 = (__int64)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v10;
}
