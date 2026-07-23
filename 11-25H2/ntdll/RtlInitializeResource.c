/*
 * XREFs of RtlInitializeResource @ 0x1800059E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x180006550 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x1800073E0 (RtlInitializeCriticalSectionEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlStdLogStackTrace @ 0x180025840 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x180025AC0 (RtlStdReleaseStackTrace.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpFreeDebugInfo @ 0x1800F7DE0 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     NtCreateSemaphore @ 0x180164AF0 (NtCreateSemaphore.c)
 *     RtlpInterlockedPopEntrySList @ 0x180166F90 (RtlpInterlockedPopEntrySList.c)
 */

void __cdecl RtlInitializeResource(PRTL_RESOURCE Resource)
{
  _RTL_CRITICAL_SECTION_DEBUG *Heap; // rdi
  void *ProcessHeap; // rcx
  PRTL_SRWLOCK v4; // rbp
  __int64 v5; // rsi
  int v6; // esi
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned int v11; // eax
  _DWORD *v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // r13
  volatile signed __int32 *v15; // rdx
  char *SchedulerSharedDataSlot; // r10
  unsigned int i; // r8d
  volatile signed __int32 **v18; // rcx
  _QWORD *v19; // r15
  char *v20; // r8
  unsigned int j; // edx
  PRTL_SRWLOCK *v22; // rcx
  char *Value; // rcx
  unsigned __int64 v24; // rsi
  HANDLE v25; // [rsp+30h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF
  HANDLE SemaphoreHandle; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+20h] BYREF

  v25 = 0LL;
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
  v8 = RtlStdLogStackTrace(RtlpStackTraceDatabase, 1LL);
  v9 = v8;
  if ( !v8 )
  {
    LODWORD(v5) = 0;
    goto LABEL_7;
  }
  v10 = *(unsigned __int16 *)(v8 + 14);
  v11 = 0;
  if ( (_WORD)v10 )
  {
    v12 = (_DWORD *)(v9 + 16);
    do
    {
      v11 += *v12;
      v12 += 2;
      --v10;
    }
    while ( v10 );
  }
  v13 = v11 % *(_DWORD *)&v4[90].0;
  v14 = 2LL * v13;
  if ( !byte_1801D4988 )
  {
    v15 = (volatile signed __int32 *)&v4[2 * v13 + 92];
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v18 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
        if ( !*v18 )
        {
          if ( v18 )
            *v18 = v15;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64(v15, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&v4[v14 + 92]);
  }
  if ( !*(_DWORD *)(v9 + 10) )
  {
    v19 = 0LL;
    BaseAddress = 0LL;
    RegionSize = 0LL;
    if ( !byte_1801D4988 )
    {
      v20 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v20 )
      {
        for ( j = 0; j < 8; ++j )
        {
          v22 = (PRTL_SRWLOCK *)&v20[8 * j];
          if ( !*v22 )
          {
            if ( v22 )
              *v22 = v4;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v4);
    }
    Value = (char *)v4[19].Value;
    v24 = v4[21].Value - 8;
    BaseAddress = Value;
    if ( v4[16].0 )
    {
      if ( v24 < v4[20].Value )
      {
LABEL_38:
        if ( !byte_1801D4988 )
          RtlReleaseSRWLockExclusive(v4);
        if ( v19 )
        {
          *v19 = v9;
          v5 = (__int64)(v4[23].Value - (_QWORD)v19) >> 3;
          *(_WORD *)(v9 + 12) = v5;
          *(_WORD *)(v9 + 10) = WORD1(v5);
        }
        else
        {
          LODWORD(v5) = 0;
        }
        goto LABEL_44;
      }
    }
    else if ( v24 < (unsigned __int64)Value )
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
    v19 = (_QWORD *)v24;
    v4[21].Value = v24;
    goto LABEL_38;
  }
  LODWORD(v5) = *(unsigned __int16 *)(v9 + 12) + (*(unsigned __int16 *)(v9 + 10) << 16);
LABEL_44:
  if ( !byte_1801D4988 )
    RtlReleaseSRWLockExclusive(&v4[v14 + 92]);
  if ( !(_DWORD)v5 )
    RtlStdReleaseStackTrace(v4, v9);
LABEL_7:
  Heap->CreatorBackTraceIndex = v5;
  Heap->CreatorBackTraceIndexHigh = WORD1(v5);
  v6 = NtCreateSemaphore(&SemaphoreHandle, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v6 < 0 )
  {
    RtlpFreeDebugInfo(Heap);
    RtlRaiseStatus(v6);
  }
  v7 = NtCreateSemaphore(&v25, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v7 < 0 )
  {
    NtClose(SemaphoreHandle);
    RtlpFreeDebugInfo(Heap);
    RtlRaiseStatus(v7);
  }
  Resource->SharedSemaphore = SemaphoreHandle;
  Resource->ExclusiveSemaphore = v25;
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
