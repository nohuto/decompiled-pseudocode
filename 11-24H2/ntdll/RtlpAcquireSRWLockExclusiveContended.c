/*
 * XREFs of RtlpAcquireSRWLockExclusiveContended @ 0x180060050
 * Callers:
 *     RtlpHeapTrkTrackRemove @ 0x18001CB50 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkInterceptor @ 0x18001CC90 (RtlpHeapTrkInterceptor.c)
 *     RtlDeleteCriticalSection @ 0x180027610 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x18002F1C0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002FD30 (RtlpAddDebugInfoToCriticalSection.c)
 *     LdrProtectMrdata @ 0x180033A80 (LdrProtectMrdata.c)
 *     LdrpReleaseDllPath @ 0x1800375C0 (LdrpReleaseDllPath.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     RtlpEnterCriticalSectionContended @ 0x18003FF80 (RtlpEnterCriticalSectionContended.c)
 *     LdrpIncrementModuleLoadCount @ 0x180046500 (LdrpIncrementModuleLoadCount.c)
 *     TppCleanupGroupMemberInitialize @ 0x180047230 (TppCleanupGroupMemberInitialize.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180049230 (LdrpDecrementModuleLoadCountEx.c)
 *     TppWaitCompletion @ 0x18004C800 (TppWaitCompletion.c)
 *     TpSetWaitEx @ 0x18004CAE0 (TpSetWaitEx.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004DA30 (RtlpWnfWalkUserSubscriptionList.c)
 *     TppCleanupGroupMemberDestroy @ 0x18004E380 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkCallbackPrologRelease @ 0x18004ECC0 (TppWorkCallbackPrologRelease.c)
 *     TppWorkerFindTask @ 0x18004FB00 (TppWorkerFindTask.c)
 *     TppCallbackEpilog @ 0x1800512E0 (TppCallbackEpilog.c)
 *     TppAlpcpExecuteCallback @ 0x1800522C0 (TppAlpcpExecuteCallback.c)
 *     LdrSetDllDirectory @ 0x180052B00 (LdrSetDllDirectory.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlpWalkLFHBlock @ 0x18005F0E0 (RtlpWalkLFHBlock.c)
 *     RtlSleepConditionVariableSRW @ 0x18005FA90 (RtlSleepConditionVariableSRW.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1800630F0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerCompact @ 0x180066280 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpVsChunkSplit @ 0x1800687B0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegPageRangeShrink @ 0x18006A080 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18006A6B0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     TppWorkPost @ 0x18006B720 (TppWorkPost.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     TpPostTask @ 0x18008B890 (TpPostTask.c)
 *     LdrpProcessMappedModule @ 0x18008FFE0 (LdrpProcessMappedModule.c)
 *     AlpcGetMessageFromCompletionList @ 0x1800D6D50 (AlpcGetMessageFromCompletionList.c)
 *     TppQueueRemoveHead @ 0x1800DA110 (TppQueueRemoveHead.c)
 *     LdrpBuildForwarderLink @ 0x1800DA890 (LdrpBuildForwarderLink.c)
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpWaitCouldDeadlock @ 0x1800603A0 (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x1800D1E40 (RtlBackoff.c)
 *     ZwTerminateProcess @ 0x1801605D0 (ZwTerminateProcess.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180160E80 (ZwAlertThreadByThreadIdEx.c)
 *     NtWaitForAlertByThreadId @ 0x180163CA0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpAcquireSRWLockExclusiveContended(
        unsigned __int64 Address,
        unsigned __int64 a2,
        char *a3,
        char *a4)
{
  unsigned __int64 v4; // rdi
  volatile signed __int64 *v5; // r14
  bool v6; // zf
  signed __int64 v7; // rax
  _QWORD *v8; // rcx
  signed __int64 v9; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 result; // rax
  volatile signed __int64 *v14; // rsi
  __int64 v15; // rax
  signed __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  signed __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  char *v22; // rax
  __int128 v23; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+30h] [rbp-48h]
  __int128 v25; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp+10h] BYREF

  v26 = a2;
  v4 = *(_QWORD *)Address;
  v5 = (volatile signed __int64 *)Address;
  v23 = 0LL;
  LODWORD(v26) = 0;
  v24 = 0LL;
  v25 = 0LL;
  while ( (v4 & 1) != 0 )
  {
    if ( (unsigned __int8)RtlpWaitCouldDeadlock(Address, a2, a3, a4, v23, *((_QWORD *)&v23 + 1)) )
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
    Address = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
    *((_QWORD *)&v24 + 1) = Address;
    LOBYTE(Address) = 0;
    DWORD1(v25) = 3;
    *(_QWORD *)&v24 = 0LL;
    if ( (v4 & 2) != 0 )
    {
      *((_QWORD *)&v23 + 1) = 0LL;
      LODWORD(v25) = -1;
      Address = (unsigned __int8)v4;
      *(_QWORD *)&v23 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
      a2 = (unsigned __int64)&v23 | v4 & 8 | 7;
      LOBYTE(Address) = (v4 & 4) == 0;
    }
    else
    {
      v11 = 11LL;
      *((_QWORD *)&v23 + 1) = &v23;
      LODWORD(v25) = v4 >> 4;
      if ( (int)v25 <= 1 )
        v11 = 3LL;
      a2 = (unsigned __int64)&v23 | v11;
      if ( !(unsigned int)(v4 >> 4) )
        LODWORD(v25) = -2;
    }
    v7 = _InterlockedCompareExchange64(v5, a2, v4);
    v6 = v4 == v7;
    v4 = v7;
    if ( v6 )
    {
      if ( (_BYTE)Address )
      {
        while ( (a2 & 1) != 0 )
        {
          v8 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
          if ( !*(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) )
          {
            do
            {
              v20 = v8;
              v8 = (_QWORD *)*v8;
              v8[2] = v20;
              v21 = v8[1];
            }
            while ( !v21 );
            if ( v8 != (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v21;
          }
          Address = a2 - 4;
          v9 = _InterlockedCompareExchange64(v5, a2 - 4, a2);
          v6 = a2 == v9;
          a2 = v9;
          if ( v6 )
            goto LABEL_12;
        }
        v14 = v5;
        while ( 1 )
        {
          while ( (a2 & 1) != 0 )
          {
            Address = a2 - 4;
            v19 = _InterlockedCompareExchange64(v5, a2 - 4, a2);
            v6 = a2 == v19;
            a2 = v19;
            if ( v6 )
              goto LABEL_12;
          }
          a3 = (char *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
          Address = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !Address )
          {
            do
            {
              v22 = a3;
              a3 = *(char **)a3;
              *((_QWORD *)a3 + 2) = v22;
              Address = *((_QWORD *)a3 + 1);
            }
            while ( !Address );
            if ( a3 != (char *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = Address;
          }
          if ( (*(_DWORD *)(Address + 36) & 1) != 0 )
          {
            v15 = *(_QWORD *)(Address + 16);
            if ( v15 )
              break;
          }
          v14 = 0LL;
          v16 = _InterlockedCompareExchange64(v5, 0LL, a2);
          v6 = a2 == v16;
          a2 = v16;
          if ( v6 )
            goto LABEL_40;
        }
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v15;
        *(_QWORD *)(Address + 16) = 0LL;
        _InterlockedAnd64(v5, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_40:
          v17 = *(_QWORD *)(Address + 16);
          v18 = *(_QWORD *)(Address + 24);
          _interlockedbittestandset((volatile signed __int32 *)(Address + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(Address + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v18, v14, a3, a4);
          Address = v17;
        }
        while ( v17 );
      }
LABEL_12:
      if ( MEMORY[0x7FFE036A] > 1u )
      {
        if ( MEMORY[0x7FFE0297] )
        {
          a4 = (char *)__rdtsc();
          a3 = &a4[SRWLockSpinCycleCount];
          while ( 1 )
          {
            a2 = 0LL;
            __asm { monitorx rax, rcx, rdx }
            Address = DWORD1(v25);
            if ( (BYTE4(v25) & 2) == 0 )
              break;
            Address = (unsigned __int64)a4;
            v12 = __rdtsc();
            a2 = (unsigned __int64)HIDWORD(v12) << 32;
            a4 = (char *)v12;
            if ( v12 < Address || v12 >= (unsigned __int64)a3 )
              break;
            __asm { mwaitx  rax, rcx, rbx }
          }
        }
        else
        {
          for ( Address = 0LL; ; Address = (unsigned int)(Address + 1) )
          {
            a2 = DWORD1(v25);
            if ( (BYTE4(v25) & 2) == 0 || (_DWORD)Address == SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6] )
              break;
            _mm_pause();
          }
        }
      }
      if ( _interlockedbittestandreset((volatile signed __int32 *)&v25 + 1, 1u) )
      {
        do
          NtWaitForAlertByThreadId((PVOID)v5, 0LL);
        while ( (BYTE4(v25) & 4) == 0 );
      }
    }
    else
    {
LABEL_54:
      RtlBackoff(&v26);
      _m_prefetchw((const void *)v5);
      v4 = *v5;
    }
  }
  result = _InterlockedCompareExchange64(v5, v4 + 1, v4);
  if ( v4 != result )
    goto LABEL_54;
  return result;
}
