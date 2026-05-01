/*
 * XREFs of ?get@?$static_lazy@VToastCenterLogging@@@details@wil@@QEAAPEAVToastCenterLogging@@P6AXXZ@Z @ 0x1800B5CA8
 * Callers:
 *     ?Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B5C88 (-Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180083248 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<ToastCenterLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]
  LPVOID v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = HIDWORD(a1);
  v7 = 0LL;
  v5 = 0;
  if ( __std_init_once_begin_initialize(&`ToastCenterLogging::Instance'::`2'::wrapper, 0, &v5, &v7) && v5 )
  {
    qword_1808CD0D0 = 0LL;
    dword_1808CD0DC = 0;
    v7 = &qword_1808CD0C8;
    qword_1808CD0C8 = &ShellScreenClippingLogging::`vftable';
    byte_1808CD0D8 = 0;
    qword_1808CD0E0 = (struct _tlgProvider_t *)&`ToastCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808CD0C8, qword_1808CD0E0, v4);
    InitOnceComplete(&`ToastCenterLogging::Instance'::`2'::wrapper, 0, &qword_1808CD0C8);
  }
  return v7;
}
