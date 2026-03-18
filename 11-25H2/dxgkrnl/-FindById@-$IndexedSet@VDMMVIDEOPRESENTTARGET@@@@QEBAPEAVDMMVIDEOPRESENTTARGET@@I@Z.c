/*
 * XREFs of ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140038FF0
 * Callers:
 *     ?DmmResetOrginalVideoOutputTechnologies@@YAJQEAXI@Z @ 0x1402533DC (-DmmResetOrginalVideoOutputTechnologies@@YAJQEAXI@Z.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140253570 (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140255CB0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x140257A30 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGDMM_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x140259670 (-AcquireMonitorSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1402C8614 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     BmlGetNextBestTargetMode @ 0x1402D37C8 (BmlGetNextBestTargetMode.c)
 *     ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x14038A9B0 (-IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 *     ?DmmIsStaticAndLeafTarget@@YAJQEAXIPEA_N1@Z @ 0x1403C7080 (-DmmIsStaticAndLeafTarget@@YAJQEAXIPEA_N1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 == a1 + 24 )
    return 0LL;
  result = v3 - 8;
  while ( result )
  {
    if ( *(_DWORD *)(result + 24) == a2 )
      break;
    v5 = *(_QWORD *)(result + 8);
    result = v5 - 8;
    if ( v5 == v2 )
      result = 0LL;
  }
  return result;
}
