/*
 * XREFs of ?SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z @ 0x14027C1B0
 * Callers:
 *     ?MonitorSetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAI111KKK@Z @ 0x1403ED728 (-MonitorSetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAI111KKK@Z.c)
 * Callees:
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x14027CB30 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetColorProfile(
        DxgMonitor::MonitorColorState *this,
        const struct DISPLAY_COLOR_DATA_RAW *a2,
        int a3,
        int a4,
        unsigned int a5)
{
  *((_BYTE *)this + 200) = 1;
  *(_OWORD *)((char *)this + 204) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 220) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 344) = 0u;
  *((_BYTE *)this + 344) = 1;
  *((_DWORD *)this + 87) = a3;
  *((_DWORD *)this + 88) = a4;
  *((_DWORD *)this + 89) = a5;
  return (unsigned __int8)-!DxgMonitor::MonitorColorState::_ReevaluateColorAndLuminanceSources(this);
}
