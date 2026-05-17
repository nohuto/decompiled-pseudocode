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

PSLIST_ENTRY __fastcall RtlpAddDebugInfoToCriticalSection(__int64 a1)
{
  PSLIST_ENTRY result; // rax
  signed __int64 v3; // rbx
  _SLIST_ENTRY *Next; // rcx
  unsigned int v5; // edi
  __int64 v6; // rbp
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
  unsigned int v19; // edx
  __int64 v20; // r13
  volatile signed __int32 *v21; // rdx
  char *SchedulerSharedDataSlot; // r10
  unsigned int i; // r8d
  volatile signed __int32 **v24; // rcx
  _QWORD *v25; // r12
  char *v26; // r8
  unsigned int j; // edx
  __int64 *v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // [rsp+78h] [rbp+10h] BYREF
  __int64 v32; // [rsp+80h] [rbp+18h] BYREF

  result = RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  v3 = (signed __int64)result;
  if ( !result )
  {
    result = (PSLIST_ENTRY)NtCurrentPeb();
    Next = result[3].Next;
    if ( !Next )
    {
LABEL_50:
      _InterlockedIncrement(&RtlFailedCriticalDebugAllocations);
      return result;
    }
    result = (PSLIST_ENTRY)RtlAllocateHeap(Next);
    v3 = (signed __int64)result;
  }
  if ( !v3 )
    goto LABEL_50;
  v5 = 0;
  *(_WORD *)v3 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
    *(_WORD *)v3 = 1;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 8) = a1;
  *(_DWORD *)(v3 + 40) = 0;
  *(_WORD *)(v3 + 46) = 17235;
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
  v19 = v17 % *(_DWORD *)(v6 + 720);
  v20 = 2LL * v19;
  if ( !byte_1801D4988 )
  {
    v21 = (volatile signed __int32 *)(v6 + 736 + 16LL * v19);
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v24 = (volatile signed __int32 **)&SchedulerSharedDataSlot[8 * i];
        if ( !*v24 )
        {
          if ( v24 )
            *v24 = v21;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64(v21, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(v6 + 736 + 8 * v20);
  }
  if ( !*(_DWORD *)(v15 + 10) )
  {
    v25 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    if ( !byte_1801D4988 )
    {
      v26 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v26 )
      {
        for ( j = 0; j < 8; ++j )
        {
          v28 = (__int64 *)&v26[8 * j];
          if ( !*v28 )
          {
            if ( v28 )
              *v28 = v6;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v6);
    }
    v29 = *(_QWORD *)(v6 + 152);
    v30 = *(_QWORD *)(v6 + 168) - 8LL;
    v31 = v29;
    if ( *(_BYTE *)(v6 + 128) )
    {
      if ( v30 < *(_QWORD *)(v6 + 160) )
      {
LABEL_45:
        if ( !byte_1801D4988 )
          RtlReleaseSRWLockExclusive(v6);
        if ( v25 )
        {
          *v25 = v15;
          v7 = (__int64)(*(_QWORD *)(v6 + 184) - (_QWORD)v25) >> 3;
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
    else if ( v30 < v29 )
    {
      v32 = 4096LL;
      if ( v29 - 4096 <= *(_QWORD *)(v6 + 144) )
        goto LABEL_45;
      v31 = v29 - 4096;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v31, 0LL, &v32, 4096, 4) < 0 )
        goto LABEL_45;
      *(_QWORD *)(v6 + 152) = v31;
    }
    ++*(_DWORD *)(v6 + 180);
    v25 = (_QWORD *)v30;
    *(_QWORD *)(v6 + 168) = v30;
    goto LABEL_45;
  }
  LODWORD(v7) = *(unsigned __int16 *)(v15 + 12) + (*(unsigned __int16 *)(v15 + 10) << 16);
LABEL_53:
  if ( !byte_1801D4988 )
    RtlReleaseSRWLockExclusive(v6 + 736 + 8 * v20);
  if ( !(_DWORD)v7 )
    RtlStdReleaseStackTrace(v6, v15);
LABEL_9:
  *(_WORD *)(v3 + 2) = v7;
  *(_WORD *)(v3 + 44) = WORD1(v7);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, v3, -1LL) != -1 )
    return (PSLIST_ENTRY)RtlpFreeDebugInfo(v3);
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
  v12 = (signed __int64 *)off_1801CE8D8;
  v13 = v8 + 16;
  if ( *off_1801CE8D8 != (_UNKNOWN *)&RtlCriticalSectionList )
    __fastfail(3u);
  *(_QWORD *)v13 = &RtlCriticalSectionList;
  *(_QWORD *)(v13 + 8) = v12;
  *v12 = v13;
  off_1801CE8D8 = (_UNKNOWN **)v13;
  return (PSLIST_ENTRY)RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
}
