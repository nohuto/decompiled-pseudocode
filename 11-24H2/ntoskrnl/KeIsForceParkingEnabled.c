/*
 * XREFs of KeIsForceParkingEnabled @ 0x14032B830
 * Callers:
 *     KiScheduleThreadToIdleIsolationUnit @ 0x140286DA0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x14032B704 (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 *     KiUpdateProcessAvailableCpuState @ 0x14032B848 (KiUpdateProcessAvailableCpuState.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405B5C94 (KiUpdateSystemAvailableCpuState.c)
 * Callees:
 *     <none>
 */

bool KeIsForceParkingEnabled()
{
  return KiForceParkingConfiguration != 0;
}
