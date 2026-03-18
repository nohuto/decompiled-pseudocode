/*
 * XREFs of Feature_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline @ 0x1404F25D8
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x140753080 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x140753350 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogStopWatchdog @ 0x140A1EDA8 (PopDripsWatchdogStopWatchdog.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A1EF7C (PopDripsWatchdogScheduleNextTimer.c)
 * Callees:
 *     Feature_PopDripsWatchdogTimerCallback__private_IsEnabledFallback @ 0x1404F2610 (Feature_PopDripsWatchdogTimerCallback__private_IsEnabledFallback.c)
 */

__int64 Feature_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PopDripsWatchdogTimerCallback__private_featureState & 0x10) != 0 )
    return Feature_PopDripsWatchdogTimerCallback__private_featureState & 1;
  else
    return Feature_PopDripsWatchdogTimerCallback__private_IsEnabledFallback(
             (unsigned int)Feature_PopDripsWatchdogTimerCallback__private_featureState,
             3LL);
}
