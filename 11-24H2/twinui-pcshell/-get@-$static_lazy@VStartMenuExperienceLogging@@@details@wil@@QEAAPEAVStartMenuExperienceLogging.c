/*
 * XREFs of ?get@?$static_lazy@VStartMenuExperienceLogging@@@details@wil@@QEAAPEAVStartMenuExperienceLogging@@P6AXXZ@Z @ 0x1800B698C
 * Callers:
 *     ?Provider@StartMenuExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B67AC (-Provider@StartMenuExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ @ 0x1800B67CC (-StartActivity@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180083248 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<StartMenuExperienceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]
  LPVOID v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = HIDWORD(a1);
  v7 = 0LL;
  v5 = 0;
  if ( __std_init_once_begin_initialize(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &v5, &v7) && v5 )
  {
    qword_1808CD140 = 0LL;
    dword_1808CD14C = 0;
    v7 = &qword_1808CD138;
    qword_1808CD138 = &ShellScreenClippingLogging::`vftable';
    byte_1808CD148 = 0;
    qword_1808CD150 = (struct _tlgProvider_t *)&`StartMenuExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808CD138, qword_1808CD150, v3);
    InitOnceComplete(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &qword_1808CD138);
  }
  return v7;
}
