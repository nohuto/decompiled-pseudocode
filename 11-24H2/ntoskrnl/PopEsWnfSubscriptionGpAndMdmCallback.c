/*
 * XREFs of PopEsWnfSubscriptionGpAndMdmCallback @ 0x14075D870
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x140A3BCA4 (PopEsWorkItemSchedule.c)
 */

__int64 PopEsWnfSubscriptionGpAndMdmCallback()
{
  PopAcquireRwLockExclusive(&PopEsLock);
  PopEsWorkItemSchedule(2LL);
  PopReleaseRwLock((signed __int64 *)&PopEsLock);
  return 0LL;
}
