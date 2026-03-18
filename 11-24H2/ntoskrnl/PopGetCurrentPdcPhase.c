/*
 * XREFs of PopGetCurrentPdcPhase @ 0x1405D88FC
 * Callers:
 *     PopRecordPhysicalPowerButton @ 0x1407497C0 (PopRecordPhysicalPowerButton.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A9EA5C (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     NtSetThreadExecutionState @ 0x140AC6F10 (NtSetThreadExecutionState.c)
 * Callees:
 *     <none>
 */

__int64 PopGetCurrentPdcPhase()
{
  return (unsigned int)PopCurrentPdcCsPhase;
}
