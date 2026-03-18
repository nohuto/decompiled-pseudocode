/*
 * XREFs of DxgkInvalidateMonitorConnections @ 0x140378200
 * Callers:
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C1310 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1401C1F40 (DxgkHandleForceProjectionMonitor.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037781C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     DxgkCompleteTopologyTransition @ 0x140378060 (DxgkCompleteTopologyTransition.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140377D7C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 */

__int64 __fastcall DxgkInvalidateMonitorConnections(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // rdi
  unsigned int v5; // edi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int8 v10[8]; // [rsp+50h] [rbp-59h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11; // [rsp+58h] [rbp-51h] BYREF
  int v12; // [rsp+60h] [rbp-49h] BYREF
  __int64 v13; // [rsp+68h] [rbp-41h]
  char v14; // [rsp+70h] [rbp-39h]
  GUID ActivityId; // [rsp+78h] [rbp-31h] BYREF
  _OWORD v16[6]; // [rsp+90h] [rbp-19h] BYREF

  v10[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x25u, 0, &v11, v10);
  v12 = -1;
  v13 = 0LL;
  v4 = v11;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2165;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter, v3, 2165);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 2165);
  WdLogSingleEntry1(4LL, a1);
  WdLogGlobalForLineNumber = 2907;
  if ( (a1 & 3) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2909;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"((i_Parameter & INVALIDATE_MONITOR_CONNECTIONS_EMERGENCY_ONLY) != 0) || ((i_Parameter & INVALIDATE_MONITOR_CONNECT"
       "IONS_PATH_PERSIST) != 0)",
      2909LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = DisplayConfigHandleMonitorInvalidation(a1, 0LL, v4);
  memset(v16, 0, sizeof(v16));
  LODWORD(v16[3]) |= 2u;
  memset(&v16[1], 0, 28);
  v16[0] = 0x6000000002uLL;
  *((_QWORD *)&v16[3] + 1) = a1;
  LODWORD(v16[5]) = v5;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v16, CurrentProcessSessionId);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit, v8, v12);
  if ( v10[0] )
    DisplayScenarioContextDissociate(&v11);
  return v5;
}
