/*
 * XREFs of Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledNoReportingNoInline @ 0x1404F1AE4
 * Callers:
 *     KiUpdateTime @ 0x140272C80 (KiUpdateTime.c)
 *     KiSetClockIntervalOneShot @ 0x140274DA0 (KiSetClockIntervalOneShot.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140277BC0 (KiSetClockTimerKTimerDeadlines.c)
 *     KeEstimateClockTickDuration @ 0x1404B2C48 (KeEstimateClockTickDuration.c)
 *     KePrepareClockTimerForIdle @ 0x1405B52DC (KePrepareClockTimerForIdle.c)
 * Callees:
 *     Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledFallback @ 0x1404F1B1C (Feature_Servicing_Kernel_ClockTickIdleEstimateFix__private_IsEnabledFallback.c)
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
