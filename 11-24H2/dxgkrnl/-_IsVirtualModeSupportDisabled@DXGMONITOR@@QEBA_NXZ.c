/*
 * XREFs of ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x14031B458
 * Callers:
 *     ?MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DC8C (-MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x14027EE00 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x14031A158 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x14033B898 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403A8F14 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1403AEC30 (DxgkQueryMonitorTypeLockHeld.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGMONITOR::_IsVirtualModeSupportDisabled(DXGMONITOR *this)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 30) + 16LL) || (*((_BYTE *)this + 176) & 0x40) != 0 )
    return 1;
  return v1;
}
