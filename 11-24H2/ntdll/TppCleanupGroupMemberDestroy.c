/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x18004E380
 * Callers:
 *     TppWorkInitialize @ 0x1800470B0 (TppWorkInitialize.c)
 *     TppIopExecuteCallback @ 0x18004B970 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x18004BE80 (TppExecuteWaitCallback.c)
 *     TppWorkpFree @ 0x18004D620 (TppWorkpFree.c)
 *     TppIopCallbackEpilog @ 0x18004E2E0 (TppIopCallbackEpilog.c)
 *     TppWorkCallbackPrologRelease @ 0x18004ECC0 (TppWorkCallbackPrologRelease.c)
 *     TppWorkPost @ 0x18006B720 (TppWorkPost.c)
 *     TppSimplepFree @ 0x1800869C0 (TppSimplepFree.c)
 *     TpSimpleTryPost @ 0x180086E30 (TpSimpleTryPost.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     TppSingleTimerExpiration @ 0x180088760 (TppSingleTimerExpiration.c)
 *     TpWaitForTimer @ 0x1800889F0 (TpWaitForTimer.c)
 *     TppAlpcpFree @ 0x180089250 (TppAlpcpFree.c)
 *     TpReleaseWork @ 0x180089580 (TpReleaseWork.c)
 *     TpAllocJobNotification @ 0x1800B6E30 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x1800B70B0 (TppJobpFree.c)
 *     TppAllocAlpcCompletion @ 0x1800B7134 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x1800B7400 (TppIopFree.c)
 *     TpAllocIoCompletion @ 0x1800B7460 (TpAllocIoCompletion.c)
 *     TppDestroyTimer @ 0x1800E5FBC (TppDestroyTimer.c)
 * Callees:
 *     TppCallbackCheckThreadBeforeCallback @ 0x18004E600 (TppCallbackCheckThreadBeforeCallback.c)
 *     TppCleanupGroupRemoveMember @ 0x18004E720 (TppCleanupGroupRemoveMember.c)
 *     RtlpTpWaitFinalizationCallback @ 0x18004E790 (RtlpTpWaitFinalizationCallback.c)
 *     TppCallbackEpilog @ 0x1800512E0 (TppCallbackEpilog.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x1800740B0 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18008A0B0 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x1800D9FB4 (TppPoolpFree.c)
 *     RtlpTpTimerFinalizationCallback @ 0x1800F1610 (RtlpTpTimerFinalizationCallback.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1)
{
  void *v2; // r8
  _ACTIVATION_CONTEXT *v3; // rcx
  __int64 v4; // rdx
  void *v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *SchedulerSharedDataSlot; // r10
  unsigned int i; // r8d
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  PVOID v12; // rcx
  void (__fastcall *v13)(_BYTE *, __int64); // r10
  __int64 v14; // r11
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rdx
  _BYTE v18[88]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v19; // [rsp+88h] [rbp-C0h]
  __int64 v20; // [rsp+90h] [rbp-B8h]

  memset_thunk_772440563353939046(v18, 0, 0x100uLL);
  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    v2 = (void *)a1[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, v2);
  }
  v3 = (_ACTIVATION_CONTEXT *)a1[12];
  if ( v3 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlReleaseActivationContext(v3);
  v4 = a1[18];
  if ( v4 )
  {
    v5 = (void *)(v4 + 72);
    v6 = 0LL;
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        if ( !SchedulerSharedDataSlot[i] )
        {
          v6 = &SchedulerSharedDataSlot[i];
          break;
        }
      }
    }
    if ( v6 )
      *v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(v5);
    v9 = a1 + 19;
    v10 = a1[19];
    v11 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v10 + 8) != a1 + 19 || (_QWORD *)*v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    a1[20] = a1 + 19;
    *v9 = v9;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1[18] + 72LL));
    v12 = (PVOID)a1[18];
    if ( v12 == (PVOID)TppPoolpGlobalPool )
    {
      TppPoolpDereferenceGlobalPool(&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
    else if ( v12 == TppPoolpSerializedPool )
    {
      TppPoolpDereferenceGlobalPool(&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
    }
    else if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12, 0xFFFFFFFF) == 1 )
    {
      TppPoolpFree(v12);
    }
  }
  else
  {
    RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
    v15 = a1 + 19;
    v16 = a1[19];
    v17 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v16 + 8) != a1 + 19 || (_QWORD *)*v17 != v15 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    a1[20] = a1 + 19;
    *v15 = v15;
    RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  }
  if ( a1[4] )
  {
    v19 = a1[4];
    v20 = a1[11];
    TppCallbackCheckThreadBeforeCallback(v18);
    if ( (char *)v13 == (char *)RtlpTpWaitFinalizationCallback )
    {
      RtlpTpWaitFinalizationCallback(v18, v14);
    }
    else if ( (char *)v13 == (char *)RtlpTpTimerFinalizationCallback )
    {
      RtlpTpTimerFinalizationCallback(v18, v14);
    }
    else
    {
      v13(v18, v14);
    }
    TppCallbackEpilog(v18);
  }
}
