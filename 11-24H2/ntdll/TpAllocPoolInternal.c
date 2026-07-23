/*
 * XREFs of TpAllocPoolInternal @ 0x180085914
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x180047E60 (TppPoolpReferenceGlobalPool.c)
 *     LdrpEnableParallelLoading @ 0x180085804 (LdrpEnableParallelLoading.c)
 *     TpAllocPool @ 0x180086D10 (TpAllocPool.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     TppPoolUpdateNodeRelation @ 0x180085F2C (TppPoolUpdateNodeRelation.c)
 *     TppInitializeTimerQueue @ 0x1800860C0 (TppInitializeTimerQueue.c)
 *     TpSetPoolThreadCpuSets @ 0x180086140 (TpSetPoolThreadCpuSets.c)
 *     TppETWPoolCreate @ 0x1800861F8 (TppETWPoolCreate.c)
 *     TppGetCurrentThreadNumaNode @ 0x18008B710 (TppGetCurrentThreadNumaNode.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtCreateIoCompletion @ 0x180161680 (NtCreateIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x180161AE0 (NtCreateWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x180163660 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpAllocPoolInternal(_QWORD *a1, char a2)
{
  _QWORD *v2; // rsi
  SIZE_T StackReserve; // r13
  SIZE_T StackCommit; // r14
  struct _PEB *v5; // rax
  SIZE_T MinimumStackCommit; // rcx
  _DWORD *Heap; // rdi
  unsigned int v8; // r8d
  _QWORD *v9; // r10
  __int64 v10; // r9
  unsigned int i; // r8d
  char *v12; // rdx
  PVOID v13; // rax
  PVOID v14; // rax
  int *v15; // r15
  unsigned int v16; // esi
  NTSTATUS updated; // ebx
  ULONG v18; // r9d
  HANDLE *v19; // r12
  int v20; // eax
  ULONG MaxThreadCount; // eax
  HANDLE *v22; // rsi
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  void *v26; // r8
  void *v27; // r8
  int v29; // [rsp+50h] [rbp-58h]
  char *BaseAddress; // [rsp+58h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h]
  int WorkerFactoryInformation; // [rsp+B8h] [rbp+10h] BYREF
  PIMAGE_NT_HEADERS Flags; // [rsp+C0h] [rbp+18h] BYREF
  PVOID StartParameter; // [rsp+C8h] [rbp+20h]

  v2 = a1;
  BaseAddress = 0LL;
  *a1 = 0LL;
  WorkerFactoryInformation = a2 & 1;
  Flags = 0LL;
  RtlImageNtHeaderEx(1u, NtCurrentPeb()->ImageBaseAddress, 0LL, &Flags);
  if ( !Flags )
    return (unsigned int)-1073741701;
  if ( Flags->OptionalHeader.Magic == 523 )
  {
    StackReserve = Flags->OptionalHeader.SizeOfStackReserve;
    StackCommit = Flags->OptionalHeader.SizeOfStackCommit;
  }
  else
  {
    StackReserve = LODWORD(Flags->OptionalHeader.SizeOfStackReserve);
    StackCommit = HIDWORD(Flags->OptionalHeader.SizeOfStackReserve);
  }
  v5 = NtCurrentPeb();
  MinimumStackCommit = v5->MinimumStackCommit;
  if ( MinimumStackCommit && StackCommit < MinimumStackCommit )
    StackCommit = v5->MinimumStackCommit;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 0x1D8uLL);
  StartParameter = Heap;
  if ( !Heap )
    goto LABEL_37;
  LODWORD(Flags) = TppHeapTag + 786432;
  BaseAddress = (char *)RtlAllocateHeap(
                          NtCurrentPeb()->ProcessHeap,
                          TppHeapTag + 786432,
                          72LL * (unsigned int)TppNumberNodes);
  if ( !BaseAddress )
  {
    updated = -1073741801;
    v29 = -1073741801;
    Heap = StartParameter;
    goto LABEL_42;
  }
  v8 = 0;
  v9 = StartParameter;
  v10 = (unsigned int)TppNumberNodes;
  while ( v8 < 3 )
  {
    v9[v8 + 2] = &BaseAddress[24 * (unsigned int)v10 * v8];
    ++v8;
  }
  for ( i = 0; i < 3 * (int)v10; ++i )
  {
    v12 = &BaseAddress[24 * i];
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 1) = v12;
    *(_QWORD *)v12 = v12;
  }
  v13 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 4 * v10);
  Heap = StartParameter;
  *((_QWORD *)StartParameter + 5) = v13;
  if ( !v13
    || (v14 = RtlAllocateHeap(
                NtCurrentPeb()->ProcessHeap,
                (TppHeapTag + 786432) | 8,
                16 * (unsigned int)TppNumberNodes * (unsigned __int64)(unsigned int)TppMaximumGroups),
        Heap = StartParameter,
        (*((_QWORD *)StartParameter + 6) = v14) == 0LL) )
  {
LABEL_37:
    updated = -1073741801;
    v29 = -1073741801;
    goto LABEL_42;
  }
  v15 = Heap + 110;
  v16 = Heap[110];
  if ( !v16 )
    v16 = MEMORY[0x7FFE03C0];
  Heap = StartParameter;
  *((_DWORD *)StartParameter + 106) = v16;
  updated = TppPoolUpdateNodeRelation(Heap);
  v29 = updated;
  if ( updated >= 0 )
  {
    Heap[107] = -2;
    *((_QWORD *)Heap + 1) = (unsigned __int16)v16;
    *Heap = 1;
    v18 = v16 + 1;
    if ( v16 < 4 )
      v18 = 4;
    v19 = (HANDLE *)(Heap + 16);
    updated = NtCreateIoCompletion((PHANDLE)Heap + 8, 0x1F0003u, 0LL, v18);
    v29 = updated;
    if ( updated >= 0 )
    {
      v20 = *v15;
      if ( !*v15 )
        v20 = MEMORY[0x7FFE03C0];
      MaxThreadCount = 4 * v20;
      if ( MaxThreadCount < 0x200 )
        MaxThreadCount = 512;
      Heap = StartParameter;
      v22 = (HANDLE *)((char *)StartParameter + 56);
      updated = NtCreateWorkerFactory(
                  (PHANDLE)StartParameter + 7,
                  0xF00FFu,
                  0LL,
                  *v19,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  TppWorkerThread,
                  StartParameter,
                  MaxThreadCount,
                  StackReserve,
                  StackCommit);
      v29 = updated;
      if ( updated < 0 )
        goto LABEL_35;
      if ( WorkerFactoryInformation )
      {
        updated = NtSetInformationWorkerFactory(*v22, WorkerFactoryFlags, &WorkerFactoryInformation, 4u);
        v29 = updated;
        if ( updated < 0 )
        {
LABEL_35:
          if ( updated < 0 )
          {
            NtClose(*v19);
            if ( *v22 )
            {
              NtClose(*v22);
              *v22 = 0LL;
            }
          }
          goto LABEL_36;
        }
        *((_WORD *)Heap + 189) = WorkerFactoryInformation;
      }
      *((_QWORD *)Heap + 9) = 0LL;
      *((_QWORD *)Heap + 46) = 0LL;
      *((_QWORD *)Heap + 56) = 0LL;
      *((_WORD *)Heap + 188) = 0;
      *((_QWORD *)Heap + 11) = Heap + 20;
      *((_QWORD *)Heap + 10) = Heap + 20;
      *((_QWORD *)Heap + 13) = Heap + 24;
      *((_QWORD *)Heap + 12) = Heap + 24;
      *((_QWORD *)Heap + 58) = Heap + 114;
      *((_QWORD *)Heap + 57) = Heap + 114;
      TppGetCurrentThreadNumaNode(Heap, &Flags, 0LL, 0LL);
      *((_QWORD *)Heap + 50) = retaddr;
      updated = TppInitializeTimerQueue(Heap + 28, Heap);
      v29 = updated;
      if ( updated >= 0 )
      {
        updated = 0;
        v29 = 0;
        RtlAcquireSRWLockExclusive(&TppPoolpListLock);
        v23 = Heap + 96;
        v24 = off_1801CB730[0];
        if ( *(_UNKNOWN ***)off_1801CB730[0] != &TppPoolpList )
          __fastfail(3u);
        *v23 = &TppPoolpList;
        *((_QWORD *)Heap + 49) = v24;
        *v24 = v23;
        off_1801CB730[0] = (_UNKNOWN **)(Heap + 96);
        RtlReleaseSRWLockExclusive(&TppPoolpListLock);
        RtlAcquireSRWLockShared(&TppPoolpDefaultPoolCpuSetLock);
        if ( TppPoolpDefaultPoolCpuSetCount )
        {
          updated = TpSetPoolThreadCpuSets(Heap, &TppPoolpDefaultPoolCpuSets);
          v29 = updated;
        }
        RtlReleaseSRWLockShared(&TppPoolpDefaultPoolCpuSetLock);
      }
      goto LABEL_35;
    }
  }
LABEL_36:
  v2 = a1;
LABEL_42:
  if ( updated >= 0 )
    goto LABEL_43;
  if ( Heap )
  {
    if ( BaseAddress )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, BaseAddress);
      Heap = StartParameter;
    }
    v26 = (void *)*((_QWORD *)Heap + 5);
    if ( v26 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v26);
      Heap = StartParameter;
    }
    v27 = (void *)*((_QWORD *)Heap + 6);
    if ( v27 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v27);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, StartParameter);
    Heap = 0LL;
    StartParameter = 0LL;
    updated = v29;
  }
  if ( updated >= 0 )
  {
LABEL_43:
    *v2 = Heap;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v25 = (__int64)NtCurrentPeb()->SharedData + 556;
      Heap = StartParameter;
      updated = v29;
    }
    else
    {
      v25 = 2147353478LL;
    }
    if ( *(_BYTE *)v25 )
      TppETWPoolCreate(Heap);
  }
  return (unsigned int)updated;
}
