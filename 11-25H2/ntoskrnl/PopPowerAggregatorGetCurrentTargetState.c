/*
 * XREFs of PopPowerAggregatorGetCurrentTargetState @ 0x14074D3A0
 * Callers:
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A9878C (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopPowerAggregatorGetCurrentTargetState(__int64 a1)
{
  __int128 v2; // xmm1
  __int64 v3; // xmm0_8

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  v2 = xmmword_140F082A0;
  *(_OWORD *)a1 = xmmword_140F08290;
  v3 = qword_140F082B0;
  *(_OWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 32) = v3;
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
