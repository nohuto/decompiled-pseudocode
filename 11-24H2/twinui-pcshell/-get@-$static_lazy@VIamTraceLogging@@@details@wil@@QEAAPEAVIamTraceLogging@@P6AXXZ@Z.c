/*
 * XREFs of ?get@?$static_lazy@VIamTraceLogging@@@details@wil@@QEAAPEAVIamTraceLogging@@P6AXXZ@Z @ 0x1802EDD24
 * Callers:
 *     _lambda_2cec81e5a08c64ba5d30bf166a2a5e31_::operator() @ 0x1802E38D0 (_lambda_2cec81e5a08c64ba5d30bf166a2a5e31_--operator().c)
 * Callees:
 *     atexit @ 0x1802D1A98 (atexit.c)
 *     ??1Completer@?$static_lazy@VIamTraceLogging@@@details@wil@@QEAA@XZ @ 0x1802E378C (--1Completer@-$static_lazy@VIamTraceLogging@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<IamTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`IamTraceLogging::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    qword_1808C8EA0 = 0LL;
    dword_1808C8EAC = 0;
    v8 = &qword_1808C8E98;
    qword_1808C8E98 = (__int64)&IamTraceLogging::`vftable';
    v4 = &`IamTraceLogging::Instance'::`2'::wrapper;
    byte_1808C8EA8 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<IamTraceLogging>::Completer::~Completer((__int64)&v4);
  }
  return v8;
}
