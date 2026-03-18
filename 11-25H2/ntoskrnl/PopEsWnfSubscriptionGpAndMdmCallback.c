/*
 * XREFs of PopEsWnfSubscriptionGpAndMdmCallback @ 0x140750E40
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x140A36FBC (PopEsWorkItemSchedule.c)
 */

__int64 PopEsWnfSubscriptionGpAndMdmCallback()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
  PopEsWorkItemSchedule(2LL);
  PopReleaseRwLock(&PopEsLock);
  return 0LL;
}
