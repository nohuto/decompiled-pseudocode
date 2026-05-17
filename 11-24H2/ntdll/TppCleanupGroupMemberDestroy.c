/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x180021980
 * Callers:
 *     TppWorkInitialize @ 0x18001A6B0 (TppWorkInitialize.c)
 *     TppIopExecuteCallback @ 0x18001EF70 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x18001F480 (TppExecuteWaitCallback.c)
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     TppIopCallbackEpilog @ 0x1800218E0 (TppIopCallbackEpilog.c)
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 *     TppWorkPost @ 0x180055B40 (TppWorkPost.c)
 *     TppSimplepFree @ 0x18006A2D0 (TppSimplepFree.c)
 *     TpSimpleTryPost @ 0x18006A740 (TpSimpleTryPost.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     TppSingleTimerExpiration @ 0x18006BE80 (TppSingleTimerExpiration.c)
 *     TpWaitForTimer @ 0x18006C110 (TpWaitForTimer.c)
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     TpReleaseWork @ 0x18006CCA0 (TpReleaseWork.c)
 *     TpAllocJobNotification @ 0x1800BF070 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x1800BF2F0 (TppJobpFree.c)
 *     TppAllocAlpcCompletion @ 0x1800BF374 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x1800BF640 (TppIopFree.c)
 *     TpAllocIoCompletion @ 0x1800BF6A0 (TpAllocIoCompletion.c)
 *     TppDestroyTimer @ 0x1800EA74C (TppDestroyTimer.c)
 * Callees:
 *     TppCallbackCheckThreadBeforeCallback @ 0x180021C00 (TppCallbackCheckThreadBeforeCallback.c)
 *     TppCleanupGroupRemoveMember @ 0x180021D20 (TppCleanupGroupRemoveMember.c)
 *     RtlpTpWaitFinalizationCallback @ 0x180021D90 (RtlpTpWaitFinalizationCallback.c)
 *     TppCallbackEpilog @ 0x1800248E0 (TppCallbackEpilog.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18005E4D0 (RtlReleaseActivationContext.c)
 *     RtlpTpTimerFinalizationCallback @ 0x18006AB30 (RtlpTpTimerFinalizationCallback.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18006D7D0 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x1800DEE44 (TppPoolpFree.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1)
{
  volatile signed __int32 *v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rdx
  volatile signed __int32 **v6; // rcx
  _QWORD *SchedulerSharedDataSlot; // r10
  unsigned int i; // r8d
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 result; // rax
  volatile signed __int32 *v13; // rcx
  void (__fastcall *v14)(_BYTE *, __int64); // r10
  __int64 v15; // r11
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rdx
  _BYTE v19[88]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v20; // [rsp+88h] [rbp-C0h]
  __int64 v21; // [rsp+90h] [rbp-B8h]

  memset_thunk_772440563353939046(v19, 0, 0x100uLL);
  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    v2 = (volatile signed __int32 *)a1[2];
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)TppHeapTag, v2);
  }
  v3 = a1[12];
  if ( v3 != -1 )
    RtlReleaseActivationContext(v3);
  v4 = a1[18];
  if ( v4 )
  {
    v5 = (volatile signed __int32 *)(v4 + 72);
    v6 = 0LL;
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        if ( !SchedulerSharedDataSlot[i] )
        {
          v6 = (volatile signed __int32 **)&SchedulerSharedDataSlot[i];
          break;
        }
      }
    }
    if ( v6 )
      *v6 = v5;
    if ( _interlockedbittestandset64(v5, 0LL) )
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
    result = RtlReleaseSRWLockExclusive(a1[18] + 72LL);
    v13 = (volatile signed __int32 *)a1[18];
    if ( v13 == (volatile signed __int32 *)TppPoolpGlobalPool )
    {
      result = TppPoolpDereferenceGlobalPool(&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
    }
    else if ( v13 == (volatile signed __int32 *)TppPoolpSerializedPool )
    {
      result = TppPoolpDereferenceGlobalPool(&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
    }
    else if ( _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
    {
      result = TppPoolpFree(v13);
    }
  }
  else
  {
    RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
    v16 = a1 + 19;
    v17 = a1[19];
    v18 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v17 + 8) != a1 + 19 || (_QWORD *)*v18 != v16 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    a1[20] = a1 + 19;
    *v16 = v16;
    result = RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  }
  if ( a1[4] )
  {
    v20 = a1[4];
    v21 = a1[11];
    TppCallbackCheckThreadBeforeCallback(v19);
    if ( (char *)v14 == (char *)RtlpTpWaitFinalizationCallback )
    {
      RtlpTpWaitFinalizationCallback(v19, v15);
    }
    else if ( (char *)v14 == (char *)RtlpTpTimerFinalizationCallback )
    {
      RtlpTpTimerFinalizationCallback(v19, v15);
    }
    else
    {
      v14(v19, v15);
    }
    return TppCallbackEpilog(v19);
  }
  return result;
}
