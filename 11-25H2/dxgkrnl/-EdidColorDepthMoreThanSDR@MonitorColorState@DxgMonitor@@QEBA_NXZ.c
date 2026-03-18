/*
 * XREFs of ?EdidColorDepthMoreThanSDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1402BFCA8
 * Callers:
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x1402BFA34 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1402BFC70 (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DxgMonitor::MonitorColorState::EdidColorDepthMoreThanSDR(DxgMonitor::MonitorColorState *this)
{
  return (*((_DWORD *)this + 23) & 0x3C) != 0
      || (*((_DWORD *)this + 24) & 0x3C) != 0
      || (*((_DWORD *)this + 25) & 0x3C) != 0
      || (*((_DWORD *)this + 26) & 0x3C) != 0;
}
