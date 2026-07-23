/*
 * XREFs of PopEsInStandbyAcDcCallback @ 0x140AC73D0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopEsInStandbyEvaluate @ 0x140A31120 (PopEsInStandbyEvaluate.c)
 *     PopEsWorkItemSchedule @ 0x140A31484 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsInStandbyAcDcCallback(LPCGUID SettingGuid, PVOID Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
  PopEsInStandbyEvaluate(v5, v4);
  PopEsWorkItemSchedule(2);
  PopReleaseRwLock(&PopEsLock);
  return 0LL;
}
