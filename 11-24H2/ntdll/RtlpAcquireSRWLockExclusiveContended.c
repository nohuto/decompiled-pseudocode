/*
 * XREFs of RtlpAcquireSRWLockExclusiveContended @ 0x18004A470
 * Callers:
 *     LdrProtectMrdata @ 0x180007080 (LdrProtectMrdata.c)
 *     LdrpReleaseDllPath @ 0x18000ABC0 (LdrpReleaseDllPath.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     RtlpEnterCriticalSectionContended @ 0x180013580 (RtlpEnterCriticalSectionContended.c)
 *     LdrpIncrementModuleLoadCount @ 0x180019B00 (LdrpIncrementModuleLoadCount.c)
 *     TppCleanupGroupMemberInitialize @ 0x18001A830 (TppCleanupGroupMemberInitialize.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18001C830 (LdrpDecrementModuleLoadCountEx.c)
 *     TppWaitCompletion @ 0x18001FE00 (TppWaitCompletion.c)
 *     TpSetWaitEx @ 0x1800200E0 (TpSetWaitEx.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180021030 (RtlpWnfWalkUserSubscriptionList.c)
 *     TppCleanupGroupMemberDestroy @ 0x180021980 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 *     TppWorkerFindTask @ 0x180023100 (TppWorkerFindTask.c)
 *     TppCallbackEpilog @ 0x1800248E0 (TppCallbackEpilog.c)
 *     TppAlpcpExecuteCallback @ 0x1800258C0 (TppAlpcpExecuteCallback.c)
 *     LdrSetDllDirectory @ 0x180026100 (LdrSetDllDirectory.c)
 *     RtlpHeapTrkTrackRemove @ 0x18003C8D0 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkInterceptor @ 0x18003CA10 (RtlpHeapTrkInterceptor.c)
 *     RtlpWalkLFHBlock @ 0x180049500 (RtlpWalkLFHBlock.c)
 *     RtlSleepConditionVariableSRW @ 0x180049EB0 (RtlSleepConditionVariableSRW.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004D510 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerCompact @ 0x1800506A0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpVsChunkSplit @ 0x180052BD0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800544A0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180054AD0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     TppWorkPost @ 0x180055B40 (TppWorkPost.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     TpPostTask @ 0x18006EFB0 (TpPostTask.c)
 *     LdrpProcessMappedModule @ 0x180073700 (LdrpProcessMappedModule.c)
 *     RtlDeleteCriticalSection @ 0x18008FEC0 (RtlDeleteCriticalSection.c)
 *     RtlInitializeResource @ 0x18009A370 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18009AEE0 (RtlpAddDebugInfoToCriticalSection.c)
 *     AlpcGetMessageFromCompletionList @ 0x1800DBC70 (AlpcGetMessageFromCompletionList.c)
 *     TppQueueRemoveHead @ 0x1800DEFA0 (TppQueueRemoveHead.c)
 *     LdrpBuildForwarderLink @ 0x1800DF720 (LdrpBuildForwarderLink.c)
 * Callees:
 *     RtlpWaitCouldDeadlock @ 0x18004A7C0 (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x1800D6AD0 (RtlBackoff.c)
 *     ZwTerminateProcess @ 0x180162210 (ZwTerminateProcess.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180162AC0 (ZwAlertThreadByThreadIdEx.c)
 *     NtWaitForAlertByThreadId @ 0x1801658E0 (NtWaitForAlertByThreadId.c)
 */

signed __int64 __fastcall RtlpAcquireSRWLockExclusiveContended(
        unsigned __int64 UniqueThread,
        unsigned __int64 a2,
        _QWORD *a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  volatile signed __int64 *v5; // r14
  bool v6; // zf
  signed __int64 v7; // rax
  _QWORD *v8; // rcx
  signed __int64 v9; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  signed __int64 result; // rax
  volatile signed __int64 *v14; // rsi
  __int64 v15; // rax
  signed __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  signed __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int128 v23; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+30h] [rbp-48h]
  __int128 v25; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp+10h] BYREF

  v26 = a2;
  v4 = *(_QWORD *)UniqueThread;
  v5 = (volatile signed __int64 *)UniqueThread;
  v23 = 0LL;
  LODWORD(v26) = 0;
  v24 = 0LL;
  v25 = 0LL;
  while ( (v4 & 1) != 0 )
  {
    if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, a2, a3, a4, v23, *((_QWORD *)&v23 + 1)) )
      ZwTerminateProcess(-1LL, 3221225547LL);
    UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
    *((_QWORD *)&v24 + 1) = UniqueThread;
    LOBYTE(UniqueThread) = 0;
    DWORD1(v25) = 3;
    *(_QWORD *)&v24 = 0LL;
    if ( (v4 & 2) != 0 )
    {
      *((_QWORD *)&v23 + 1) = 0LL;
      LODWORD(v25) = -1;
      UniqueThread = (unsigned __int8)v4;
      *(_QWORD *)&v23 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
      a2 = (unsigned __int64)&v23 | v4 & 8 | 7;
      LOBYTE(UniqueThread) = (v4 & 4) == 0;
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
      if ( (_BYTE)UniqueThread )
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
          UniqueThread = a2 - 4;
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
            UniqueThread = a2 - 4;
            v19 = _InterlockedCompareExchange64(v5, a2 - 4, a2);
            v6 = a2 == v19;
            a2 = v19;
            if ( v6 )
              goto LABEL_12;
          }
          a3 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
          UniqueThread = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !UniqueThread )
          {
            do
            {
              v22 = a3;
              a3 = (_QWORD *)*a3;
              a3[2] = v22;
              UniqueThread = a3[1];
            }
            while ( !UniqueThread );
            if ( a3 != (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = UniqueThread;
          }
          if ( (*(_DWORD *)(UniqueThread + 36) & 1) != 0 )
          {
            v15 = *(_QWORD *)(UniqueThread + 16);
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
        *(_QWORD *)(UniqueThread + 16) = 0LL;
        _InterlockedAnd64(v5, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_40:
          v17 = *(_QWORD *)(UniqueThread + 16);
          v18 = *(_QWORD *)(UniqueThread + 24);
          _interlockedbittestandset((volatile signed __int32 *)(UniqueThread + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(UniqueThread + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v18, v14, a3, a4);
          UniqueThread = v17;
        }
        while ( v17 );
      }
LABEL_12:
      if ( MEMORY[0x7FFE036A] > 1u )
      {
        if ( MEMORY[0x7FFE0297] )
        {
          a4 = __rdtsc();
          a3 = (_QWORD *)(a4 + (unsigned int)SRWLockSpinCycleCount);
          while ( 1 )
          {
            a2 = 0LL;
            __asm { monitorx rax, rcx, rdx }
            UniqueThread = DWORD1(v25);
            if ( (BYTE4(v25) & 2) == 0 )
              break;
            UniqueThread = a4;
            v12 = __rdtsc();
            a2 = (unsigned __int64)HIDWORD(v12) << 32;
            a4 = v12;
            if ( v12 < UniqueThread || v12 >= (unsigned __int64)a3 )
              break;
            __asm { mwaitx  rax, rcx, rbx }
          }
        }
        else
        {
          for ( UniqueThread = 0LL; ; UniqueThread = (unsigned int)(UniqueThread + 1) )
          {
            a2 = DWORD1(v25);
            if ( (BYTE4(v25) & 2) == 0
              || (_DWORD)UniqueThread == SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6] )
            {
              break;
            }
            _mm_pause();
          }
        }
      }
      if ( _interlockedbittestandreset((volatile signed __int32 *)&v25 + 1, 1u) )
      {
        do
          NtWaitForAlertByThreadId(v5, 0LL);
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
