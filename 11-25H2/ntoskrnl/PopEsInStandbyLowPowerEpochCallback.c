/*
 * XREFs of PopEsInStandbyLowPowerEpochCallback @ 0x140A36B80
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopEsInStandbyEvaluate @ 0x140A36C44 (PopEsInStandbyEvaluate.c)
 */

__int64 __fastcall PopEsInStandbyLowPowerEpochCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
  PopEsInStandbyEvaluate();
  PopReleaseRwLock(&PopEsLock);
  return 0LL;
}
