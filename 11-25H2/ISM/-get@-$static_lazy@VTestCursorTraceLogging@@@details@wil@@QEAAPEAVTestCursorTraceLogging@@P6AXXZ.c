/*
 * XREFs of ?get@?$static_lazy@VTestCursorTraceLogging@@@details@wil@@QEAAPEAVTestCursorTraceLogging@@P6AXXZ@Z @ 0x1800F9D98
 * Callers:
 *     ?Provider@TestCursorTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800F8E2C (-Provider@TestCursorTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ @ 0x180098D6C (--1Completer@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18009CD84 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<TestCursorTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`TestCursorTraceLogging::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    qword_180247868 = 0LL;
    dword_180247874 = 0;
    v8 = &qword_180247860;
    qword_180247860 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    v4 = &`TestCursorTraceLogging::Instance'::`2'::wrapper;
    byte_180247870 = 0;
    qword_180247878 = (__int64)&`TestCursorTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::Completer::~Completer(&v4);
  }
  return v8;
}
