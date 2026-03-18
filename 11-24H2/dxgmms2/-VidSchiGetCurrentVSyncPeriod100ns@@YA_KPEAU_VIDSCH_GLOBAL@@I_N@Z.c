/*
 * XREFs of ?VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x14000304C
 * Callers:
 *     VidSchCreatePeriodicFrameNotification @ 0x140002B20 (VidSchCreatePeriodicFrameNotification.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1400030B0 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x140050610 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x14000C930 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 */

unsigned __int64 __fastcall VidSchiGetCurrentVSyncPeriod100ns(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  unsigned __int64 CurrentVSyncPeriodQpc; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int128 v6; // rax
  unsigned __int64 v7; // kr00_8

  CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a1, a2, 0);
  v4 = *((_QWORD *)a1 + 359);
  v5 = CurrentVSyncPeriodQpc;
  v7 = CurrentVSyncPeriodQpc;
  v6 = CurrentVSyncPeriodQpc * (unsigned __int128)0x989680uLL;
  if ( is_mul_ok(v7, 0x989680uLL) )
    return v6 / v4;
  else
    return 10000000 * (v5 / v4) + 10000000 * (v5 % v4) / v4;
}
