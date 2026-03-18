/*
 * XREFs of ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1403261A4
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401D6B28 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1402E8FAC (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140325B10 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x140325E40 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x140356B64 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1403A6D68 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1403C2B70 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1403DE024 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140402270 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1404296A0 (DpiPdoDispatchInternalIoctl.c)
 *     DpiGdoDispatchInternalIoctl @ 0x14042A600 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmGetVideoOutputTechnology(
        _QWORD *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4)
{
  __int64 v4; // r14
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v4 = a2;
  if ( a3 )
    *a3 = D3DKMDT_VOT_UNINITIALIZED;
  if ( a4 )
    *a4 = D3DKMDT_VOT_UNINITIALIZED;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 12385;
    return 3223191554LL;
  }
  v8 = a1[390];
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 12396;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v9 = *(_QWORD *)(v8 + 104);
  if ( v9 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v15, *(_QWORD *)(v8 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 120) + 72LL));
    v10 = *(_QWORD *)(v9 + 120);
    v11 = *(_QWORD *)(v10 + 24);
    if ( v11 == v10 + 24 || (v12 = v11 - 8) == 0 )
    {
LABEL_14:
      WdLogSingleEntry1(2LL, v4);
      WdLogGlobalForLineNumber = 12430;
      if ( v10 )
        ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v15 + 40));
      return 3223192325LL;
    }
    else
    {
      while ( *(_DWORD *)(v12 + 24) != (_DWORD)v4 )
      {
        v13 = *(_QWORD *)(v12 + 8);
        v12 = v13 - 8;
        if ( v13 == v10 + 24 )
          v12 = 0LL;
        if ( !v12 )
          goto LABEL_14;
      }
      if ( a3 )
        *a3 = *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v12 + 80);
      if ( a4 )
        *a4 = *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v12 + 84);
      if ( v10 )
        ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v15 + 40));
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 12410;
  }
  return result;
}
