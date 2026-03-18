/*
 * XREFs of PopGetModernStandbyTransitionReason @ 0x1404B4458
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140485908 (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceSleepStudyStart @ 0x14074BAD0 (PopDiagTraceSleepStudyStart.c)
 *     PopIdleCsStateChanged @ 0x140ABC3B4 (PopIdleCsStateChanged.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

__int64 __fastcall PopGetModernStandbyTransitionReason(char a1)
{
  KIRQL v2; // al
  unsigned int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  v3 = dword_140E0B690;
  if ( a1 )
    v3 = dword_140E0B68C;
  KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v2);
  return v3;
}
