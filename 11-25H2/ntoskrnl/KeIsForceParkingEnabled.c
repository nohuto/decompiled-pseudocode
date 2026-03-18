/*
 * XREFs of KeIsForceParkingEnabled @ 0x140313D80
 * Callers:
 *     KiScheduleThreadToIdleIsolationUnit @ 0x1402557A0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     KiUpdateProcessAvailableCpuState @ 0x140267998 (KiUpdateProcessAvailableCpuState.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140267B4C (PpmHeteroUpdateHgsConfiguration.c)
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x140313D98 (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403DD240 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405B47C4 (KiUpdateSystemAvailableCpuState.c)
 * Callees:
 *     <none>
 */

bool KeIsForceParkingEnabled()
{
  return KiForceParkingConfiguration != 0;
}
