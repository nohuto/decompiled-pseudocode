/*
 * XREFs of PopPowerAggregatorGetCurrentTargetState @ 0x140759660
 * Callers:
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A9EA5C (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopPowerAggregatorGetCurrentTargetState(__int64 a1)
{
  __int128 v2; // xmm1
  __int64 v3; // xmm0_8

  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  v2 = xmmword_140F08920;
  *(_OWORD *)a1 = xmmword_140F08910;
  v3 = qword_140F08930;
  *(_OWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 32) = v3;
  return PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
}
