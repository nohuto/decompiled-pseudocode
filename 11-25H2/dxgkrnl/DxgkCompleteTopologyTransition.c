/*
 * XREFs of DxgkCompleteTopologyTransition @ 0x140378060
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x140041ED0 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1400594A0 (-ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkInvalidateMonitorConnections @ 0x140378200 (DxgkInvalidateMonitorConnections.c)
 */

__int64 DxgkCompleteTopologyTransition()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // rdi
  int v3; // ebx
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGGLOBAL *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int8 v13[8]; // [rsp+30h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v14; // [rsp+38h] [rbp-38h] BYREF
  int v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  char v17; // [rsp+50h] [rbp-20h]
  GUID ActivityId; // [rsp+58h] [rbp-18h] BYREF

  v13[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x26u, 0, &v14, v13);
  v15 = -1;
  v16 = 0LL;
  v2 = v14;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2173;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v0, (__int64)&EventProfilerEnter, v1, 2173);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2173);
  v3 = 0;
  Global = DXGGLOBAL::GetGlobal();
  if ( DXGGLOBAL::ToggleTopologyTransition(Global, 0) )
  {
    WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    WdLogGlobalForLineNumber = 8650;
  }
  else
  {
    WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    ActivityId.Data1 = 0;
    *(_DWORD *)&ActivityId.Data2 = 0;
    *(_QWORD *)ActivityId.Data4 = v2;
    WdLogGlobalForLineNumber = 8654;
    v9 = DXGGLOBAL::GetGlobal();
    v3 = DXGGLOBAL::IterateAdaptersWithCallback(
           (__int64)v9,
           (__int64 (__fastcall *)(_QWORD *, __int64))CompleteTopologyTransitionCallback,
           (__int64)&ActivityId,
           4);
    if ( v3 >= 0 )
      DxgkMiracastEnforceInactiveMonitorPolicy(&ActivityId);
  }
  DxgkInvalidateMonitorConnections(1uLL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v15);
  if ( v13[0] )
    DisplayScenarioContextDissociate(&v14);
  return (unsigned int)v3;
}
