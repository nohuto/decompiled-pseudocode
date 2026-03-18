/*
 * XREFs of Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x14029D018
 * Callers:
 *     KiUpdateTime @ 0x14029B7C0 (KiUpdateTime.c)
 *     KiSetClockIntervalOneShot @ 0x14029D85C (KiSetClockIntervalOneShot.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402A04E0 (KiSetClockTimerKTimerDeadlines.c)
 *     KeEstimateClockTickDuration @ 0x1404CC19C (KeEstimateClockTickDuration.c)
 *     KePrepareClockTimerForIdle @ 0x1405B911C (KePrepareClockTimerForIdle.c)
 * Callees:
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledFallback @ 0x1404FACC0 (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledFallback.c)
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
