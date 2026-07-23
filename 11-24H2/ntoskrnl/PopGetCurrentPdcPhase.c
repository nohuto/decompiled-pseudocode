/*
 * XREFs of PopGetCurrentPdcPhase @ 0x1405D5E10
 * Callers:
 *     PopRecordPhysicalPowerButton @ 0x140747AF0 (PopRecordPhysicalPowerButton.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A99FCC (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     NtSetThreadExecutionState @ 0x140AC4920 (NtSetThreadExecutionState.c)
 * Callees:
 *     <none>
 */

__int64 PopGetCurrentPdcPhase()
{
  return (unsigned int)PopCurrentPdcCsPhase;
}
