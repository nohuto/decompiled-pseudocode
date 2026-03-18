/*
 * XREFs of PopGetModernStandbyTransitionReason @ 0x1404B3CFC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceSleepStudyStart @ 0x140757B84 (PopDiagTraceSleepStudyStart.c)
 *     PopIdleCsStateChanged @ 0x140AC9180 (PopIdleCsStateChanged.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PopGetModernStandbyTransitionReason(char a1)
{
  KIRQL v2; // al
  unsigned int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  v3 = dword_140E0B7F0;
  if ( a1 )
    v3 = dword_140E0B7EC;
  KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v2);
  return v3;
}
