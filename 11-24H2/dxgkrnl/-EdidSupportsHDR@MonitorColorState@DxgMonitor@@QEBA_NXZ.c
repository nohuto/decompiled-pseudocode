/*
 * XREFs of ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x14035FB3C
 * Callers:
 *     ?MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z @ 0x14026F22C (-MonitorSetDriverColorimetryOverride@@YAJPEAXIAEBU_DXGK_COLORIMETRY@@@Z.c)
 *     ?MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z @ 0x14026F650 (-MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z.c)
 *     ?MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z @ 0x14026F744 (-MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z.c)
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x14027CB30 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028A668 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x14035F900 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 * Callees:
 *     ?EdidColorDepthMoreThanSDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x14035FB74 (-EdidColorDepthMoreThanSDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
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
