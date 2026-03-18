/*
 * XREFs of PopEsInStandbyLowPowerEpochCallback @ 0x140A3B910
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopEsInStandbyEvaluate @ 0x140A3B940 (PopEsInStandbyEvaluate.c)
 */

__int64 __fastcall PopEsInStandbyLowPowerEpochCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  PopAcquireRwLockExclusive(&PopEsLock);
  PopEsInStandbyEvaluate();
  PopReleaseRwLock((signed __int64 *)&PopEsLock);
  return 0LL;
}
