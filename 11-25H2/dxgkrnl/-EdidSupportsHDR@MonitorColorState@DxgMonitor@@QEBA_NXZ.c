/*
 * XREFs of ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1402BFC70
 * Callers:
 *     ?MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z @ 0x1402682CC (-MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z.c)
 *     ?MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z @ 0x1402686F0 (-MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z.c)
 *     ?MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z @ 0x1402687E4 (-MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z.c)
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140275630 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x1402BFA34 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140351D90 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 * Callees:
 *     ?EdidColorDepthMoreThanSDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1402BFCA8 (-EdidColorDepthMoreThanSDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

char __fastcall DxgMonitor::MonitorColorState::EdidSupportsHDR(DxgMonitor::MonitorColorState *this)
{
  char v1; // r8

  v1 = 0;
  if ( *((_BYTE *)this + 120)
    && (*((_BYTE *)this + 119) || *((_BYTE *)this + 118))
    && DxgMonitor::MonitorColorState::EdidColorDepthMoreThanSDR(this) )
  {
    return 1;
  }
  return v1;
}
