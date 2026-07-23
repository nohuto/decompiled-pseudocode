/*
 * XREFs of PsAcquireProcessExitSynchronization @ 0x1408F0200
 * Callers:
 *     PopEtEnergyTrackerQueryDxgProcessEnergyValues @ 0x14075D0F0 (PopEtEnergyTrackerQueryDxgProcessEnergyValues.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1408EF7A4 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall PsAcquireProcessExitSynchronization(struct _EX_RUNDOWN_REF *a1)
{
  return ExAcquireRundownProtection_0(a1 + 61) == 0 ? 0xC000010A : 0;
}
