/*
 * XREFs of RtlAddFunctionTable @ 0x1800ECBF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlProtectHeap @ 0x180028BA0 (RtlProtectHeap.c)
 *     RtlAvlInsertNodeEx @ 0x1800333C0 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180033910 (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdata @ 0x180033A80 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x1800366F0 (LdrControlFlowGuardEnforced.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     ZwQuerySystemTime @ 0x180160B90 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v11; // rbx
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v13; // r9
  ULONG v14; // r11d
  unsigned __int64 EndAddress; // rcx
  int v16; // edx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  _QWORD *v21; // rdx
  bool v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  bool v25; // r8
  _QWORD *v26; // rax
  __int64 *v27; // rax
  int v28; // eax
  int v29; // ecx
  int v31; // eax
  int v32; // r8d

  if ( LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v7 == -1 )
        goto LABEL_41;
    }
    else
    {
      RtlProtectHeap(LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v7 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LOBYTE(v8) = LdrControlFlowGuardEnforced();
  if ( v8 )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x88uLL);
  v11 = (__int64)Heap;
  if ( !Heap )
  {
    LOBYTE(v31) = LdrControlFlowGuardEnforced();
    if ( v31 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v32 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_41;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v32 - 1;
      if ( v32 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  Heap[2].QuadPart = (__int64)FunctionTable;
  Heap[10].HighPart = EntryCount;
  ZwQuerySystemTime(Heap + 3);
  BeginAddress = FunctionTable->BeginAddress;
  v13 = FunctionTable + 1;
  *(_QWORD *)(v11 + 32) = BeginAddress;
  v14 = 1;
  EndAddress = FunctionTable->EndAddress;
  *(_DWORD *)(v11 + 80) = 0;
  *(_QWORD *)(v11 + 40) = EndAddress;
  *(_QWORD *)(v11 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v16 = 0;
    v17 = (unsigned int)BeginAddress;
    v18 = (unsigned int)EndAddress;
    do
    {
      if ( !v16 && v13->BeginAddress < FunctionTable[v14 - 1].BeginAddress )
      {
        *(_DWORD *)(v11 + 80) = 1;
        v16 = 1;
      }
      v19 = v13->BeginAddress;
      BeginAddress = v17;
      if ( v19 < v17 )
      {
        *(_QWORD *)(v11 + 32) = v19;
        BeginAddress = (unsigned int)v19;
      }
      v20 = v13->EndAddress;
      EndAddress = v18;
      if ( v20 > v18 )
      {
        *(_QWORD *)(v11 + 40) = v20;
        EndAddress = (unsigned int)v20;
      }
      ++v13;
      ++v14;
      v17 = BeginAddress;
      v18 = EndAddress;
    }
    while ( v14 < EntryCount );
  }
  *(_QWORD *)(v11 + 32) = BaseAddress + BeginAddress;
  *(_QWORD *)(v11 + 40) = EndAddress + BaseAddress;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v21 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  v22 = 0;
  if ( !RtlpDynamicFunctionTableTreeMin )
    goto LABEL_23;
  while ( *(_QWORD *)(v11 + 32) < *(v21 - 7) )
  {
    v23 = (_QWORD *)*v21;
    if ( !*v21 )
      goto LABEL_23;
LABEL_33:
    v21 = v23;
  }
  v23 = (_QWORD *)v21[1];
  if ( v23 )
    goto LABEL_33;
  v22 = 1;
LABEL_23:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicFunctionTableTreeMin,
    (unsigned __int64)v21,
    v22,
    (_QWORD *)(v11 + 88));
  v24 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  v25 = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_29;
  while ( 2 )
  {
    if ( *(_QWORD *)(v11 + 40) < *(v24 - 10) )
    {
      v26 = (_QWORD *)*v24;
      if ( !*v24 )
        goto LABEL_29;
      goto LABEL_26;
    }
    v26 = (_QWORD *)v24[1];
    if ( v26 )
    {
LABEL_26:
      v24 = v26;
      continue;
    }
    break;
  }
  v25 = 1;
LABEL_29:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicFunctionTableTreeMax,
    (unsigned __int64)v24,
    v25,
    (_QWORD *)(v11 + 112));
  v27 = (__int64 *)qword_1801E6068;
  if ( *(PVOID **)qword_1801E6068 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v11 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v11 + 8) = v27;
  *v27 = v11;
  qword_1801E6068 = v11;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  LOBYTE(v28) = LdrControlFlowGuardEnforced();
  if ( v28 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v29 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v29 - 1;
      if ( v29 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      return 1;
    }
LABEL_41:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return 1;
}
