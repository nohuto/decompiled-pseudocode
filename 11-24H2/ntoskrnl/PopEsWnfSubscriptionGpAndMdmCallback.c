/*
 * XREFs of PopEsWnfSubscriptionGpAndMdmCallback @ 0x14075C810
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x140A31484 (PopEsWorkItemSchedule.c)
 */

__int64 PopEsWnfSubscriptionGpAndMdmCallback()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
  PopEsWorkItemSchedule(2LL);
  PopReleaseRwLock(&PopEsLock);
  return 0LL;
}
