/*
 * XREFs of PsAcquireProcessExitSynchronization @ 0x14094BC90
 * Callers:
 *     PopEtEnergyTrackerQueryDxgProcessEnergyValues @ 0x14075E150 (PopEtEnergyTrackerQueryDxgProcessEnergyValues.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14094B234 (EtwQueryProcessTelemetryInfo.c)
 *     PopEtEnergyTrackerQueryProcessEnergyValues @ 0x140ACA438 (PopEtEnergyTrackerQueryProcessEnergyValues.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall PsAcquireProcessExitSynchronization(struct _EX_RUNDOWN_REF *a1)
{
  return ExAcquireRundownProtection(a1 + 61) == 0 ? 0xC000010A : 0;
}
