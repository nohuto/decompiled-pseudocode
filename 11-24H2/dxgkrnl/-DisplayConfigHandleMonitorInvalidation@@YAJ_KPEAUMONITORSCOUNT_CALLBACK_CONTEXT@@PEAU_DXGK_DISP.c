/*
 * XREFs of ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038EFEC
 * Callers:
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C5420 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     DxgkInvalidateMonitorConnections @ 0x14038E2E0 (DxgkInvalidateMonitorConnections.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038EA8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14038F310 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C3738 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x14038F25C (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x14038F2A4 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 */

__int64 __fastcall DisplayConfigHandleMonitorInvalidation(
        __int64 a1,
        struct MONITORSCOUNT_CALLBACK_CONTEXT *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 result; // rax
  struct MONITORSCOUNT_CALLBACK_CONTEXT *v7; // rbx
  struct DXGGLOBAL *Global; // rax
  signed int v9; // eax
  unsigned int v10; // r14d
  struct DXGGLOBAL *v11; // rax
  int v12; // eax
  unsigned int v13; // edx
  char v14; // r9
  struct DXGGLOBAL *v15; // rax
  struct DXGGLOBAL *v16; // rax
  int v17; // [rsp+50h] [rbp-9h] BYREF
  char v18; // [rsp+54h] [rbp-5h]
  __int16 v19; // [rsp+55h] [rbp-4h]
  char v20; // [rsp+57h] [rbp-2h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v21; // [rsp+58h] [rbp-1h]
  _BYTE v22[48]; // [rsp+60h] [rbp+7h] BYREF
  unsigned __int8 v23; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors() )
    return 0LL;
  MONITORSCOUNT_CALLBACK_CONTEXT::MONITORSCOUNT_CALLBACK_CONTEXT((MONITORSCOUNT_CALLBACK_CONTEXT *)v22);
  v7 = (struct MONITORSCOUNT_CALLBACK_CONTEXT *)v22;
  if ( a2 )
    v7 = a2;
  if ( a3 )
    *((_BYTE *)a3 + 44) = *((_BYTE *)v7 + 26);
  v17 = 4;
  if ( (a1 & 2) != 0 )
  {
    *((_DWORD *)v7 + 8) |= 4u;
    v18 = 0;
  }
  else
  {
    v18 = 1;
  }
  v21 = a3;
  v19 = 0;
  v20 = 0;
  Global = DXGGLOBAL::GetGlobal();
  v9 = DXGGLOBAL::IterateAdaptersWithCallback(
         (__int64)Global,
         (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
         (__int64)&v17,
         4);
  v10 = v9;
  if ( (a1 & 1) != 0 )
  {
    *(_QWORD *)v7 = 0LL;
    *((_DWORD *)v7 + 2) = 0;
    v11 = DXGGLOBAL::GetGlobal();
    v12 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v11,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            (__int64)v7,
            4);
    v10 = v12;
    if ( v12 >= 0 )
    {
      if ( *(_DWORD *)v7 )
      {
        if ( *(_DWORD *)v7 > 1u )
        {
          if ( *((_DWORD *)v7 + 2) )
            *((_DWORD *)v7 + 8) |= 2u;
          v17 = 5;
          v19 = 0;
          v20 = 0;
          v18 = 0;
          v21 = a3;
          v16 = DXGGLOBAL::GetGlobal();
          return (unsigned int)DXGGLOBAL::IterateAdaptersWithCallback(
                                 (__int64)v16,
                                 (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
                                 (__int64)&v17,
                                 4);
        }
        return v10;
      }
      if ( *((_DWORD *)v7 + 2) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2737;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"io_pOptionalEmergencyContext->m_NumEmergencyMonitors == 0",
          2737LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)v7 + 8) |= 1u;
      v13 = *((_DWORD *)v7 + 5);
      if ( v13 == -1 )
      {
        WdLogSingleEntry1(3LL, a1);
        result = 3223191554LL;
        WdLogGlobalForLineNumber = 2744;
        return result;
      }
      v14 = *((_BYTE *)v7 + 30);
      v23 = 0;
      v10 = DisplayConfigHelperCreateSimulateMonitor((struct _LUID *)((char *)v7 + 12), v13, 5u, v14, &v23);
      if ( (v10 & 0x80000000) == 0 && v23 )
      {
        if ( (a1 & 4) == 0 )
          return v10;
        *((_BYTE *)v7 + 26) = 0;
      }
      else if ( (a1 & 4) == 0 )
      {
        return v10;
      }
      v15 = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)v15,
        (__int64 (__fastcall *)(_QWORD *, __int64))InvalidateChildRelationsOnAdapterCallback,
        0LL,
        4);
      return v10;
    }
    WdLogSingleEntry1(3LL, v12);
    WdLogGlobalForLineNumber = 2728;
  }
  else
  {
    WdLogSingleEntry2(4LL, a1, v9);
    WdLogGlobalForLineNumber = 2703;
  }
  return v10;
}
