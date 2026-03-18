/*
 * XREFs of ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401AE1FC
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?PowerOffSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401AE2BC (-PowerOffSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401AE764 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 */

void __fastcall PowerOffSession(enum POWER_MONITOR_REQUEST_REASON a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  v3 = 0;
  InputTraceLogging::Power::PowerOffSession(a1);
  if ( !*(_WORD *)(W32GetUserSessionState(v4) + 69008) )
  {
    LODWORD(v5) = 2;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v5, 4LL, 0LL, 0LL);
    v3 = 1;
  }
  UpdateSessionPowerState(0, a1);
  if ( v3 )
  {
    LODWORD(v5) = 0;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v5, 4LL, 0LL, 0LL);
  }
}
