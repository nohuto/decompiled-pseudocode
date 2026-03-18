/*
 * XREFs of ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C01C8
 * Callers:
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C1310 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140377D7C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402668CC (-MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x14028A2B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402EA310 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x140404204 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 */

__int64 __fastcall DisplayConfigHelperCreateSimulateMonitor(
        struct _LUID *a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *a5)
{
  __int64 v8; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGADAPTER *v15; // rbx
  __int64 v16; // rax
  __int64 result; // rax
  unsigned int v18; // r8d
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int IsTargetInClientVidPnTopology; // edi
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  _BYTE v31[8]; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v33[144]; // [rsp+50h] [rbp-D8h] BYREF

  v32 = 0LL;
  v8 = a2;
  Global = DXGGLOBAL::GetGlobal();
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v32);
  v15 = v10;
  if ( v10 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v10, 0LL);
    v19 = COREADAPTERACCESS::AcquireExclusive((__int64)v33, v18 + 2, v18);
    IsTargetInClientVidPnTopology = v19;
    if ( v19 >= 0 )
    {
      if ( a5 )
      {
        IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(v15, v8, a5);
        if ( IsTargetInClientVidPnTopology < 0 )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
          IsTargetInClientVidPnTopology = 0;
          v30[3] = v8;
          v30[4] = v15;
          v30[5] = *((int *)v15 + 104);
          v30[6] = *((unsigned int *)v15 + 103);
          WdLogGlobalForLineNumber = 2223;
        }
      }
      v31[0] = 0;
      if ( a4 || (int)DmmIsTargetForceable(v15, (unsigned int)v8, v31, a3) >= 0 && v31[0] )
        IsTargetInClientVidPnTopology = MonitorCreateSimulatedMonitor(v15, (unsigned int)v8, a3);
    }
    else
    {
      if ( v19 == -1073741130 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
        v25[3] = v15;
        v25[4] = *((int *)v15 + 104);
        v25[5] = *((unsigned int *)v15 + 103);
        WdLogGlobalForLineNumber = 2207;
      }
      IsTargetInClientVidPnTopology = 0;
    }
    DXGADAPTER::ReleaseReference(v15);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
    return (unsigned int)IsTargetInClientVidPnTopology;
  }
  else
  {
    v16 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
    *(_QWORD *)(v16 + 24) = a1->HighPart;
    *(_QWORD *)(v16 + 32) = a1->LowPart;
    result = 3223191554LL;
    WdLogGlobalForLineNumber = 2193;
  }
  return result;
}
