/*
 * XREFs of ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403EB4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140289CA8 (-_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADAPTER_FAILURE_REASON@@@Z @ 0x1403EB654 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 */

__int64 __fastcall AdapterTelemetryEnabledCallback(struct DXGADAPTER *a1, void *a2)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v3; // rsi
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rcx
  MONITOR_MGR *v7; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9; // [rsp+38h] [rbp-69h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v10; // [rsp+40h] [rbp-61h] BYREF
  GUID ActivityId; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v12[144]; // [rsp+58h] [rbp-49h] BYREF

  LOBYTE(v9) = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x21u, 0, &v10, (unsigned __int8 *)&v9);
  v3 = v10;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
    {
      WdLogSingleEntry2(3LL, a1, v4);
      WdLogGlobalForLineNumber = 276;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v12);
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v9);
      return v5;
    }
  }
  else if ( (*((_DWORD *)a1 + 111) & 4) == 0 )
  {
    DXGADAPTER::AdapterTelemetry(a1, 1LL, v3, 0LL, 0);
    v6 = *((_QWORD *)a1 + 390);
    if ( v6 )
    {
      v7 = *(MONITOR_MGR **)(v6 + 112);
      if ( v7 )
        MONITOR_MGR::_MonitorTelemetry(v7, v3);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v12);
  if ( (_BYTE)v9 )
    DisplayScenarioContextDissociate(&v10);
  return 0LL;
}
