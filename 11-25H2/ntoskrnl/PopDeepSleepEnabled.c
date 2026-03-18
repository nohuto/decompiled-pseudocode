/*
 * XREFs of PopDeepSleepEnabled @ 0x140494C44
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x140753350 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x1407535B8 (PopDripsWatchdogUpdateMetrics.c)
 *     PopCheckResiliencyScenarios @ 0x140A1E378 (PopCheckResiliencyScenarios.c)
 *     PopEnforceDeepSleep @ 0x140AA6B7C (PopEnforceDeepSleep.c)
 * Callees:
 *     <none>
 */

bool PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
