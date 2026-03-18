/*
 * XREFs of RtlULongLongMult @ 0x140035FA0
 * Callers:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x14000F7D0 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x140017030 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 *     ?VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z @ 0x14002D770 (-VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z.c)
 *     VidSchSetMonitorPowerState @ 0x140041A20 (VidSchSetMonitorPowerState.c)
 *     VidSchEnableLatencyToleranceTimer @ 0x1400492A0 (VidSchEnableLatencyToleranceTimer.c)
 *     ?VidSchiGpuPerfTracing@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004F364 (-VidSchiGpuPerfTracing@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x140050C7C (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = ullMultiplicand * ullMultiplier;
    return 0;
  }
  else
  {
    *pullResult = -1LL;
    return -1073741675;
  }
}
