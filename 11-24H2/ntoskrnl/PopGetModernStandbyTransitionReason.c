/*
 * XREFs of PopGetModernStandbyTransitionReason @ 0x1404AE510
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceSleepStudyStart @ 0x140756004 (PopDiagTraceSleepStudyStart.c)
 *     PopIdleCsStateChanged @ 0x140ABB810 (PopIdleCsStateChanged.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PopGetModernStandbyTransitionReason(char a1)
{
  KIRQL v2; // al
  unsigned int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  v3 = dword_140E0B870;
  if ( a1 )
    v3 = dword_140E0B86C;
  KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v2);
  return v3;
}
