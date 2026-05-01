/*
 * XREFs of ?get@?$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAAPEAVTaskbarPinningTelemetry@@P6AXXZ@Z @ 0x180698F44
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180691760 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 *     ??1Completer@?$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAA@XZ @ 0x1804838F0 (--1Completer@-$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAA@XZ.c)
 */

__int64 *__fastcall wil::details::static_lazy<TaskbarPinningTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h]
  __int64 *v6; // [rsp+30h] [rbp-28h] BYREF
  WINBOOL v7; // [rsp+38h] [rbp-20h] BYREF

  v6 = 0LL;
  v7 = 0;
  if ( __std_init_once_begin_initialize(&`TaskbarPinningTelemetry::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v6) && v7 )
  {
    qword_1808CE258 = 0LL;
    dword_1808CE264 = 0;
    v6 = &qword_1808CE250;
    qword_1808CE250 = (__int64)&ImmersiveIconsLogging::`vftable';
    v4 = &`TaskbarPinningTelemetry::Instance'::`2'::wrapper;
    byte_1808CE260 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<TaskbarPinningTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v6;
}
