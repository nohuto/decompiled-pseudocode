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

_WORD *__fastcall RtlInitializeResource(__int64 a1)
{
  PSLIST_ENTRY Heap; // rdi
  void *ProcessHeap; // rcx
  __int64 v4; // rbp
  __int64 v5; // rsi
  int v6; // esi
  int v7; // esi
  __int64 v8; // rdx
  _WORD *result; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  unsigned int v13; // eax
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // r13
  volatile signed __int32 *v17; // rdx
  char *SchedulerSharedDataSlot; // r10
  unsigned int i; // r8d
  volatile signed __int32 **v20; // rcx
  _QWORD *v21; // r15
  char *v22; // r8
  unsigned int j; // edx
  __int64 *v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  __int64 v27; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+18h] BYREF
  __int64 v30; // [rsp+98h] [rbp+20h] BYREF

  v27 = 0LL;
  Handle = 0LL;
  Heap = RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !Heap )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap )
      goto LABEL_42;
    Heap = (PSLIST_ENTRY)RtlAllocateHeap(ProcessHeap);
  }
  if ( !Heap )
LABEL_42:
    RtlRaiseStatus(3221225495LL);
  HIDWORD(Heap[2].Next) = 0;
  v4 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v5) = 0;
    goto LABEL_7;
  }
  v10 = RtlStdLogStackTrace(RtlpStackTraceDatabase, 1LL);
  v11 = v10;
  if ( !v10 )
  {
    LODWORD(v5) = 0;
    goto LABEL_7;
  }
  v12 = *(unsigned __int16 *)(v10 + 14);
  v13 = 0;
  if ( (_WORD)v12 )
  {
    v14 = (_DWORD *)(v11 + 16);
    do
    {
      v13 += *v14;
      v14 += 2;
      --v12;
    }
    while ( v12 );
  }
  v15 = v13 % *(_DWORD *)(v4 + 720);
  v16 = 2LL * v15;
  if ( !byte_1801D4988 )
  {
    v17 = (volatile signed __int32 *)(v4 + 736 + 16LL * v15);
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v20 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
        if ( !*v20 )
        {
          if ( v20 )
            *v20 = v17;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64(v17, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(v4 + 736 + 8 * v16);
  }
  if ( !*(_DWORD *)(v11 + 10) )
  {
    v21 = 0LL;
    v28 = 0LL;
    v30 = 0LL;
    if ( !byte_1801D4988 )
    {
      v22 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v22 )
      {
        for ( j = 0; j < 8; ++j )
        {
          v24 = (__int64 *)&v22[8 * j];
          if ( !*v24 )
          {
            if ( v24 )
              *v24 = v4;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v4);
    }
    v25 = *(_QWORD *)(v4 + 152);
    v26 = *(_QWORD *)(v4 + 168) - 8LL;
    v28 = v25;
    if ( *(_BYTE *)(v4 + 128) )
    {
      if ( v26 < *(_QWORD *)(v4 + 160) )
      {
LABEL_38:
        if ( !byte_1801D4988 )
          RtlReleaseSRWLockExclusive(v4);
        if ( v21 )
        {
          *v21 = v11;
          v5 = (__int64)(*(_QWORD *)(v4 + 184) - (_QWORD)v21) >> 3;
          *(_WORD *)(v11 + 12) = v5;
          *(_WORD *)(v11 + 10) = WORD1(v5);
        }
        else
        {
          LODWORD(v5) = 0;
        }
        goto LABEL_44;
      }
    }
    else if ( v26 < v25 )
    {
      v30 = 4096LL;
      if ( v25 - 4096 <= *(_QWORD *)(v4 + 144) )
        goto LABEL_38;
      v28 = v25 - 4096;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v28, 0LL, &v30, 4096, 4) < 0 )
        goto LABEL_38;
      *(_QWORD *)(v4 + 152) = v28;
    }
    ++*(_DWORD *)(v4 + 180);
    v21 = (_QWORD *)v26;
    *(_QWORD *)(v4 + 168) = v26;
    goto LABEL_38;
  }
  LODWORD(v5) = *(unsigned __int16 *)(v11 + 12) + (*(unsigned __int16 *)(v11 + 10) << 16);
LABEL_44:
  if ( !byte_1801D4988 )
    RtlReleaseSRWLockExclusive(v4 + 736 + 8 * v16);
  if ( !(_DWORD)v5 )
    RtlStdReleaseStackTrace(v4, v11);
LABEL_7:
  WORD1(Heap->Next) = v5;
  *((_WORD *)&Heap[2].Next + 6) = WORD1(v5);
  v6 = NtCreateSemaphore(&Handle, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v6 < 0 )
  {
    RtlpFreeDebugInfo(Heap);
    RtlRaiseStatus((unsigned int)v6);
  }
  v7 = NtCreateSemaphore(&v27, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v7 < 0 )
  {
    NtClose(Handle);
    RtlpFreeDebugInfo(Heap);
    RtlRaiseStatus((unsigned int)v7);
  }
  *(_QWORD *)(a1 + 40) = Handle;
  *(_QWORD *)(a1 + 56) = v27;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = Heap;
  RtlInitializeCriticalSectionEx(a1, 0LL, 0x8000000LL);
  RtlpAddDebugInfoToCriticalSection(a1, v8);
  result = *(_WORD **)a1;
  if ( *(_QWORD *)a1 != -1LL )
    *result = 1;
  return result;
}
