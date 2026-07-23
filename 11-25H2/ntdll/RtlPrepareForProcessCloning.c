/*
 * XREFs of RtlPrepareForProcessCloning @ 0x180160C40
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpAcquireLoaderLock @ 0x180046860 (LdrpAcquireLoaderLock.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     LdrpDrainWorkQueue @ 0x18006FAA0 (LdrpDrainWorkQueue.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     LdrForkMrdata @ 0x1801337EC (LdrForkMrdata.c)
 *     RtlLockHeapManagerForCloning @ 0x180143040 (RtlLockHeapManagerForCloning.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180148A20 (RtlpFeatureConfigurationCloneComplete.c)
 *     RtlpFeatureConfigurationClonePrepare @ 0x180148A8C (RtlpFeatureConfigurationClonePrepare.c)
 *     RtlpFlsCloneComplete @ 0x18014CBC8 (RtlpFlsCloneComplete.c)
 *     RtlpFlsClonePrepare @ 0x18014CC5C (RtlpFlsClonePrepare.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18016105C (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrpCompleteProcessCloning @ 0x1801620DC (LdrpCompleteProcessCloning.c)
 */

__int64 RtlPrepareForProcessCloning()
{
  __int64 result; // rax
  _RTL_SRWLOCK *v1; // rbx
  __int64 v2; // rdi
  int v3; // ebx

  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return 3221225876LL;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection(&LdrpWorkQueueLock);
  RtlpFlsClonePrepare(&RtlpFlsContext);
  RtlEnterCriticalSection(&FastPebLock);
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v1 = &stru_1801D44F8;
  v2 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v1);
    v1 += 2;
    --v2;
  }
  while ( v2 );
  RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  LdrForkMrdata(0);
  RtlpFeatureConfigurationClonePrepare();
  v3 = RtlLockHeapManagerForCloning();
  if ( v3 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    RtlAcquireSRWLockExclusive(&LdrpForkActiveLock);
    result = 0LL;
    LdrpForkInProgress = 1;
  }
  else
  {
    RtlpFeatureConfigurationCloneComplete(0);
    LdrForkMrdata(2);
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrpUnlockTlsDelayedReclaimTable(0LL);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlpFlsCloneComplete((__int64)&RtlpFlsContext, 0);
    LdrpCompleteProcessCloning(0LL);
    return (unsigned int)v3;
  }
  return result;
}
