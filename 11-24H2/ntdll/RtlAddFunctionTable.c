/*
 * XREFs of RtlAddFunctionTable @ 0x1800F1F70
 * Callers:
 *     <none>
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1800069C0 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180006F10 (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdata @ 0x180007080 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18009C280 (RtlProtectHeap.c)
 *     ZwQuerySystemTime @ 0x1801627D0 (ZwQuerySystemTime.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  volatile signed __int32 **v6; // rdx
  unsigned __int64 v7; // r8
  int v8; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
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
  volatile signed __int32 **v21; // rdx
  unsigned __int64 v22; // r8
  _QWORD *v23; // rdx
  bool v24; // r8
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  bool v27; // r8
  _QWORD *v28; // rax
  __int64 *v29; // rax
  volatile signed __int32 **v30; // rdx
  unsigned __int64 v31; // r8
  int v32; // ecx
  volatile signed __int32 **v34; // rdx
  unsigned __int64 v35; // r8
  int v36; // r8d

  if ( (int)LdrEnsureMrdataHeapExists((__int64)FunctionTable, *(__int64 *)&EntryCount) < 0 )
    return 0;
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v6, v7);
    v8 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v8 == -1 )
        goto LABEL_41;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v8 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 0x88uLL);
  v11 = Heap;
  if ( !Heap )
  {
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v34, v35);
      v36 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_41;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v36 - 1;
      if ( v36 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap + 16) = FunctionTable;
  *(_DWORD *)(Heap + 84) = EntryCount;
  ZwQuerySystemTime(Heap + 24);
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
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpDynamicFunctionTableLock, v21, v22);
  v23 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  v24 = 0;
  if ( !RtlpDynamicFunctionTableTreeMin )
    goto LABEL_23;
  while ( *(_QWORD *)(v11 + 32) < *(v23 - 7) )
  {
    v25 = (_QWORD *)*v23;
    if ( !*v23 )
      goto LABEL_23;
LABEL_33:
    v23 = v25;
  }
  v25 = (_QWORD *)v23[1];
  if ( v25 )
    goto LABEL_33;
  v24 = 1;
LABEL_23:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicFunctionTableTreeMin,
    (unsigned __int64)v23,
    v24,
    (_QWORD *)(v11 + 88));
  v26 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  v27 = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_29;
  while ( 2 )
  {
    if ( *(_QWORD *)(v11 + 40) < *(v26 - 10) )
    {
      v28 = (_QWORD *)*v26;
      if ( !*v26 )
        goto LABEL_29;
      goto LABEL_26;
    }
    v28 = (_QWORD *)v26[1];
    if ( v28 )
    {
LABEL_26:
      v26 = v28;
      continue;
    }
    break;
  }
  v27 = 1;
LABEL_29:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicFunctionTableTreeMax,
    (unsigned __int64)v26,
    v27,
    (_QWORD *)(v11 + 112));
  v29 = (__int64 *)qword_1801E7068;
  if ( *(__int64 **)qword_1801E7068 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v11 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v11 + 8) = v29;
  *v29 = v11;
  qword_1801E7068 = v11;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v30, v31);
    v32 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v32 - 1;
      if ( v32 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      return 1;
    }
LABEL_41:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return 1;
}
