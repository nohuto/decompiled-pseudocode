/*
 * XREFs of AcpiDiagThermalPollingTimerRoutine @ 0x140036F50
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagRequeueThermalPollingTimer @ 0x140036FCC (AcpiDiagRequeueThermalPollingTimer.c)
 *     ACPIThermalRereadTemperature @ 0x140037874 (ACPIThermalRereadTemperature.c)
 */

__int64 AcpiDiagThermalPollingTimerRoutine()
{
  KIRQL v0; // al
  __int64 *v1; // rbx
  KIRQL v2; // di

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v1 = (__int64 *)AcpiThermalZoneList;
  v2 = v0;
  while ( v1 != &AcpiThermalZoneList )
  {
    ACPIThermalRereadTemperature(v1 - 26);
    v1 = (__int64 *)*v1;
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
  return AcpiDiagRequeueThermalPollingTimer();
}
