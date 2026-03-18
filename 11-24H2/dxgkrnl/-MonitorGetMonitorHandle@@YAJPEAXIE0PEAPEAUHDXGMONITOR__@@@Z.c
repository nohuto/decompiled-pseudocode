/*
 * XREFs of ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402E06D8
 * Callers:
 *     DxgkIsMonitorConnected @ 0x1401AD630 (DxgkIsMonitorConnected.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1401C6560 (DxgkHandleForceProjectionMonitor.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x14025ABEC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x140270D20 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x140271950 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x140271C80 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 *     ?AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1402BDDC0 (-AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEP.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1402DF70C (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1403639F0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1403AEC30 (DxgkQueryMonitorTypeLockHeld.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x1403C64A0 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1404117C0 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkGetMonitorInternalInfo @ 0x140413FF0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005FD74 (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005FD98 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402E1D74 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 */

__int64 __fastcall MonitorGetMonitorHandle(_QWORD *a1, __int64 a2, __int64 a3, void *a4, struct HDXGMONITOR__ **a5)
{
  __int64 v6; // r13
  __int64 v8; // rax
  struct HDXGMONITOR__ **v9; // r12
  __int64 v10; // r14
  struct HDXGMONITOR__ *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // ebx
  __int64 v21; // rax
  void *v22; // [rsp+20h] [rbp-20h] BYREF
  __int64 v23; // [rsp+28h] [rbp-18h]
  void *v24; // [rsp+30h] [rbp-10h] BYREF
  __int64 v25; // [rsp+38h] [rbp-8h]
  void *retaddr; // [rsp+78h] [rbp+38h]
  char v27; // [rsp+80h] [rbp+40h] BYREF
  char v28; // [rsp+90h] [rbp+50h]

  v28 = a3;
  v6 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v6;
  *(_QWORD *)(v8 + 32) = a1;
  WdLogGlobalForLineNumber = 2330;
  if ( !a1 )
    return 3221225485LL;
  v9 = a5;
  if ( !a5 || (_DWORD)v6 == -1 )
    return 3221225485LL;
  *a5 = 0LL;
  if ( !a1[390] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2351;
  }
  v10 = *(_QWORD *)(a1[390] + 112LL);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 2361;
    return 3221225485LL;
  }
  v24 = a4;
  v11 = 0LL;
  v25 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v24);
  v22 = retaddr;
  v23 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v22);
  MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v27, v10);
  v12 = *(_QWORD *)(v10 + 40);
  if ( v12 == v10 + 40 )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = v12 - 152;
    if ( !v12 )
      v13 = 0LL;
  }
  while ( 1 )
  {
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v22);
    v23 = v13;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v22);
    v17 = 0LL;
    if ( !v13 )
      goto LABEL_15;
    if ( *(_DWORD *)(v13 + 180) == (_DWORD)v6 )
      break;
    v21 = *(_QWORD *)(v13 + 152);
    if ( v21 == v10 + 40 )
    {
      v13 = 0LL;
    }
    else
    {
      v13 = v21 - 152;
      if ( !v21 )
        v13 = 0LL;
    }
  }
  if ( v28 && *(_DWORD *)(v13 + 280) != 1 )
  {
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v22);
    v13 = *(_QWORD *)(v13 + 296);
    v22 = retaddr;
    v23 = v13;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v22);
  }
  if ( !v13 )
  {
LABEL_15:
    v18 = WdLogNewEntry5_WdTrace(v14, v17, v15, v16);
    v19 = -1073741275;
    *(_QWORD *)(v18 + 24) = (unsigned int)v6;
    *(_QWORD *)(v18 + 32) = v10;
    WdLogGlobalForLineNumber = 2734;
    goto LABEL_16;
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v24);
  v25 = v13;
  v11 = (struct HDXGMONITOR__ *)v13;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v24);
  v19 = 0;
LABEL_16:
  MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v27);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v22);
  if ( v19 == -1073741275 )
  {
    WdLogSingleEntry2(7LL, (unsigned int)v6, v10);
    WdLogGlobalForLineNumber = 2376;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v24);
    return 3221226021LL;
  }
  else
  {
    if ( !v11 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2388;
    }
    v25 = 0LL;
    if ( !v11 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 661;
    }
    *v9 = v11;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v24);
    return 0LL;
  }
}
