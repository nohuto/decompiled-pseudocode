/*
 * XREFs of PopUpdatePowerActionWatchdogTimeouts @ 0x140753F7C
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x1404BCE5C (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140AB6DC0 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 */

__int64 PopUpdatePowerActionWatchdogTimeouts()
{
  __int64 result; // rax

  result = PopIsDetailedSleepReliabilityDiagEnabled();
  if ( (_BYTE)result )
  {
    PopPowerActionTransitioningWatchdogTimeout = 330;
    PopPowerActionResumingWatchdogTimeout = 150;
  }
  else
  {
    PopPowerActionTransitioningWatchdogTimeout = PopPowerActionTransitioningWatchdogTimeoutDefault;
    result = (unsigned int)PopPowerActionResumingWatchdogTimeoutDefault;
    PopPowerActionResumingWatchdogTimeout = PopPowerActionResumingWatchdogTimeoutDefault;
  }
  return result;
}
