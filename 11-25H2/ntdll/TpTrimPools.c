/*
 * XREFs of TpTrimPools @ 0x1800F7360
 * Callers:
 *     LdrShutdownThread @ 0x180009100 (LdrShutdownThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlSleepConditionVariableSRW @ 0x18009DB90 (RtlSleepConditionVariableSRW.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtWaitForMultipleObjects @ 0x180163D70 (NtWaitForMultipleObjects.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
 */

void TpTrimPools()
{
  _UNKNOWN **v0; // r15
  _UNKNOWN **v1; // rbx
  _RTL_SRWLOCK *v2; // rbp
  _RTL_SRWLOCK *v3; // rsi
  char v4; // r13
  unsigned int v5; // r8d
  NTSTATUS v6; // r9d
  NTSTATUS v7; // eax
  char *Heap; // r12
  PVOID *v9; // r14
  __int64 v10; // rdi
  _QWORD **v11; // r8
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rcx
  ULONG v17; // r10d
  PVOID *v18; // rbx
  void **v19; // rsi
  void ***v20; // rdi
  void **v21; // rsi
  void ***v22; // rdi
  void **v23; // rcx
  void **v24; // rax
  void **v25; // rcx
  void **v26; // rax
  int WorkerFactoryInformation; // [rsp+70h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+78h] [rbp+10h] BYREF
  _RTL_SRWLOCK *v29; // [rsp+80h] [rbp+18h]

  WorkerFactoryInformation = 0;
  Timeout.QuadPart = -1000000LL;
  RtlAcquireSRWLockExclusive(&TppPoolpListLock);
  v0 = (_UNKNOWN **)TppPoolpList;
  while ( v0 != &TppPoolpList )
  {
    v1 = v0;
    v0 = (_UNKNOWN **)*v0;
    v2 = (_RTL_SRWLOCK *)(v1 - 2);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)v1 - 2);
    if ( *((_BYTE *)v1 - 7) )
      goto LABEL_4;
    v3 = (_RTL_SRWLOCK *)(v1 - 39);
    v29 = (_RTL_SRWLOCK *)(v1 - 39);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v1 - 39);
    WorkerFactoryInformation = 0;
    v4 = 1;
    if ( NtSetInformationWorkerFactory(*(v1 - 41), WorkerFactoryTimeoutWaiters, &WorkerFactoryInformation, 4u) >= 0
      && WorkerFactoryInformation )
    {
      v5 = *((_DWORD *)v1 + 13) & 0xFFFFF001 | (2 * (WorkerFactoryInformation & 0x7FF));
      v6 = 0;
      for ( *((_DWORD *)v1 + 13) = v5; ((v5 >> 11) & 0xFFE) < (v5 & 0xFFE); v6 = v7 )
      {
        if ( v6 == 258 )
          break;
        v7 = RtlSleepConditionVariableSRW((PRTL_CONDITION_VARIABLE)v1 + 8, (PRTL_SRWLOCK)v1 - 39, &Timeout, 0);
        v5 = *((_DWORD *)v1 + 13);
      }
      if ( (v5 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v1 + 13) = v5 & 0xFFFFF001;
        goto LABEL_30;
      }
      Heap = (char *)RtlAllocateHeap(
                       NtCurrentPeb()->ProcessHeap,
                       (TppHeapTag + 786432) | 8,
                       8 * (((unsigned __int64)v5 >> 12) & 0x7FF));
      if ( !Heap )
      {
        v21 = (void **)(v1 + 9);
        while ( 1 )
        {
          v22 = (void ***)*v21;
          if ( *v21 == v21 )
            break;
          v23 = *v22;
          if ( (*v22)[1] != v22 || (v24 = v22[1], *v24 != v22) )
LABEL_17:
            __fastfail(3u);
          *v24 = v23;
          v23[1] = v24;
          NtClose(v22[2]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v22);
        }
        *((_DWORD *)v1 + 13) &= 0xFF800001;
LABEL_29:
        v3 = v29;
        goto LABEL_30;
      }
      v9 = (PVOID *)RtlAllocateHeap(
                      NtCurrentPeb()->ProcessHeap,
                      (TppHeapTag + 786432) | 8,
                      8 * (((unsigned __int64)*((unsigned int *)v1 + 13) >> 12) & 0x7FF));
      if ( v9 )
      {
        v10 = 0LL;
        v11 = (_QWORD **)(v1 + 9);
        while ( 1 )
        {
          v12 = *v11;
          if ( *v11 == v11 )
            break;
          *(_QWORD *)&Heap[8 * v10] = v12[2];
          v9[v10] = v12;
          v13 = *v12;
          if ( *(_QWORD **)(*v12 + 8LL) != v12 )
            goto LABEL_17;
          v14 = (_QWORD *)v12[1];
          if ( (_QWORD *)*v14 != v12 )
            goto LABEL_17;
          *v14 = v13;
          v10 = (unsigned int)(v10 + 1);
          *(_QWORD *)(v13 + 8) = v14;
        }
        *((_DWORD *)v1 + 13) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v1 - 39);
        RtlReleaseSRWLockShared((PRTL_SRWLOCK)v1 - 2);
        v4 = 0;
        v15 = 0;
        do
        {
          v16 = v15 << 6;
          if ( (unsigned int)v16 >= (unsigned int)v10 )
            break;
          v17 = (int)v16 + 64 <= (unsigned int)v10 ? 64 : v10 & 0x3F;
          if ( NtWaitForMultipleObjects(v17, (HANDLE *)&Heap[8 * v16], WaitAll, 0, &Timeout) == 258 )
            break;
          ++v15;
        }
        while ( v15 <= (unsigned int)v10 >> 6 );
        if ( (_DWORD)v10 )
        {
          v18 = v9;
          do
          {
            NtClose(*(PVOID *)((char *)v18 + Heap - (char *)v9));
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *v18++);
            --v10;
          }
          while ( v10 );
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v9);
      }
      else
      {
        v19 = (void **)(v1 + 9);
        while ( 1 )
        {
          v20 = (void ***)*v19;
          if ( *v19 == v19 )
            break;
          v25 = *v20;
          if ( (*v20)[1] != v20 )
            goto LABEL_17;
          v26 = v20[1];
          if ( *v26 != v20 )
            goto LABEL_17;
          *v26 = v25;
          v25[1] = v26;
          NtClose(v20[2]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v20);
        }
        *((_DWORD *)v1 + 13) &= 0xFF800001;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
      if ( v4 )
        goto LABEL_29;
    }
    else
    {
LABEL_30:
      RtlReleaseSRWLockExclusive(v3);
LABEL_4:
      RtlReleaseSRWLockShared(v2);
    }
  }
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}
