/*
 * XREFs of ?get@?$static_lazy@VAIXTelemetryLogging@@@details@wil@@QEAAPEAVAIXTelemetryLogging@@P6AXXZ@Z @ 0x180592D4C
 * Callers:
 *     ??$IsC2DAllowedByPolicy@_N_NAEA_NAEB_NAEB_N@AIXTelemetry@@SAX$$QEA_N0AEA_NAEB_N2@Z @ 0x18058E374 (--$IsC2DAllowedByPolicy@_N_NAEA_NAEB_NAEB_N@AIXTelemetry@@SAX$$QEA_N0AEA_NAEB_N2@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x18021E528 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<AIXTelemetryLogging>::get(__int64 a1, void (__cdecl *a2)())
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
  if ( __std_init_once_begin_initialize(&`AIXTelemetryLogging::Instance'::`2'::wrapper, 0, &v8, (LPVOID *)&v10) && v8 )
  {
    qword_1808CC4A8 = 0LL;
    dword_1808CC4B4 = 0;
    v10 = &qword_1808CC4A0;
    qword_1808CC4A0 = (__int64)&ShellScreenClippingLogging::`vftable';
    v6 = &`AIXTelemetryLogging::Instance'::`2'::wrapper;
    byte_1808CC4B0 = 0;
    qword_1808CC4B8 = (__int64)&`AIXTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v10;
}
