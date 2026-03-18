/*
 * XREFs of PopPowerAggregatorNotifySystemWake @ 0x14074D66C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopPowerAggregatorNotifySystemWake(int a1)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  dword_140F083A4 = a1;
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
