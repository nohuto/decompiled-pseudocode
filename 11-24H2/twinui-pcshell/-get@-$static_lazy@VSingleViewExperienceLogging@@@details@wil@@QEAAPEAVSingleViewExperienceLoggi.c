/*
 * XREFs of ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800252B8
 * Callers:
 *     ??$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N$$QEAH2@Z @ 0x180023AFC (--$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N.c)
 *     ?StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800242D0 (-StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z @ 0x180024850 (-StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z.c)
 *     ??$OnEventQueued_EventName@PEBGPEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SAX$$QEAPEBG00@Z @ 0x180024A5C (--$OnEventQueued_EventName@PEBGPEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SAX$$QEAPEB.c)
 *     ?StopActivity@OnEventQueued@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180024C10 (-StopActivity@OnEventQueued@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$OnPriorityBoostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N$$QEAH2@Z @ 0x18003CFF0 (--$OnPriorityBoostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NHA.c)
 *     ?StopActivity@Reactivate@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1801B4DC0 (-StopActivity@Reactivate@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180083248 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<SingleViewExperienceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]
  LPVOID v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = HIDWORD(a1);
  v7 = 0LL;
  v5 = 0;
  if ( __std_init_once_begin_initialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v5, &v7) && v5 )
  {
    qword_1808CAAB0 = 0LL;
    dword_1808CAABC = 0;
    v7 = &qword_1808CAAA8;
    qword_1808CAAA8 = &ShellScreenClippingLogging::`vftable';
    byte_1808CAAB8 = 0;
    qword_1808CAAC0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808CAAA8, qword_1808CAAC0, v4);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &qword_1808CAAA8);
  }
  return v7;
}
