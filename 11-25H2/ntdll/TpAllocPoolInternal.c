/*
 * XREFs of TpAllocPoolInternal @ 0x18003A970
 * Callers:
 *     LdrpEnableParallelLoading @ 0x18003A1C4 (LdrpEnableParallelLoading.c)
 *     TppPoolpReferenceGlobalPool @ 0x180048D80 (TppPoolpReferenceGlobalPool.c)
 *     TpAllocPool @ 0x1800FB950 (TpAllocPool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     TppETWPoolCreate @ 0x18003A8E8 (TppETWPoolCreate.c)
 *     TppPoolUpdateNodeRelation @ 0x18003AF88 (TppPoolUpdateNodeRelation.c)
 *     TppInitializeTimerQueue @ 0x18003B11C (TppInitializeTimerQueue.c)
 *     TpSetPoolThreadCpuSets @ 0x18003B1A0 (TpSetPoolThreadCpuSets.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003D250 (TppGetCurrentThreadNumaNode.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtCreateIoCompletion @ 0x180164850 (NtCreateIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x180164CB0 (NtCreateWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
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
  __int64 v9; // r10
  int v10; // r9d
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
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r8
  int v29; // [rsp+50h] [rbp-58h]
  __int64 v30; // [rsp+58h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h]
  int v33; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v34; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+20h]

  v2 = a1;
  v30 = 0LL;
  *a1 = 0LL;
  v33 = a2 & 1;
  v34 = 0LL;
  RtlImageNtHeaderEx(1, (unsigned __int64)NtCurrentPeb()->ImageBaseAddress, 0LL, &v34);
  if ( !v34 )
    return (unsigned int)-1073741701;
  if ( *(_WORD *)(v34 + 24) == 523 )
  {
    v3 = *(_QWORD *)(v34 + 96);
    v4 = *(_QWORD *)(v34 + 104);
  }
  else
  {
    v3 = *(unsigned int *)(v34 + 96);
    v4 = *(unsigned int *)(v34 + 100);
  }
  v5 = NtCurrentPeb();
  MinimumStackCommit = v5->MinimumStackCommit;
  if ( MinimumStackCommit && v4 < MinimumStackCommit )
    v4 = v5->MinimumStackCommit;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
  v35 = Heap;
  if ( !Heap )
    goto LABEL_37;
  LODWORD(v34) = TppHeapTag + 786432;
  v30 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
  if ( !v30 )
  {
    updated = -1073741801;
    v29 = -1073741801;
    Heap = v35;
    goto LABEL_42;
  }
  v8 = 0;
  v9 = v35;
  v10 = TppNumberNodes;
  while ( v8 < 3 )
  {
    *(_QWORD *)(v9 + 8LL * v8 + 16) = v30 + 24LL * v10 * v8;
    ++v8;
  }
  for ( i = 0; i < 3 * v10; ++i )
  {
    v12 = (_QWORD *)(v30 + 24LL * i);
    v12[2] = 0LL;
    v12[1] = v12;
    *v12 = v12;
  }
  v13 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
  Heap = v35;
  *(_QWORD *)(v35 + 40) = v13;
  if ( !v13 || (v14 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap), Heap = v35, (*(_QWORD *)(v35 + 48) = v14) == 0LL) )
  {
LABEL_37:
    updated = -1073741801;
    v29 = -1073741801;
    goto LABEL_42;
  }
  v15 = (int *)(Heap + 440);
  v16 = *(_DWORD *)(Heap + 440);
  if ( !v16 )
    v16 = MEMORY[0x7FFE03C0];
  Heap = v35;
  *(_DWORD *)(v35 + 424) = v16;
  updated = TppPoolUpdateNodeRelation(Heap);
  v29 = updated;
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
    v29 = updated;
    if ( updated >= 0 )
    {
      v20 = *v15;
      if ( !*v15 )
        v20 = MEMORY[0x7FFE03C0];
      v21 = 4 * v20;
      if ( v21 < 0x200 )
        v21 = 512;
      Heap = v35;
      v22 = (HANDLE *)(v35 + 56);
      updated = NtCreateWorkerFactory(v35 + 56, 983295LL, 0LL, *v19, -1LL, &TppWorkerThread, v35, v21, v3, v4);
      v29 = updated;
      if ( updated < 0 )
        goto LABEL_35;
      if ( v33 )
      {
        updated = NtSetInformationWorkerFactory(*v22, 13LL, &v33);
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
        *(_WORD *)(Heap + 378) = v33;
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
      TppGetCurrentThreadNumaNode(Heap, &v34, 0LL, 0LL);
      *(_QWORD *)(Heap + 400) = retaddr;
      updated = TppInitializeTimerQueue(Heap + 112, Heap);
      v29 = updated;
      if ( updated >= 0 )
      {
        updated = 0;
        v29 = 0;
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)&TppPoolpListLock);
        v23 = (_QWORD *)(Heap + 384);
        v24 = off_1801CE730[0];
        if ( *(_UNKNOWN ***)off_1801CE730[0] != &TppPoolpList )
          __fastfail(3u);
        *v23 = &TppPoolpList;
        *(_QWORD *)(Heap + 392) = v24;
        *v24 = v23;
        off_1801CE730[0] = (_UNKNOWN **)(Heap + 384);
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
    if ( v30 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 786432), v30);
      Heap = v35;
    }
    v26 = *(_QWORD *)(Heap + 40);
    if ( v26 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 786432), v26);
      Heap = v35;
    }
    v27 = *(_QWORD *)(Heap + 48);
    if ( v27 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 786432), v27);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 786432), v35);
    Heap = 0LL;
    v35 = 0LL;
    updated = v29;
  }
  if ( updated >= 0 )
  {
LABEL_43:
    *v2 = Heap;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v25 = (__int64)NtCurrentPeb()->SharedData + 556;
      Heap = v35;
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
