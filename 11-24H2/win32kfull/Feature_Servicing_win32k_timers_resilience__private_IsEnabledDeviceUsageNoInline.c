/*
 * XREFs of Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x1402899F0
 * Callers:
 *     InternalSetTimer @ 0x14005F804 (InternalSetTimer.c)
 *     DestroyThreadsTimers @ 0x14023E840 (DestroyThreadsTimers.c)
 *     DestroyWindowsTimers @ 0x14023E90C (DestroyWindowsTimers.c)
 *     DoTimer @ 0x14023E9B0 (DoTimer.c)
 *     FreeTimer @ 0x14023EC30 (FreeTimer.c)
 *     xxxTimersProc @ 0x14023F100 (xxxTimersProc.c)
 *     xxxTimersProc_Old @ 0x140289ED0 (xxxTimersProc_Old.c)
 * Callees:
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback @ 0x140289A28 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_win32k_timers_resilience__private_featureState & 0x10) != 0 )
    return Feature_Servicing_win32k_timers_resilience__private_featureState & 1;
  else
    return Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_win32k_timers_resilience__private_featureState,
             3LL);
}
