/*
 * XREFs of PopPowerAggregatorNotifySystemWake @ 0x140759AB0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopPowerAggregatorNotifySystemWake(int a1)
{
  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  dword_140F08A24 = a1;
  return PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
}
