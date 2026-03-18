/*
 * XREFs of PopEsInStandbyAcDcCallback @ 0x140AC94B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopEsInStandbyEvaluate @ 0x140A3B940 (PopEsInStandbyEvaluate.c)
 *     PopEsWorkItemSchedule @ 0x140A3BCA4 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsInStandbyAcDcCallback(LPCGUID SettingGuid, PVOID Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  PopAcquireRwLockExclusive(&PopEsLock);
  PopEsInStandbyEvaluate(v5, v4);
  PopEsWorkItemSchedule(2);
  PopReleaseRwLock((signed __int64 *)&PopEsLock);
  return 0LL;
}
