/*
 * XREFs of RtlCompleteProcessCloning @ 0x18015F580
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlWakeAllConditionVariable @ 0x18008E480 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800A4630 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800F1124 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F9A50 (LdrpAllocateSchedulerSharedData.c)
 *     LdrForkMrdata @ 0x180131D0C (LdrForkMrdata.c)
 *     RtlUnlockHeapManagerForCloning @ 0x180141CA0 (RtlUnlockHeapManagerForCloning.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180147470 (RtlpFeatureConfigurationCloneComplete.c)
 *     RtlpFlsCloneComplete @ 0x18014B618 (RtlpFlsCloneComplete.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015FB08 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrpCompleteProcessCloning @ 0x180160B48 (LdrpCompleteProcessCloning.c)
 */

__int64 __fastcall RtlCompleteProcessCloning(unsigned int a1)
{
  int v2; // edi
  void *UniqueThread; // rdx
  volatile signed __int32 **v4; // rdx
  unsigned __int64 v5; // r8
  __int64 result; // rax
  volatile signed __int32 **v7; // rdx
  unsigned __int64 v8; // r8

  if ( a1 )
  {
    RtlCriticalSectionLock = 1LL;
    v2 = 1;
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_1801D2758 = 0LL;
    qword_1801D2750 = (__int64)UniqueThread;
    dword_1801D2748 = -2;
    dword_1801D274C = 1;
  }
  else
  {
    LdrpForkInProgress = 0;
    v2 = 2;
    RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
  }
  RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  LdrForkMrdata(v2, v4, v5);
  if ( v2 == 1 )
    RtlpProtectedPoliciesSRWLock = 1LL;
  RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  RtlUnlockHeapManagerForCloning(a1);
  RtlpFeatureConfigurationCloneComplete(a1);
  LdrpUnlockTlsDelayedReclaimTable(a1);
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  RtlpFlsCloneComplete((__int64)&RtlpFlsContext, a1);
  result = LdrpCompleteProcessCloning(a1);
  if ( a1 )
  {
    LdrpForkInProgress = 0;
    RtlAcquireReleaseSRWLockExclusive((volatile signed __int32 *)&LdrpForkActiveLock, v7, v8);
    RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
    LdrpSchedulerSharedDataListHeadLock = 0LL;
    qword_1801D2978 = (__int64)&LdrpSchedulerSharedDataListHead;
    LdrpSchedulerSharedDataListHead = (__int64)&LdrpSchedulerSharedDataListHead;
    LdrpAllocateSchedulerSharedData();
    return LdrpAcquireSchedulerSharedDataSlot((__int64)NtCurrentTeb());
  }
  return result;
}
