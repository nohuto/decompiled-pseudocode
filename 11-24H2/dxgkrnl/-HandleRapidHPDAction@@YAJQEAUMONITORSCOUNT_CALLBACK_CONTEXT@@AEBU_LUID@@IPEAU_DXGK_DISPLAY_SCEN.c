/*
 * XREFs of ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C5420
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x14038E710 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C3738 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkInvalidateMonitorConnections @ 0x14038E2E0 (DxgkInvalidateMonitorConnections.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038EFEC (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 */

__int64 __fastcall HandleRapidHPDAction(
        struct MONITORSCOUNT_CALLBACK_CONTEXT *const a1,
        struct _LUID *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  int v8; // eax
  __int64 result; // rax
  unsigned __int8 v10; // [rsp+40h] [rbp+8h] BYREF

  v8 = DxgkInvalidateMonitorConnections(2uLL);
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(4LL, v8);
    WdLogGlobalForLineNumber = 4290;
  }
  *((_DWORD *)a1 + 8) |= 0x10u;
  v10 = 0;
  if ( (int)DisplayConfigHelperCreateSimulateMonitor(a2, a3, 3u, 0, &v10) >= 0 )
    *((_BYTE *)a1 + 26) = 0;
  result = DisplayConfigHandleMonitorInvalidation(1uLL, a1, a4);
  if ( (int)result < 0 )
  {
    WdLogSingleEntry1(4LL, (int)result);
    result = 0LL;
    WdLogGlobalForLineNumber = 4320;
  }
  return result;
}
