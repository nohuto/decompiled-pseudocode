/*
 * XREFs of TpAllocPoolInternal @ 0x1800AB494
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18001B460 (TppPoolpReferenceGlobalPool.c)
 *     TpAllocPool @ 0x18006A620 (TpAllocPool.c)
 *     LdrpEnableParallelLoading @ 0x1800AB384 (LdrpEnableParallelLoading.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     TppGetCurrentThreadNumaNode @ 0x18006EE30 (TppGetCurrentThreadNumaNode.c)
 *     TppPoolUpdateNodeRelation @ 0x1800ABAAC (TppPoolUpdateNodeRelation.c)
 *     TppInitializeTimerQueue @ 0x1800ABC40 (TppInitializeTimerQueue.c)
 *     TpSetPoolThreadCpuSets @ 0x1800ABCC0 (TpSetPoolThreadCpuSets.c)
 *     TppETWPoolCreate @ 0x1800ABD78 (TppETWPoolCreate.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtCreateIoCompletion @ 0x1801632C0 (NtCreateIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x180163720 (NtCreateWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1801652A0 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpAllocPoolInternal(__int64 *a1, char a2)
{
  __int64 *v2; // rsi
  __int64 v3; // r13
  unsigned __int64 v4; // r14
  struct _PEB *v5; // rax
  unsigned __int64 MinimumStackCommit; // rcx
  __int64 Heap; // rdi
  unsigned int v8; // r8d
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  unsigned int i; // r8d
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  int *v15; // r15
  unsigned int v16; // esi
  int updated; // ebx
  __int64 v18; // r9
  HANDLE *v19; // r12
  int v20; // eax
  unsigned int v21; // eax
  HANDLE *v22; // rsi
  volatile signed __int32 **v23; // rdx
  unsigned __int64 v24; // r8
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r8
  int v31; // [rsp+50h] [rbp-58h]
  unsigned __int64 v32; // [rsp+58h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h]
  int v35; // [rsp+B8h] [rbp+10h] BYREF
  volatile signed __int32 *v36; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+20h]

  v2 = a1;
  v32 = 0LL;
  *a1 = 0LL;
  v35 = a2 & 1;
  v36 = 0LL;
  RtlImageNtHeaderEx(1, (unsigned __int64)NtCurrentPeb()->ImageBaseAddress, 0LL, &v36);
  if ( !v36 )
    return (unsigned int)-1073741701;
  if ( *((_WORD *)v36 + 12) == 523 )
  {
    v3 = *((_QWORD *)v36 + 12);
    v4 = *((_QWORD *)v36 + 13);
  }
  else
  {
    v3 = *((unsigned int *)v36 + 24);
    v4 = *((unsigned int *)v36 + 25);
  }
  v5 = NtCurrentPeb();
  MinimumStackCommit = v5->MinimumStackCommit;
  if ( MinimumStackCommit && v4 < MinimumStackCommit )
    v4 = v5->MinimumStackCommit;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 0x1D8uLL);
  v37 = Heap;
  if ( !Heap )
    goto LABEL_37;
  LODWORD(v36) = TppHeapTag + 786432;
  v32 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, 72LL * (unsigned int)TppNumberNodes);
  if ( !v32 )
  {
    updated = -1073741801;
    v31 = -1073741801;
    Heap = v37;
    goto LABEL_42;
  }
  v8 = 0;
  v9 = v37;
  v10 = (unsigned int)TppNumberNodes;
  while ( v8 < 3 )
  {
    *(_QWORD *)(v9 + 8LL * v8 + 16) = v32 + 24LL * (unsigned int)v10 * v8;
    ++v8;
  }
  for ( i = 0; i < 3 * (int)v10; ++i )
  {
    v12 = (_QWORD *)(v32 + 24LL * i);
    v12[2] = 0LL;
    v12[1] = v12;
    *v12 = v12;
  }
  v13 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 4 * v10);
  Heap = v37;
  *(_QWORD *)(v37 + 40) = v13;
  if ( !v13
    || (v14 = RtlAllocateHeap(
                (__int64)NtCurrentPeb()->ProcessHeap,
                (TppHeapTag + 786432) | 8u,
                16 * (unsigned int)TppNumberNodes * (unsigned __int64)(unsigned int)TppMaximumGroups),
        Heap = v37,
        (*(_QWORD *)(v37 + 48) = v14) == 0LL) )
  {
LABEL_37:
    updated = -1073741801;
    v31 = -1073741801;
    goto LABEL_42;
  }
  v15 = (int *)(Heap + 440);
  v16 = *(_DWORD *)(Heap + 440);
  if ( !v16 )
    v16 = MEMORY[0x7FFE03C0];
  Heap = v37;
  *(_DWORD *)(v37 + 424) = v16;
  updated = TppPoolUpdateNodeRelation(Heap);
  v31 = updated;
  if ( updated >= 0 )
  {
    *(_DWORD *)(Heap + 428) = -2;
    *(_QWORD *)(Heap + 8) = (unsigned __int16)v16;
    *(_DWORD *)Heap = 1;
    v18 = v16 + 1;
    if ( v16 < 4 )
      v18 = 4LL;
    v19 = (HANDLE *)(Heap + 64);
    updated = NtCreateIoCompletion(Heap + 64, 2031619LL, 0LL, v18);
    v31 = updated;
    if ( updated >= 0 )
    {
      v20 = *v15;
      if ( !*v15 )
        v20 = MEMORY[0x7FFE03C0];
      v21 = 4 * v20;
      if ( v21 < 0x200 )
        v21 = 512;
      Heap = v37;
      v22 = (HANDLE *)(v37 + 56);
      updated = NtCreateWorkerFactory(v37 + 56, 983295LL, 0LL, *v19, -1LL, TppWorkerThread, v37, v21, v3, v4);
      v31 = updated;
      if ( updated < 0 )
        goto LABEL_35;
      if ( v35 )
      {
        updated = NtSetInformationWorkerFactory(*v22, 13LL, &v35);
        v31 = updated;
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
        *(_WORD *)(Heap + 378) = v35;
      }
      *(_QWORD *)(Heap + 72) = 0LL;
      *(_QWORD *)(Heap + 368) = 0LL;
      *(_QWORD *)(Heap + 448) = 0LL;
      *(_WORD *)(Heap + 376) = 0;
      *(_QWORD *)(Heap + 88) = Heap + 80;
      *(_QWORD *)(Heap + 80) = Heap + 80;
      *(_QWORD *)(Heap + 104) = Heap + 96;
      *(_QWORD *)(Heap + 96) = Heap + 96;
      *(_QWORD *)(Heap + 464) = Heap + 456;
      *(_QWORD *)(Heap + 456) = Heap + 456;
      TppGetCurrentThreadNumaNode(Heap, &v36, 0LL, 0LL);
      *(_QWORD *)(Heap + 400) = retaddr;
      updated = TppInitializeTimerQueue(Heap + 112, Heap);
      v31 = updated;
      if ( updated >= 0 )
      {
        updated = 0;
        v31 = 0;
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)&TppPoolpListLock, v23, v24);
        v25 = (_QWORD *)(Heap + 384);
        v26 = off_1801CC730[0];
        if ( *(_UNKNOWN ***)off_1801CC730[0] != &TppPoolpList )
          __fastfail(3u);
        *v25 = &TppPoolpList;
        *(_QWORD *)(Heap + 392) = v26;
        *v26 = v25;
        off_1801CC730[0] = (_UNKNOWN **)(Heap + 384);
        RtlReleaseSRWLockExclusive(&TppPoolpListLock);
        RtlAcquireSRWLockShared(&TppPoolpDefaultPoolCpuSetLock);
        if ( TppPoolpDefaultPoolCpuSetCount )
        {
          updated = TpSetPoolThreadCpuSets(Heap, &TppPoolpDefaultPoolCpuSets);
          v31 = updated;
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
    if ( v32 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v32);
      Heap = v37;
    }
    v28 = *(_QWORD *)(Heap + 40);
    if ( v28 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v28);
      Heap = v37;
    }
    v29 = *(_QWORD *)(Heap + 48);
    if ( v29 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v29);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v37);
    Heap = 0LL;
    v37 = 0LL;
    updated = v31;
  }
  if ( updated >= 0 )
  {
LABEL_43:
    *v2 = Heap;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v27 = (__int64)NtCurrentPeb()->SharedData + 556;
      Heap = v37;
      updated = v31;
    }
    else
    {
      v27 = 2147353478LL;
    }
    if ( *(_BYTE *)v27 )
      TppETWPoolCreate(Heap);
  }
  return (unsigned int)updated;
}
