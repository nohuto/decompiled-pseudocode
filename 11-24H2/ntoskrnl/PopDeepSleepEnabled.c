/*
 * XREFs of PopDeepSleepEnabled @ 0x14048E410
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x14075EF20 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x14075F150 (PopDripsWatchdogUpdateMetrics.c)
 *     PopCheckResiliencyScenarios @ 0x140A1BD98 (PopCheckResiliencyScenarios.c)
 *     PopEnforceDeepSleep @ 0x140AA710C (PopEnforceDeepSleep.c)
 * Callees:
 *     <none>
 */

bool PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
