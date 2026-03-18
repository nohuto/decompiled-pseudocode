/*
 * XREFs of PsAcquireProcessExitSynchronization @ 0x1408BEB30
 * Callers:
 *     PopEtEnergyTrackerQueryProcessEnergyValues @ 0x1406E9008 (PopEtEnergyTrackerQueryProcessEnergyValues.c)
 *     PopEtEnergyTrackerQueryDxgProcessEnergyValues @ 0x140751758 (PopEtEnergyTrackerQueryDxgProcessEnergyValues.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408BE0D4 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall PsAcquireProcessExitSynchronization(struct _EX_RUNDOWN_REF *a1)
{
  return ExAcquireRundownProtection_0(a1 + 61) == 0 ? 0xC000010A : 0;
}
