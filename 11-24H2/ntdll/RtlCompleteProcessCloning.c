/*
 * XREFs of RtlCompleteProcessCloning @ 0x18015D940
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlWakeAllConditionVariable @ 0x1800A9F40 (RtlWakeAllConditionVariable.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800EBDA4 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800EF020 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F4700 (LdrpAllocateSchedulerSharedData.c)
 *     LdrForkMrdata @ 0x18012FF3C (LdrForkMrdata.c)
 *     RtlUnlockHeapManagerForCloning @ 0x18013FE80 (RtlUnlockHeapManagerForCloning.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180145820 (RtlpFeatureConfigurationCloneComplete.c)
 *     RtlpFlsCloneComplete @ 0x1801499C8 (RtlpFlsCloneComplete.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015DEC8 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrpCompleteProcessCloning @ 0x18015EF08 (LdrpCompleteProcessCloning.c)
 */

void __fastcall RtlCompleteProcessCloning(unsigned int a1)
{
  int v2; // edi
  void *UniqueThread; // rdx

  if ( a1 )
  {
    RtlCriticalSectionLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
    v2 = 1;
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    FastPebLock.LockSemaphore = 0LL;
    FastPebLock.OwningThread = UniqueThread;
    FastPebLock.LockCount = -2;
    FastPebLock.RecursionCount = 1;
  }
  else
  {
    LdrpForkInProgress = 0;
    v2 = 2;
    RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
  }
  RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  LdrForkMrdata(v2);
  if ( v2 == 1 )
    RtlpProtectedPoliciesSRWLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)1LL;
  RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  RtlUnlockHeapManagerForCloning(a1);
  RtlpFeatureConfigurationCloneComplete(a1);
  LdrpUnlockTlsDelayedReclaimTable(a1);
  RtlLeaveCriticalSection(&FastPebLock);
  RtlpFlsCloneComplete((__int64)&RtlpFlsContext, a1);
  LdrpCompleteProcessCloning(a1);
  if ( a1 )
  {
    LdrpForkInProgress = 0;
    RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock);
    RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
    LdrpSchedulerSharedDataListHeadLock.0 = 0LL;
    qword_1801D1978 = (__int64)&LdrpSchedulerSharedDataListHead;
    LdrpSchedulerSharedDataListHead = (__int64)&LdrpSchedulerSharedDataListHead;
    LdrpAllocateSchedulerSharedData();
    LdrpAcquireSchedulerSharedDataSlot((__int64)NtCurrentTeb());
  }
}
