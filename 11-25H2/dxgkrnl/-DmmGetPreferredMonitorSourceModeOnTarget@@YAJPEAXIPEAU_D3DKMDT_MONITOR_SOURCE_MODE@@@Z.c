/*
 * XREFs of ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403C3A74
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1403A6D68 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1403C2B70 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1403DE024 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1402C8614 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1402C8700 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorGetPreferredMonitorSourceMode@@YAJPEAUHDXGMONITOR__@@PEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403C3B6C (-MonitorGetPreferredMonitorSourceMode@@YAJPEAUHDXGMONITOR__@@PEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@.c)
 */

__int64 __fastcall DmmGetPreferredMonitorSourceModeOnTarget(
        DXGADAPTER *a1,
        unsigned int a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *a3)
{
  __int64 v4; // rdi
  char *v5; // rbx
  VIDPN_MGR *v6; // rsi
  int ConnectedMonitorHandle; // eax
  unsigned int PreferredMonitorSourceMode; // ebx
  struct HDXGMONITOR__ *v10; // rdi
  struct HDXGMONITOR__ *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  v5 = (char *)a1 + 3120;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*(_QWORD *)v5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 14806;
  }
  v6 = *(VIDPN_MGR **)(*(_QWORD *)v5 + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v12, (__int64)v6);
  v11 = 0LL;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v6, v4, &v11);
  PreferredMonitorSourceMode = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle >= 0 )
  {
    v10 = v11;
    if ( !v11 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 14834;
    }
    PreferredMonitorSourceMode = MonitorGetPreferredMonitorSourceMode(v10, a3);
    VIDPN_MGR::ReleaseMonitorHandle(v6, v10);
  }
  else
  {
    WdLogSingleEntry2(2LL, v4, ConnectedMonitorHandle);
    WdLogGlobalForLineNumber = 14829;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
  return PreferredMonitorSourceMode;
}
