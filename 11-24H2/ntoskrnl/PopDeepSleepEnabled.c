/*
 * XREFs of PopDeepSleepEnabled @ 0x140493A20
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x14075FF20 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140760150 (PopDripsWatchdogUpdateMetrics.c)
 *     PopCheckResiliencyScenarios @ 0x140A27318 (PopCheckResiliencyScenarios.c)
 *     PopEnforceDeepSleep @ 0x140AAC13C (PopEnforceDeepSleep.c)
 * Callees:
 *     <none>
 */

bool PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
