/*
 * XREFs of RtlInitializeResource @ 0x18009A370
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18009AEE0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18009BD70 (RtlInitializeCriticalSectionEx.c)
 *     RtlStdLogStackTrace @ 0x18009C890 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x18009CB10 (RtlStdReleaseStackTrace.c)
 *     RtlpFreeDebugInfo @ 0x1800F6260 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     NtCreateSemaphore @ 0x180163560 (NtCreateSemaphore.c)
 *     RtlpInterlockedPopEntrySList @ 0x180165A00 (RtlpInterlockedPopEntrySList.c)
 */

_WORD *__fastcall RtlInitializeResource(__int64 a1)
{
  __int64 Heap; // rdi
  void *ProcessHeap; // rcx
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // esi
  int v8; // esi
  __int64 v9; // rdx
  _WORD *result; // rax
  __int64 v11; // rax
  unsigned __int64 i; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // rdx
  unsigned int v16; // eax
  _DWORD *v17; // rcx
  unsigned __int64 j; // rdx
  __int64 v19; // r13
  char *SchedulerSharedDataSlot; // r10
  unsigned __int64 *v21; // rcx
  _QWORD *v22; // r15
  _QWORD *v23; // r8
  unsigned __int64 *v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+18h] BYREF
  __int64 v31; // [rsp+98h] [rbp+20h] BYREF

  v28 = 0LL;
  Handle = 0LL;
  Heap = (__int64)RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !Heap )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap )
      goto LABEL_42;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 0x30uLL);
  }
  if ( !Heap )
LABEL_42:
    RtlRaiseStatus(-1073741801);
  *(_DWORD *)(Heap + 36) = 0;
  v4 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v5) = 0;
    goto LABEL_7;
  }
  v11 = RtlStdLogStackTrace(RtlpStackTraceDatabase, 1LL);
  v14 = v11;
  if ( !v11 )
  {
    LODWORD(v5) = 0;
    goto LABEL_7;
  }
  v15 = *(unsigned __int16 *)(v11 + 14);
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
  j = v16 % *(_DWORD *)(v4 + 720);
  v19 = 2LL * (unsigned int)j;
  if ( !byte_1801D2908 )
  {
    j = v4 + 736 + 16LL * (unsigned int)j;
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
      {
        v21 = (unsigned __int64 *)&SchedulerSharedDataSlot[8 * (unsigned int)i];
        if ( !*v21 )
        {
          if ( v21 )
            *v21 = j;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)j, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(v4 + 736 + 8 * v19, j, (_QWORD *)i, v13);
  }
  if ( !*(_DWORD *)(v14 + 10) )
  {
    v22 = 0LL;
    v29 = 0LL;
    v31 = 0LL;
    if ( !byte_1801D2908 )
    {
      v23 = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v23 )
      {
        for ( j = 0LL; (unsigned int)j < 8; j = (unsigned int)(j + 1) )
        {
          v24 = &v23[(unsigned int)j];
          if ( !*v24 )
          {
            if ( v24 )
              *v24 = v4;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v4, j, v23, v13);
    }
    v25 = *(_QWORD *)(v4 + 152);
    v26 = *(_QWORD *)(v4 + 168) - 8LL;
    v29 = v25;
    if ( *(_BYTE *)(v4 + 128) )
    {
      if ( v26 < *(_QWORD *)(v4 + 160) )
      {
LABEL_38:
        if ( !byte_1801D2908 )
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)v4);
        if ( v22 )
        {
          *v22 = v14;
          v5 = (__int64)(*(_QWORD *)(v4 + 184) - (_QWORD)v22) >> 3;
          *(_WORD *)(v14 + 12) = v5;
          *(_WORD *)(v14 + 10) = WORD1(v5);
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
      v31 = 4096LL;
      if ( v25 - 4096 <= *(_QWORD *)(v4 + 144) )
        goto LABEL_38;
      v29 = v25 - 4096;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v29, 0LL, &v31, 4096, 4) < 0 )
        goto LABEL_38;
      *(_QWORD *)(v4 + 152) = v29;
    }
    ++*(_DWORD *)(v4 + 180);
    v22 = (_QWORD *)v26;
    *(_QWORD *)(v4 + 168) = v26;
    goto LABEL_38;
  }
  LODWORD(v5) = *(unsigned __int16 *)(v14 + 12) + (*(unsigned __int16 *)(v14 + 10) << 16);
LABEL_44:
  if ( !byte_1801D2908 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v4 + 736 + 8 * v19));
  if ( !(_DWORD)v5 )
    RtlStdReleaseStackTrace(v4, v14);
LABEL_7:
  *(_WORD *)(Heap + 2) = v5;
  *(_WORD *)(Heap + 44) = WORD1(v5);
  v7 = NtCreateSemaphore(&Handle, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v7 < 0 )
  {
    RtlpFreeDebugInfo(Heap, v6);
    RtlRaiseStatus(v7);
  }
  v8 = NtCreateSemaphore(&v28, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v8 < 0 )
  {
    NtClose(Handle);
    RtlpFreeDebugInfo(Heap, v27);
    RtlRaiseStatus(v8);
  }
  *(_QWORD *)(a1 + 40) = Handle;
  *(_QWORD *)(a1 + 56) = v28;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = Heap;
  RtlInitializeCriticalSectionEx(a1, 0LL, 0x8000000LL);
  RtlpAddDebugInfoToCriticalSection(a1, v9);
  result = *(_WORD **)a1;
  if ( *(_QWORD *)a1 != -1LL )
    *result = 1;
  return result;
}
