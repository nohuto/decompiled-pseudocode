/*
 * XREFs of RtlAddFunctionTable @ 0x1800F3AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180023510 (LdrControlFlowGuardEnforced.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800240BC (LdrEnsureMrdataHeapExists.c)
 *     RtlAvlInsertNodeEx @ 0x180024780 (RtlAvlInsertNodeEx.c)
 *     RtlProtectHeap @ 0x180024F60 (RtlProtectHeap.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     ZwQuerySystemTime @ 0x180163D60 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  int v6; // ebx
  char *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v9; // rbx
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v11; // r9
  ULONG v12; // r11d
  unsigned __int64 EndAddress; // rcx
  int v14; // edx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  _QWORD *v19; // rdx
  bool v20; // r8
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  bool v23; // r8
  _QWORD *v24; // rax
  __int64 *v25; // rax
  int v26; // ecx
  int v28; // r8d

  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
    v6 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v6 == -1 )
        goto LABEL_41;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v6 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( LdrControlFlowGuardEnforced() )
    ProcessHeap = (char *)LdrpMrdataHeap;
  else
    ProcessHeap = (char *)NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x88uLL);
  v9 = Heap;
  if ( !Heap )
  {
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
      v28 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_41;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v28 - 1;
      if ( v28 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap + 16) = FunctionTable;
  *(_DWORD *)(Heap + 84) = EntryCount;
  ZwQuerySystemTime(Heap + 24);
  BeginAddress = FunctionTable->BeginAddress;
  v11 = FunctionTable + 1;
  *(_QWORD *)(v9 + 32) = BeginAddress;
  v12 = 1;
  EndAddress = FunctionTable->EndAddress;
  *(_DWORD *)(v9 + 80) = 0;
  *(_QWORD *)(v9 + 40) = EndAddress;
  *(_QWORD *)(v9 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v14 = 0;
    v15 = (unsigned int)BeginAddress;
    v16 = (unsigned int)EndAddress;
    do
    {
      if ( !v14 && v11->BeginAddress < FunctionTable[v12 - 1].BeginAddress )
      {
        *(_DWORD *)(v9 + 80) = 1;
        v14 = 1;
      }
      v17 = v11->BeginAddress;
      BeginAddress = v15;
      if ( v17 < v15 )
      {
        *(_QWORD *)(v9 + 32) = v17;
        BeginAddress = (unsigned int)v17;
      }
      v18 = v11->EndAddress;
      EndAddress = v16;
      if ( v18 > v16 )
      {
        *(_QWORD *)(v9 + 40) = v18;
        EndAddress = (unsigned int)v18;
      }
      ++v11;
      ++v12;
      v15 = BeginAddress;
      v16 = EndAddress;
    }
    while ( v12 < EntryCount );
  }
  *(_QWORD *)(v9 + 32) = BaseAddress + BeginAddress;
  *(_QWORD *)(v9 + 40) = EndAddress + BaseAddress;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpDynamicFunctionTableLock);
  v19 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  v20 = 0;
  if ( !RtlpDynamicFunctionTableTreeMin )
    goto LABEL_23;
  while ( *(_QWORD *)(v9 + 32) < *(v19 - 7) )
  {
    v21 = (_QWORD *)*v19;
    if ( !*v19 )
      goto LABEL_23;
LABEL_33:
    v19 = v21;
  }
  v21 = (_QWORD *)v19[1];
  if ( v21 )
    goto LABEL_33;
  v20 = 1;
LABEL_23:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicFunctionTableTreeMin,
    (unsigned __int64)v19,
    v20,
    (_QWORD *)(v9 + 88));
  v22 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  v23 = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_29;
  while ( 2 )
  {
    if ( *(_QWORD *)(v9 + 40) < *(v22 - 10) )
    {
      v24 = (_QWORD *)*v22;
      if ( !*v22 )
        goto LABEL_29;
      goto LABEL_26;
    }
    v24 = (_QWORD *)v22[1];
    if ( v24 )
    {
LABEL_26:
      v22 = v24;
      continue;
    }
    break;
  }
  v23 = 1;
LABEL_29:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicFunctionTableTreeMax,
    (unsigned __int64)v22,
    v23,
    (_QWORD *)(v9 + 112));
  v25 = (__int64 *)qword_1801E9278;
  if ( *(__int64 **)qword_1801E9278 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v9 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v9 + 8) = v25;
  *v25 = v9;
  qword_1801E9278 = v9;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
    v26 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v26 - 1;
      if ( v26 == 1 )
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
