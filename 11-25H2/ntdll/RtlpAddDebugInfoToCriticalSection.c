/*
 * XREFs of RtlpAddDebugInfoToCriticalSection @ 0x180006550
 * Callers:
 *     RtlInitializeCriticalSectionAndSpinCount @ 0x1800044E0 (RtlInitializeCriticalSectionAndSpinCount.c)
 *     RtlInitializeCriticalSection @ 0x180004670 (RtlInitializeCriticalSection.c)
 *     RtlInitializeResource @ 0x1800059E0 (RtlInitializeResource.c)
 *     RtlpWaitOnCriticalSection @ 0x180005E10 (RtlpWaitOnCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x1800073E0 (RtlInitializeCriticalSectionEx.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlStdLogStackTrace @ 0x180025840 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x180025AC0 (RtlStdReleaseStackTrace.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpFreeDebugInfo @ 0x1800F7DE0 (RtlpFreeDebugInfo.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     RtlpInterlockedPopEntrySList @ 0x180166F90 (RtlpInterlockedPopEntrySList.c)
 */

void __fastcall RtlpAddDebugInfoToCriticalSection(__int64 a1)
{
  _QWORD *Heap; // rbx
  void *ProcessHeap; // rcx
  unsigned int v4; // edi
  PRTL_SRWLOCK v5; // rbp
  __int64 v6; // rsi
  volatile signed __int64 v7; // rbx
  char *v8; // rdx
  char *v9; // rcx
  signed __int64 *v11; // rax
  signed __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdx
  unsigned int v16; // eax
  _DWORD *v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // r13
  volatile signed __int32 *v20; // rdx
  char *SchedulerSharedDataSlot; // r10
  unsigned int i; // r8d
  volatile signed __int32 **v23; // rcx
  _QWORD *v24; // r12
  char *v25; // r8
  unsigned int j; // edx
  PRTL_SRWLOCK *v27; // rcx
  char *Value; // rcx
  unsigned __int64 v29; // rsi
  PVOID BaseAddress; // [rsp+78h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+18h] BYREF

  Heap = RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !Heap )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap )
    {
LABEL_50:
      _InterlockedIncrement(&RtlFailedCriticalDebugAllocations);
      return;
    }
    Heap = RtlAllocateHeap(ProcessHeap, 0, 0x30uLL);
  }
  if ( !Heap )
    goto LABEL_50;
  v4 = 0;
  *(_WORD *)Heap = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
    *(_WORD *)Heap = 1;
  Heap[4] = 0LL;
  Heap[1] = a1;
  *((_DWORD *)Heap + 10) = 0;
  *((_WORD *)Heap + 23) = 17235;
  v5 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v6) = 0;
    goto LABEL_9;
  }
  v13 = RtlStdLogStackTrace(RtlpStackTraceDatabase, 2LL);
  v14 = v13;
  if ( !v13 )
  {
    LODWORD(v6) = 0;
    goto LABEL_9;
  }
  v15 = *(unsigned __int16 *)(v13 + 14);
  v16 = 0;
  if ( (_WORD)v15 )
  {
    v17 = (_DWORD *)(v14 + 16);
    do
    {
      v16 += *v17;
      v17 += 2;
      --v15;
    }
    while ( v15 );
  }
  v18 = v16 % *(_DWORD *)&v5[90].0;
  v19 = 2LL * v18;
  if ( !byte_1801D4988 )
  {
    v20 = (volatile signed __int32 *)&v5[2 * v18 + 92];
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v23 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
        if ( !*v23 )
        {
          if ( v23 )
            *v23 = v20;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64(v20, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&v5[v19 + 92]);
  }
  if ( !*(_DWORD *)(v14 + 10) )
  {
    v24 = 0LL;
    BaseAddress = 0LL;
    RegionSize = 0LL;
    if ( !byte_1801D4988 )
    {
      v25 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v25 )
      {
        for ( j = 0; j < 8; ++j )
        {
          v27 = (PRTL_SRWLOCK *)&v25[8 * j];
          if ( !*v27 )
          {
            if ( v27 )
              *v27 = v5;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v5);
    }
    Value = (char *)v5[19].Value;
    v29 = v5[21].Value - 8;
    BaseAddress = Value;
    if ( v5[16].0 )
    {
      if ( v29 < v5[20].Value )
      {
LABEL_45:
        if ( !byte_1801D4988 )
          RtlReleaseSRWLockExclusive(v5);
        if ( v24 )
        {
          *v24 = v14;
          v6 = (__int64)(v5[23].Value - (_QWORD)v24) >> 3;
          *(_WORD *)(v14 + 12) = v6;
          *(_WORD *)(v14 + 10) = WORD1(v6);
        }
        else
        {
          LODWORD(v6) = 0;
        }
        goto LABEL_53;
      }
    }
    else if ( v29 < (unsigned __int64)Value )
    {
      RegionSize = 4096LL;
      if ( (unsigned __int64)(Value - 4096) <= v5[18].Value )
        goto LABEL_45;
      BaseAddress = Value - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_45;
      v5[19].Value = (unsigned __int64)BaseAddress;
    }
    ++HIDWORD(v5[22].Ptr);
    v24 = (_QWORD *)v29;
    v5[21].Value = v29;
    goto LABEL_45;
  }
  LODWORD(v6) = *(unsigned __int16 *)(v14 + 12) + (*(unsigned __int16 *)(v14 + 10) << 16);
LABEL_53:
  if ( !byte_1801D4988 )
    RtlReleaseSRWLockExclusive(&v5[v19 + 92]);
  if ( !(_DWORD)v6 )
    RtlStdReleaseStackTrace(v5, v14);
LABEL_9:
  *((_WORD *)Heap + 1) = v6;
  *((_WORD *)Heap + 22) = WORD1(v6);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, (signed __int64)Heap, -1LL) == -1 )
  {
    v7 = *(_QWORD *)a1;
    v8 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( v8 )
    {
      while ( v4 < 8 )
      {
        v9 = &v8[8 * v4];
        if ( !*(_QWORD *)v9 )
        {
          if ( v9 )
            *(_QWORD *)v9 = &RtlCriticalSectionLock;
          break;
        }
        ++v4;
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&RtlCriticalSectionLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&RtlCriticalSectionLock);
    v11 = (signed __int64 *)off_1801CE8D8;
    v12 = v7 + 16;
    if ( *off_1801CE8D8 != (_UNKNOWN *)&RtlCriticalSectionList )
      __fastfail(3u);
    *(_QWORD *)v12 = &RtlCriticalSectionList;
    *(_QWORD *)(v12 + 8) = v11;
    *v11 = v12;
    off_1801CE8D8 = (_UNKNOWN **)v12;
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  }
  else
  {
    RtlpFreeDebugInfo(Heap);
  }
}
