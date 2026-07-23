/*
 * XREFs of RtlpAddDebugInfoToCriticalSection @ 0x18002FD30
 * Callers:
 *     RtlInitializeCriticalSectionAndSpinCount @ 0x18002DCC0 (RtlInitializeCriticalSectionAndSpinCount.c)
 *     RtlInitializeCriticalSection @ 0x18002DE50 (RtlInitializeCriticalSection.c)
 *     RtlInitializeResource @ 0x18002F1C0 (RtlInitializeResource.c)
 *     RtlpWaitOnCriticalSection @ 0x18002F5F0 (RtlpWaitOnCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x180030BC0 (RtlInitializeCriticalSectionEx.c)
 * Callees:
 *     RtlStdLogStackTrace @ 0x180030E50 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1800310D0 (RtlStdReleaseStackTrace.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpFreeDebugInfo @ 0x1800F07C0 (RtlpFreeDebugInfo.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 *     RtlpInterlockedPopEntrySList @ 0x180163DC0 (RtlpInterlockedPopEntrySList.c)
 */

void __fastcall RtlpAddDebugInfoToCriticalSection(__int64 a1)
{
  unsigned __int64 j; // rdx
  _QWORD *Heap; // rbx
  void *ProcessHeap; // rcx
  unsigned int v5; // edi
  PRTL_SRWLOCK v6; // rbp
  __int64 v7; // rsi
  volatile signed __int64 v8; // rbx
  char *v9; // rdx
  char *v10; // rcx
  signed __int64 *v12; // rax
  signed __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rdx
  unsigned int v17; // eax
  _DWORD *v18; // rcx
  __int64 v19; // r13
  char *SchedulerSharedDataSlot; // r10
  unsigned int i; // r8d
  unsigned __int64 *v22; // rcx
  _QWORD *v23; // r12
  char *v24; // r8
  PRTL_SRWLOCK *v25; // rcx
  char *Value; // rcx
  unsigned __int64 v27; // rsi
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
  v5 = 0;
  *(_WORD *)Heap = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
    *(_WORD *)Heap = 1;
  Heap[4] = 0LL;
  Heap[1] = a1;
  *((_DWORD *)Heap + 10) = 0;
  *((_WORD *)Heap + 23) = 17235;
  v6 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v7) = 0;
    goto LABEL_9;
  }
  v14 = RtlStdLogStackTrace(RtlpStackTraceDatabase, 2LL);
  v15 = v14;
  if ( !v14 )
  {
    LODWORD(v7) = 0;
    goto LABEL_9;
  }
  v16 = *(unsigned __int16 *)(v14 + 14);
  v17 = 0;
  if ( (_WORD)v16 )
  {
    v18 = (_DWORD *)(v15 + 16);
    do
    {
      v17 += *v18;
      v18 += 2;
      --v16;
    }
    while ( v16 );
  }
  j = v17 % *(_DWORD *)&v6[90].0;
  v19 = 2LL * (unsigned int)j;
  if ( !byte_1801D1908 )
  {
    j = (unsigned __int64)&v6[2 * (unsigned int)j + 92];
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v22 = (unsigned __int64 *)&SchedulerSharedDataSlot[8 * i];
        if ( !*v22 )
        {
          if ( v22 )
            *v22 = j;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)j, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&v6[v19 + 92]);
  }
  if ( !*(_DWORD *)(v15 + 10) )
  {
    v23 = 0LL;
    BaseAddress = 0LL;
    RegionSize = 0LL;
    if ( !byte_1801D1908 )
    {
      v24 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v24 )
      {
        for ( j = 0LL; (unsigned int)j < 8; j = (unsigned int)(j + 1) )
        {
          v25 = (PRTL_SRWLOCK *)&v24[8 * (unsigned int)j];
          if ( !*v25 )
          {
            if ( v25 )
              *v25 = v6;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v6);
    }
    Value = (char *)v6[19].Value;
    v27 = v6[21].Value - 8;
    BaseAddress = Value;
    if ( v6[16].0 )
    {
      if ( v27 < v6[20].Value )
      {
LABEL_45:
        if ( !byte_1801D1908 )
          RtlReleaseSRWLockExclusive(v6);
        if ( v23 )
        {
          *v23 = v15;
          v7 = (__int64)(v6[23].Value - (_QWORD)v23) >> 3;
          *(_WORD *)(v15 + 12) = v7;
          *(_WORD *)(v15 + 10) = WORD1(v7);
        }
        else
        {
          LODWORD(v7) = 0;
        }
        goto LABEL_53;
      }
    }
    else if ( v27 < (unsigned __int64)Value )
    {
      RegionSize = 4096LL;
      if ( (unsigned __int64)(Value - 4096) <= v6[18].Value )
        goto LABEL_45;
      BaseAddress = Value - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_45;
      v6[19].Value = (unsigned __int64)BaseAddress;
    }
    ++HIDWORD(v6[22].Ptr);
    v23 = (_QWORD *)v27;
    v6[21].Value = v27;
    goto LABEL_45;
  }
  LODWORD(v7) = *(unsigned __int16 *)(v15 + 12) + (*(unsigned __int16 *)(v15 + 10) << 16);
LABEL_53:
  if ( !byte_1801D1908 )
    RtlReleaseSRWLockExclusive(&v6[v19 + 92]);
  if ( !(_DWORD)v7 )
    RtlStdReleaseStackTrace(v6, v15);
LABEL_9:
  *((_WORD *)Heap + 1) = v7;
  *((_WORD *)Heap + 22) = WORD1(v7);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, (signed __int64)Heap, -1LL) == -1 )
  {
    v8 = *(_QWORD *)a1;
    v9 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( v9 )
    {
      while ( v5 < 8 )
      {
        v10 = &v9[8 * v5];
        if ( !*(_QWORD *)v10 )
        {
          if ( v10 )
            *(_QWORD *)v10 = &RtlCriticalSectionLock;
          break;
        }
        ++v5;
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&RtlCriticalSectionLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&RtlCriticalSectionLock);
    v12 = (signed __int64 *)off_1801CB8D8;
    v13 = v8 + 16;
    if ( *off_1801CB8D8 != (_UNKNOWN *)&RtlCriticalSectionList )
      __fastfail(3u);
    *(_QWORD *)v13 = &RtlCriticalSectionList;
    *(_QWORD *)(v13 + 8) = v12;
    *v12 = v13;
    off_1801CB8D8 = (_UNKNOWN **)v13;
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  }
  else
  {
    RtlpFreeDebugInfo(Heap, j);
  }
}
