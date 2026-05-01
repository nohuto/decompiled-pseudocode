/*
 * XREFs of ?get@?$static_lazy@VGamingOverlayTelemetry@@@details@wil@@QEAAPEAVGamingOverlayTelemetry@@P6AXXZ@Z @ 0x180298B9C
 * Callers:
 *     ?Provider@GamingOverlayTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180298B7C (-Provider@GamingOverlayTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x18021E528 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<GamingOverlayTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+28h] [rbp-30h]
  __int64 *v8; // [rsp+30h] [rbp-28h] BYREF
  WINBOOL v9; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0LL;
  v9 = 0;
  if ( __std_init_once_begin_initialize(&`GamingOverlayTelemetry::Instance'::`2'::wrapper, 0, &v9, (LPVOID *)&v8) && v9 )
  {
    qword_1808CA650 = 0LL;
    dword_1808CA65C = 0;
    v8 = &qword_1808CA648;
    qword_1808CA648 = (__int64)&ImmersiveIconsLogging::`vftable';
    v6 = &`GamingOverlayTelemetry::Instance'::`2'::wrapper;
    byte_1808CA658 = 0;
    qword_1808CA660 = (__int64)&`GamingOverlayTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v8;
}
