/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x180043EC0
 * Callers:
 *     TppWorkPost @ 0x180011780 (TppWorkPost.c)
 *     TpReleaseWork @ 0x18003A420 (TpReleaseWork.c)
 *     TppAllocAlpcCompletion @ 0x18003A624 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x18003B260 (TppIopFree.c)
 *     TpAllocIoCompletion @ 0x18003B2C0 (TpAllocIoCompletion.c)
 *     TpSetTimerEx @ 0x18003E670 (TpSetTimerEx.c)
 *     TppSingleTimerExpiration @ 0x18003F720 (TppSingleTimerExpiration.c)
 *     TpWaitForTimer @ 0x18003FF90 (TpWaitForTimer.c)
 *     TppIopExecuteCallback @ 0x180040230 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x180040740 (TppExecuteWaitCallback.c)
 *     TppWorkpFree @ 0x180042630 (TppWorkpFree.c)
 *     TppIopCallbackEpilog @ 0x1800432B0 (TppIopCallbackEpilog.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpFree @ 0x180044340 (TppAlpcpFree.c)
 *     TppWorkInitialize @ 0x180047FD0 (TppWorkInitialize.c)
 *     TppSimplepFree @ 0x1800D6F60 (TppSimplepFree.c)
 *     TpSimpleTryPost @ 0x1800EB150 (TpSimpleTryPost.c)
 *     TppDestroyTimer @ 0x1800EBB9C (TppDestroyTimer.c)
 *     TpAllocJobNotification @ 0x1800FCCC0 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x18010E580 (TppJobpFree.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18001A130 (RtlReleaseActivationContext.c)
 *     RtlpTpTimerFinalizationCallback @ 0x18003B5E0 (RtlpTpTimerFinalizationCallback.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003DF80 (TppPoolpDereferenceGlobalPool.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x180044140 (TppCallbackCheckThreadBeforeCallback.c)
 *     TppCleanupGroupRemoveMember @ 0x180044260 (TppCleanupGroupRemoveMember.c)
 *     RtlpTpWaitFinalizationCallback @ 0x1800442D0 (RtlpTpWaitFinalizationCallback.c)
 *     TppCallbackEpilog @ 0x18007ECC0 (TppCallbackEpilog.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     TppPoolpFree @ 0x1800A09A4 (TppPoolpFree.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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
  __int64 (__fastcall *v13)(__int64, __int64); // r10
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
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
    else if ( v12 == TppPoolpSerializedPool )
    {
      TppPoolpDereferenceGlobalPool((const void **)&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
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
    if ( v13 == RtlpTpWaitFinalizationCallback )
    {
      RtlpTpWaitFinalizationCallback(v18, v14);
    }
    else if ( v13 == RtlpTpTimerFinalizationCallback )
    {
      RtlpTpTimerFinalizationCallback((__int64)v18, v14);
    }
    else
    {
      v13((__int64)v18, v14);
    }
    TppCallbackEpilog(v18);
  }
}
