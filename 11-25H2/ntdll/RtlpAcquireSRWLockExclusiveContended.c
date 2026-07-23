/*
 * XREFs of RtlpAcquireSRWLockExclusiveContended @ 0x18009E150
 * Callers:
 *     RtlInitializeResource @ 0x1800059E0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180006550 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpHpLfhOwnerCompact @ 0x18000C2E0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpVsChunkSplit @ 0x18000E810 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800100E0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180010710 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     TppWorkPost @ 0x180011780 (TppWorkPost.c)
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x180031FA0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     TpPostTask @ 0x18003D360 (TpPostTask.c)
 *     TpSetTimerEx @ 0x18003E670 (TpSetTimerEx.c)
 *     TppWaitCompletion @ 0x180041270 (TppWaitCompletion.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TpSetWaitEx @ 0x180041AF0 (TpSetWaitEx.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180042A00 (RtlpWnfWalkUserSubscriptionList.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 *     TppCleanupGroupMemberDestroy @ 0x180043EC0 (TppCleanupGroupMemberDestroy.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180046370 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpIncrementModuleLoadCount @ 0x180047B20 (LdrpIncrementModuleLoadCount.c)
 *     TppCleanupGroupMemberInitialize @ 0x180048150 (TppCleanupGroupMemberInitialize.c)
 *     LdrpReleaseDllPath @ 0x180049A60 (LdrpReleaseDllPath.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpProcessMappedModule @ 0x18006DF80 (LdrpProcessMappedModule.c)
 *     RtlpEnterCriticalSectionContended @ 0x18007C690 (RtlpEnterCriticalSectionContended.c)
 *     TppWorkerFindTask @ 0x18007D4E0 (TppWorkerFindTask.c)
 *     TppCallbackEpilog @ 0x18007ECC0 (TppCallbackEpilog.c)
 *     TppAlpcpExecuteCallback @ 0x18007FCA0 (TppAlpcpExecuteCallback.c)
 *     LdrSetDllDirectory @ 0x1800804E0 (LdrSetDllDirectory.c)
 *     RtlpHeapTrkTrackRemove @ 0x1800902C0 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkInterceptor @ 0x180090400 (RtlpHeapTrkInterceptor.c)
 *     RtlpWalkLFHBlock @ 0x18009D1E0 (RtlpWalkLFHBlock.c)
 *     RtlSleepConditionVariableSRW @ 0x18009DB90 (RtlSleepConditionVariableSRW.c)
 *     AlpcGetMessageFromCompletionList @ 0x18009EBE0 (AlpcGetMessageFromCompletionList.c)
 *     TppQueueRemoveHead @ 0x18009ED70 (TppQueueRemoveHead.c)
 *     LdrpBuildForwarderLink @ 0x18009EEC0 (LdrpBuildForwarderLink.c)
 *     RtlDeleteCriticalSection @ 0x1800B9240 (RtlDeleteCriticalSection.c)
 * Callees:
 *     RtlpWaitCouldDeadlock @ 0x18009E4A0 (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x18009EE30 (RtlBackoff.c)
 *     ZwTerminateProcess @ 0x1801637A0 (ZwTerminateProcess.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180164050 (ZwAlertThreadByThreadIdEx.c)
 *     NtWaitForAlertByThreadId @ 0x180166E70 (NtWaitForAlertByThreadId.c)
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
