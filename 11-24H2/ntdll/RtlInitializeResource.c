/*
 * XREFs of RtlInitializeResource @ 0x18002F1C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002FD30 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x180030BC0 (RtlInitializeCriticalSectionEx.c)
 *     RtlStdLogStackTrace @ 0x180030E50 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1800310D0 (RtlStdReleaseStackTrace.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpFreeDebugInfo @ 0x1800F07C0 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 *     NtCreateSemaphore @ 0x180161920 (NtCreateSemaphore.c)
 *     RtlpInterlockedPopEntrySList @ 0x180163DC0 (RtlpInterlockedPopEntrySList.c)
 */

void __cdecl RtlInitializeResource(PRTL_RESOURCE Resource)
{
  _RTL_CRITICAL_SECTION_DEBUG *Heap; // rdi
  void *ProcessHeap; // rcx
  PRTL_SRWLOCK v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // esi
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rdx
  unsigned int v12; // eax
  _DWORD *v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // r13
  volatile signed __int32 *v16; // rdx
  char *SchedulerSharedDataSlot; // r10
  unsigned int i; // r8d
  volatile signed __int32 **v19; // rcx
  _QWORD *v20; // r15
  char *v21; // r8
  unsigned int j; // edx
  PRTL_SRWLOCK *v23; // rcx
  char *Value; // rcx
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  HANDLE v27; // [rsp+30h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF
  HANDLE SemaphoreHandle; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+20h] BYREF

  v27 = 0LL;
  SemaphoreHandle = 0LL;
  Heap = (_RTL_CRITICAL_SECTION_DEBUG *)RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !Heap )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap )
      goto LABEL_42;
    Heap = (_RTL_CRITICAL_SECTION_DEBUG *)RtlAllocateHeap(ProcessHeap, 0, 0x30uLL);
  }
  if ( !Heap )
LABEL_42:
    RtlRaiseStatus(-1073741801);
  Heap->ContentionCount = 0;
  v4 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v5) = 0;
    goto LABEL_7;
  }
  v9 = RtlStdLogStackTrace(RtlpStackTraceDatabase, 1LL);
  v10 = v9;
  if ( !v9 )
  {
    LODWORD(v5) = 0;
    goto LABEL_7;
  }
  v11 = *(unsigned __int16 *)(v9 + 14);
  v12 = 0;
  if ( (_WORD)v11 )
  {
    v13 = (_DWORD *)(v10 + 16);
    do
    {
      v12 += *v13;
      v13 += 2;
      --v11;
    }
    while ( v11 );
  }
  v14 = v12 % *(_DWORD *)&v4[90].0;
  v15 = 2LL * v14;
  if ( !byte_1801D1908 )
  {
    v16 = (volatile signed __int32 *)&v4[2 * v14 + 92];
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v19 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
        if ( !*v19 )
        {
          if ( v19 )
            *v19 = v16;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64(v16, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&v4[v15 + 92]);
  }
  if ( !*(_DWORD *)(v10 + 10) )
  {
    v20 = 0LL;
    BaseAddress = 0LL;
    RegionSize = 0LL;
    if ( !byte_1801D1908 )
    {
      v21 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v21 )
      {
        for ( j = 0; j < 8; ++j )
        {
          v23 = (PRTL_SRWLOCK *)&v21[8 * j];
          if ( !*v23 )
          {
            if ( v23 )
              *v23 = v4;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v4);
    }
    Value = (char *)v4[19].Value;
    v25 = v4[21].Value - 8;
    BaseAddress = Value;
    if ( v4[16].0 )
    {
      if ( v25 < v4[20].Value )
      {
LABEL_38:
        if ( !byte_1801D1908 )
          RtlReleaseSRWLockExclusive(v4);
        if ( v20 )
        {
          *v20 = v10;
          v5 = (__int64)(v4[23].Value - (_QWORD)v20) >> 3;
          *(_WORD *)(v10 + 12) = v5;
          *(_WORD *)(v10 + 10) = WORD1(v5);
        }
        else
        {
          LODWORD(v5) = 0;
        }
        goto LABEL_44;
      }
    }
    else if ( v25 < (unsigned __int64)Value )
    {
      RegionSize = 4096LL;
      if ( (unsigned __int64)(Value - 4096) <= v4[18].Value )
        goto LABEL_38;
      BaseAddress = Value - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_38;
      v4[19].Value = (unsigned __int64)BaseAddress;
    }
    ++HIDWORD(v4[22].Ptr);
    v20 = (_QWORD *)v25;
    v4[21].Value = v25;
    goto LABEL_38;
  }
  LODWORD(v5) = *(unsigned __int16 *)(v10 + 12) + (*(unsigned __int16 *)(v10 + 10) << 16);
LABEL_44:
  if ( !byte_1801D1908 )
    RtlReleaseSRWLockExclusive(&v4[v15 + 92]);
  if ( !(_DWORD)v5 )
    RtlStdReleaseStackTrace(v4, v10);
LABEL_7:
  Heap->CreatorBackTraceIndex = v5;
  Heap->CreatorBackTraceIndexHigh = WORD1(v5);
  v7 = NtCreateSemaphore(&SemaphoreHandle, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v7 < 0 )
  {
    RtlpFreeDebugInfo(Heap, v6);
    RtlRaiseStatus(v7);
  }
  v8 = NtCreateSemaphore(&v27, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v8 < 0 )
  {
    NtClose(SemaphoreHandle);
    RtlpFreeDebugInfo(Heap, v26);
    RtlRaiseStatus(v8);
  }
  Resource->SharedSemaphore = SemaphoreHandle;
  Resource->ExclusiveSemaphore = v27;
  Resource->NumberOfWaitingShared = 0;
  *(_QWORD *)&Resource->NumberOfWaitingExclusive = 0LL;
  Resource->ExclusiveOwnerThread = 0LL;
  Resource->Flags = 0;
  Resource->DebugInfo = Heap;
  RtlInitializeCriticalSectionEx(&Resource->CriticalSection, 0, 0x8000000u);
  RtlpAddDebugInfoToCriticalSection(Resource);
  if ( Resource->CriticalSection.DebugInfo != (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
    Resource->CriticalSection.DebugInfo->Type = 1;
}
