/*
 * XREFs of RtlCloneUserProcess @ 0x18015F270
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1801334B0 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x18001CD20 (LdrpAcquireLoaderLock.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlWakeAllConditionVariable @ 0x18008E480 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800A4630 (RtlAcquireReleaseSRWLockExclusive.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800F1124 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F9A50 (LdrpAllocateSchedulerSharedData.c)
 *     RtlpCreateUserProcess @ 0x1800FB814 (RtlpCreateUserProcess.c)
 *     LdrForkMrdata @ 0x180131D0C (LdrForkMrdata.c)
 *     RtlLockHeapManagerForCloning @ 0x180141950 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x180141CA0 (RtlUnlockHeapManagerForCloning.c)
 *     RtlpFeatureConfigurationCloneComplete @ 0x180147470 (RtlpFeatureConfigurationCloneComplete.c)
 *     RtlpFeatureConfigurationClonePrepare @ 0x1801474DC (RtlpFeatureConfigurationClonePrepare.c)
 *     RtlpFlsCloneComplete @ 0x18014B618 (RtlpFlsCloneComplete.c)
 *     RtlpFlsClonePrepare @ 0x18014B6AC (RtlpFlsClonePrepare.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x18015FB08 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrpCompleteProcessCloning @ 0x180160B48 (LdrpCompleteProcessCloning.c)
 */

__int64 __fastcall RtlCloneUserProcess(int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, _DWORD *a5)
{
  __int64 v7; // rax
  int v9; // esi
  int v10; // ebp
  int v11; // r15d
  int v12; // edi
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  volatile signed __int32 **v18; // rdx
  unsigned __int64 v19; // r8
  volatile signed __int32 **v20; // rdx
  unsigned __int64 v21; // r8
  volatile signed __int32 *v22; // rbx
  __int64 v23; // r14
  volatile signed __int32 **v24; // rdx
  unsigned __int64 v25; // r8
  volatile signed __int32 **v26; // rdx
  unsigned __int64 v27; // r8
  volatile signed __int32 **v28; // rdx
  unsigned __int64 v29; // r8
  volatile signed __int32 **v30; // rdx
  unsigned __int64 v31; // r8
  unsigned int UserProcess; // eax
  unsigned int v33; // ebp
  unsigned int v34; // ebx
  volatile signed __int32 **v35; // rdx
  unsigned __int64 v36; // r8
  volatile signed __int32 **v37; // rdx
  unsigned __int64 v38; // r8
  _QWORD v39[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v40; // [rsp+40h] [rbp-58h]
  __int128 v41; // [rsp+50h] [rbp-48h]
  __int64 v42; // [rsp+60h] [rbp-38h]

  v7 = a2;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225711LL;
  v9 = 2;
  v10 = 2 * (a1 & 2);
  v11 = a1 & 1;
  v12 = a1 & 4;
  if ( (a1 & 4) == 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      return (unsigned int)-1073741420;
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock(v15, v14, v16, v17);
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    RtlpFlsClonePrepare((__int64)&RtlpFlsContext, v18, v19);
    RtlEnterCriticalSection((__int64)&FastPebLock);
    RtlAcquireSRWLockShared(&LdrpTlsLock);
    v22 = (volatile signed __int32 *)&unk_1801D24A8;
    v23 = 16LL;
    do
    {
      RtlAcquireSRWLockExclusive(v22, v20, v21);
      v22 += 4;
      --v23;
    }
    while ( v23 );
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpProtectedPoliciesSRWLock, v20, v21);
    LdrForkMrdata(0, v24, v25);
    RtlpFeatureConfigurationClonePrepare();
    v13 = RtlLockHeapManagerForCloning();
    if ( v13 < 0 )
    {
      RtlpFeatureConfigurationCloneComplete(0);
      LdrForkMrdata(2, v28, v29);
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      LdrpUnlockTlsDelayedReclaimTable(0LL);
      RtlLeaveCriticalSection((__int64)&FastPebLock);
      RtlpFlsCloneComplete((__int64)&RtlpFlsContext, 0);
      LdrpCompleteProcessCloning(0LL);
      return (unsigned int)v13;
    }
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlCriticalSectionLock, v26, v27);
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpForkActiveLock, v30, v31);
    v7 = a2;
    LdrpForkInProgress = 1;
  }
  v39[1] = v7;
  v42 = 0LL;
  v39[0] = 1LL;
  v40 = a3;
  v41 = a4;
  UserProcess = RtlpCreateUserProcess(0LL, 0LL, v10, v11, (__int64)v39, a5);
  v33 = UserProcess;
  if ( !v12 )
  {
    if ( UserProcess == 297 )
    {
      RtlCriticalSectionLock = 1LL;
      v34 = 1;
      v9 = 1;
      qword_1801D2750 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
      dword_1801D2748 = -2;
      dword_1801D274C = 1;
      qword_1801D2758 = 0LL;
    }
    else
    {
      LdrpForkInProgress = 0;
      v34 = 0;
      RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    LdrForkMrdata(v9, v35, v36);
    if ( v9 == 1 )
      RtlpProtectedPoliciesSRWLock = 1LL;
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    RtlUnlockHeapManagerForCloning(v34);
    RtlpFeatureConfigurationCloneComplete(v34);
    LdrpUnlockTlsDelayedReclaimTable(v34);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlpFlsCloneComplete((__int64)&RtlpFlsContext, v34);
    LdrpCompleteProcessCloning(v34);
    if ( v34 )
    {
      LdrpForkInProgress = 0;
      RtlAcquireReleaseSRWLockExclusive((volatile signed __int32 *)&LdrpForkActiveLock, v37, v38);
      RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
      LdrpSchedulerSharedDataListHeadLock = 0LL;
      qword_1801D2978 = (__int64)&LdrpSchedulerSharedDataListHead;
      LdrpSchedulerSharedDataListHead = (__int64)&LdrpSchedulerSharedDataListHead;
      LdrpAllocateSchedulerSharedData();
      LdrpAcquireSchedulerSharedDataSlot((__int64)NtCurrentTeb());
    }
  }
  return v33;
}
