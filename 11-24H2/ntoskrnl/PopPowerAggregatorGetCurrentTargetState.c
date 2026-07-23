/*
 * XREFs of PopPowerAggregatorGetCurrentTargetState @ 0x140757AC0
 * Callers:
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A99FCC (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopPowerAggregatorGetCurrentTargetState(__int64 a1)
{
  __int128 v2; // xmm1
  __int64 v3; // xmm0_8

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  v2 = xmmword_140F08C80;
  *(_OWORD *)a1 = xmmword_140F08C70;
  v3 = qword_140F08C90;
  *(_OWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 32) = v3;
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
