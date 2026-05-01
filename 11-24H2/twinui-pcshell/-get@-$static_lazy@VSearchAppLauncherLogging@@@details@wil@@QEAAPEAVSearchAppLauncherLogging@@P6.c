/*
 * XREFs of ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x180082C2C
 * Callers:
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800824C8 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$UndockedSearchAppExperienceManager_SearchAppVisibilityChanged@AEAW4SearchAppState@@@SearchAppExperienceManagerTelemetry@@SAXAEAW4SearchAppState@@@Z @ 0x1800844C8 (--$UndockedSearchAppExperienceManager_SearchAppVisibilityChanged@AEAW4SearchAppState@@@SearchApp.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x1800846B8 (--1-$_TlgActivityBase@V-$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180083248 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<SearchAppLauncherLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]
  LPVOID v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = HIDWORD(a1);
  v7 = 0LL;
  v5 = 0;
  if ( __std_init_once_begin_initialize(&`SearchAppLauncherLogging::Instance'::`2'::wrapper, 0, &v5, &v7) && v5 )
  {
    qword_1808CB0E8 = 0LL;
    dword_1808CB0F4 = 0;
    v7 = &qword_1808CB0E0;
    qword_1808CB0E0 = &ShellScreenClippingLogging::`vftable';
    byte_1808CB0F0 = 0;
    qword_1808CB0F8 = (struct _tlgProvider_t *)&`SearchAppLauncherLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808CB0E0, qword_1808CB0F8, v3);
    InitOnceComplete(&`SearchAppLauncherLogging::Instance'::`2'::wrapper, 0, &qword_1808CB0E0);
  }
  return v7;
}
