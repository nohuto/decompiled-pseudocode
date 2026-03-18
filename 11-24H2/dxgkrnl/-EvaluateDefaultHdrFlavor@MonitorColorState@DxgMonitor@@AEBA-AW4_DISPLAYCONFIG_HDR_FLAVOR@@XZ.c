/*
 * XREFs of ?EvaluateDefaultHdrFlavor@MonitorColorState@DxgMonitor@@AEBA?AW4_DISPLAYCONFIG_HDR_FLAVOR@@XZ @ 0x14027B0DC
 * Callers:
 *     ?MonitorGetHdrFlavor@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_FLAVOR@@1@Z @ 0x14026E5B8 (-MonitorGetHdrFlavor@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_FLAVOR@@1@Z.c)
 *     ?OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x14027BF50 (-OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x14027CB30 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::MonitorColorState::EvaluateDefaultHdrFlavor(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 460);
  if ( (v1 & 2) != 0 )
    return 2LL;
  else
    return v1 & 1;
}
