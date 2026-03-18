/*
 * XREFs of ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C01387D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0037ECC (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C005304C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C005361C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C006317C (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     RIMSyncWalkRimObjList @ 0x1C00711B0 (RIMSyncWalkRimObjList.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C008BA00 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x1C0138874 (-SessionInfo@Win32k@InputTraceLogging@@SAXXZ.c)
 *     ?TraceCurrentState@CCursorClip@@SAXXZ @ 0x1C01DC4D0 (-TraceCurrentState@CCursorClip@@SAXXZ.c)
 *     TraceRawMouseThrottlingThresholds @ 0x1C01E91F8 (TraceRawMouseThrottlingThresholds.c)
 *     ?ButtonState@Mouse@InputTraceLogging@@SAXK@Z @ 0x1C01F536C (-ButtonState@Mouse@InputTraceLogging@@SAXK@Z.c)
 */

void __fastcall InputCoreProviderCallback(const struct _GUID *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 MouseProcessor; // rax
  __int64 v6; // r9
  _BYTE v7[208]; // [rsp+20h] [rbp-E8h] BYREF

  InputTraceLogging::Perf::s_userCritLoggingEnabled = InputTraceLogging::Enabled(0x2000);
  if ( gProtocolType != -1 )
  {
    CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v7);
    InputTraceLogging::Win32k::SessionInfo();
    InputConfig::TraceCurrentConfig();
    CCursorClip::TraceCurrentState();
    MouseProcessor = anonymous_namespace_::GetMouseProcessor(v2, v1, v3, v4);
    if ( MouseProcessor )
      InputTraceLogging::Mouse::ButtonState(*(_DWORD *)(MouseProcessor + 3572));
    RIMSyncWalkRimObjList(
      1LL,
      0LL,
      (void (__fastcall *)(_QWORD *, __int64))lambda_7c683ce7e834e820b1e487ff164319c2_::_lambda_invoker_cdecl_,
      v6);
    TraceRawMouseThrottlingThresholds();
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v7);
  }
}
