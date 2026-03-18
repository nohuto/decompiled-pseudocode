/*
 * XREFs of KeIsForceParkingEnabled @ 0x140204250
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140203248 (PpmHeteroUpdateHgsConfiguration.c)
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x140204120 (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 *     KiUpdateProcessAvailableCpuState @ 0x140204268 (KiUpdateProcessAvailableCpuState.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x140256790 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403E1850 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405B86B4 (KiUpdateSystemAvailableCpuState.c)
 * Callees:
 *     <none>
 */

bool KeIsForceParkingEnabled()
{
  return KiForceParkingConfiguration != 0;
}
