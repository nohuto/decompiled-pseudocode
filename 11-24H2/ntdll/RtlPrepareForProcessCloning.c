/*
 * XREFs of RtlPrepareForProcessCloning @ 0x18015F730
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x18001CD20 (LdrpAcquireLoaderLock.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     LdrForkMrdata @ 0x180131D0C (LdrForkMrdata.c)
 *     RtlLockHeapManagerForCloning @ 0x180141950 (RtlLockHeapManagerForCloning.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180147470 (RtlpFeatureConfigurationCloneComplete.c)
 *     RtlpFeatureConfigurationClonePrepare @ 0x1801474DC (RtlpFeatureConfigurationClonePrepare.c)
 *     RtlpFlsCloneComplete @ 0x18014B618 (RtlpFlsCloneComplete.c)
 *     RtlpFlsClonePrepare @ 0x18014B6AC (RtlpFlsClonePrepare.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015FB08 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrpCompleteProcessCloning @ 0x180160B48 (LdrpCompleteProcessCloning.c)
 */

__int64 RtlPrepareForProcessCloning()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  volatile signed __int32 **v5; // rdx
  unsigned __int64 v6; // r8
  volatile signed __int32 **v7; // rdx
  unsigned __int64 v8; // r8
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rdi
  volatile signed __int32 **v11; // rdx
  unsigned __int64 v12; // r8
  volatile signed __int32 **v13; // rdx
  int v14; // ebx
  unsigned __int64 v15; // r8
  volatile signed __int32 **v16; // rdx
  unsigned __int64 v17; // r8
  volatile signed __int32 **v18; // rdx
  unsigned __int64 v19; // r8

  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return 3221225876LL;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock(v2, v1, v3, v4);
  RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
  RtlpFlsClonePrepare((__int64)&RtlpFlsContext, v5, v6);
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v9 = (volatile signed __int32 *)&unk_1801D24A8;
  v10 = 16LL;
  do
  {
    RtlAcquireSRWLockExclusive(v9, v7, v8);
    v9 += 4;
    --v10;
  }
  while ( v10 );
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpProtectedPoliciesSRWLock, v7, v8);
  LdrForkMrdata(0, v11, v12);
  RtlpFeatureConfigurationClonePrepare();
  v14 = RtlLockHeapManagerForCloning();
  if ( v14 >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlCriticalSectionLock, v13, v15);
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpForkActiveLock, v18, v19);
    result = 0LL;
    LdrpForkInProgress = 1;
  }
  else
  {
    RtlpFeatureConfigurationCloneComplete(0);
    LdrForkMrdata(2, v16, v17);
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrpUnlockTlsDelayedReclaimTable(0LL);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpFlsCloneComplete((__int64)&RtlpFlsContext, 0);
    LdrpCompleteProcessCloning(0LL);
    return (unsigned int)v14;
  }
  return result;
}
