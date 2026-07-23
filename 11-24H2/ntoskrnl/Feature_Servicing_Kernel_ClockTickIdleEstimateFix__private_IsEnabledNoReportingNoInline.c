/*
 * XREFs of Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x1402ABB08
 * Callers:
 *     KiUpdateTime @ 0x1402AA2B0 (KiUpdateTime.c)
 *     KiSetClockIntervalOneShot @ 0x1402AC34C (KiSetClockIntervalOneShot.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140317E50 (KiSetClockTimerKTimerDeadlines.c)
 *     KeEstimateClockTickDuration @ 0x1404C560C (KeEstimateClockTickDuration.c)
 *     KePrepareClockTimerForIdle @ 0x1405B675C (KePrepareClockTimerForIdle.c)
 * Callees:
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledFallback @ 0x1404F85A0 (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_featureState & 2) != 0 )
    return Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_featureState & 1;
  else
    return Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_featureState,
             0LL);
}
