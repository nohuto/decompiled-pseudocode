/*
 * XREFs of RtlpAddDebugInfoToCriticalSection @ 0x18009AEE0
 * Callers:
 *     RtlInitializeCriticalSectionAndSpinCount @ 0x180098E70 (RtlInitializeCriticalSectionAndSpinCount.c)
 *     RtlInitializeCriticalSection @ 0x180099000 (RtlInitializeCriticalSection.c)
 *     RtlInitializeResource @ 0x18009A370 (RtlInitializeResource.c)
 *     RtlpWaitOnCriticalSection @ 0x18009A7A0 (RtlpWaitOnCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18009BD70 (RtlInitializeCriticalSectionEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlStdLogStackTrace @ 0x18009C890 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x18009CB10 (RtlStdReleaseStackTrace.c)
 *     RtlpFreeDebugInfo @ 0x1800F6260 (RtlpFreeDebugInfo.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     RtlpInterlockedPopEntrySList @ 0x180165A00 (RtlpInterlockedPopEntrySList.c)
 */

struct _PEB *__fastcall RtlpAddDebugInfoToCriticalSection(__int64 a1)
{
  struct _PEB *result; // rax
  unsigned __int64 j; // rdx
  unsigned __int64 i; // r8
  unsigned __int64 v5; // r9
  signed __int64 v6; // rbx
  __int64 ProcessHeap; // rcx
  unsigned int v8; // edi
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  volatile signed __int64 v11; // rbx
  char *v12; // rdx
  char *v13; // rcx
  signed __int64 *v15; // rax
  signed __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rdx
  unsigned int v20; // eax
  _DWORD *v21; // rcx
  __int64 v22; // r13
  char *SchedulerSharedDataSlot; // r10
  unsigned __int64 *v24; // rcx
  _QWORD *v25; // r12
  unsigned __int64 *v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // [rsp+78h] [rbp+10h] BYREF
  __int64 v30; // [rsp+80h] [rbp+18h] BYREF

  result = (struct _PEB *)RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  v6 = (signed __int64)result;
  if ( !result )
  {
    result = NtCurrentPeb();
    ProcessHeap = (__int64)result->ProcessHeap;
    if ( !ProcessHeap )
    {
LABEL_50:
      _InterlockedIncrement(&RtlFailedCriticalDebugAllocations);
      return result;
    }
    result = (struct _PEB *)RtlAllocateHeap(ProcessHeap, 0, 0x30uLL);
    v6 = (signed __int64)result;
  }
  if ( !v6 )
    goto LABEL_50;
  v8 = 0;
  *(_WORD *)v6 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
    *(_WORD *)v6 = 1;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_QWORD *)(v6 + 8) = a1;
  *(_DWORD *)(v6 + 40) = 0;
  *(_WORD *)(v6 + 46) = 17235;
  v9 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v10) = 0;
    goto LABEL_9;
  }
  v17 = RtlStdLogStackTrace(RtlpStackTraceDatabase, 2LL);
  v18 = v17;
  if ( !v17 )
  {
    LODWORD(v10) = 0;
    goto LABEL_9;
  }
  v19 = *(unsigned __int16 *)(v17 + 14);
  v20 = 0;
  if ( (_WORD)v19 )
  {
    v21 = (_DWORD *)(v18 + 16);
    do
    {
      v20 += *v21;
      v21 += 2;
      --v19;
    }
    while ( v19 );
  }
  j = v20 % *(_DWORD *)(v9 + 720);
  v22 = 2LL * (unsigned int)j;
  if ( !byte_1801D2908 )
  {
    j = v9 + 736 + 16LL * (unsigned int)j;
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
      {
        v24 = (unsigned __int64 *)&SchedulerSharedDataSlot[8 * (unsigned int)i];
        if ( !*v24 )
        {
          if ( v24 )
            *v24 = j;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)j, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(v9 + 736 + 8 * v22, j, (_QWORD *)i, v5);
  }
  if ( !*(_DWORD *)(v18 + 10) )
  {
    v25 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    if ( !byte_1801D2908 )
    {
      i = (unsigned __int64)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( i )
      {
        for ( j = 0LL; (unsigned int)j < 8; j = (unsigned int)(j + 1) )
        {
          v26 = (unsigned __int64 *)(i + 8LL * (unsigned int)j);
          if ( !*v26 )
          {
            if ( v26 )
              *v26 = v9;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v9, j, (_QWORD *)i, v5);
    }
    v27 = *(_QWORD *)(v9 + 152);
    v28 = *(_QWORD *)(v9 + 168) - 8LL;
    v29 = v27;
    if ( *(_BYTE *)(v9 + 128) )
    {
      if ( v28 < *(_QWORD *)(v9 + 160) )
      {
LABEL_45:
        if ( !byte_1801D2908 )
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)v9);
        if ( v25 )
        {
          *v25 = v18;
          v10 = (__int64)(*(_QWORD *)(v9 + 184) - (_QWORD)v25) >> 3;
          *(_WORD *)(v18 + 12) = v10;
          *(_WORD *)(v18 + 10) = WORD1(v10);
        }
        else
        {
          LODWORD(v10) = 0;
        }
        goto LABEL_53;
      }
    }
    else if ( v28 < v27 )
    {
      v30 = 4096LL;
      if ( v27 - 4096 <= *(_QWORD *)(v9 + 144) )
        goto LABEL_45;
      v29 = v27 - 4096;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v29, 0LL, &v30, 4096, 4) < 0 )
        goto LABEL_45;
      *(_QWORD *)(v9 + 152) = v29;
    }
    ++*(_DWORD *)(v9 + 180);
    v25 = (_QWORD *)v28;
    *(_QWORD *)(v9 + 168) = v28;
    goto LABEL_45;
  }
  LODWORD(v10) = *(unsigned __int16 *)(v18 + 12) + (*(unsigned __int16 *)(v18 + 10) << 16);
LABEL_53:
  if ( !byte_1801D2908 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v9 + 736 + 8 * v22));
  if ( !(_DWORD)v10 )
    RtlStdReleaseStackTrace(v9, v18);
LABEL_9:
  *(_WORD *)(v6 + 2) = v10;
  *(_WORD *)(v6 + 44) = WORD1(v10);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6, -1LL) != -1 )
    return (struct _PEB *)RtlpFreeDebugInfo(v6, j);
  v11 = *(_QWORD *)a1;
  v12 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v12 )
  {
    while ( v8 < 8 )
    {
      v13 = &v12[8 * v8];
      if ( !*(_QWORD *)v13 )
      {
        if ( v13 )
          *(_QWORD *)v13 = &RtlCriticalSectionLock;
        break;
      }
      ++v8;
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&RtlCriticalSectionLock, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(
      (unsigned __int64)&RtlCriticalSectionLock,
      (unsigned __int64)v12,
      (_QWORD *)i,
      v5);
  v15 = (signed __int64 *)off_1801CC8D8;
  v16 = v11 + 16;
  if ( *off_1801CC8D8 != (_UNKNOWN *)&RtlCriticalSectionList )
    __fastfail(3u);
  *(_QWORD *)v16 = &RtlCriticalSectionList;
  *(_QWORD *)(v16 + 8) = v15;
  *v15 = v16;
  off_1801CC8D8 = (_UNKNOWN **)v16;
  return (struct _PEB *)RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
}
