/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x1800335A0
 * Callers:
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x1800332D0 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 * Callees:
 *     RtlProtectHeap @ 0x180028BA0 (RtlProtectHeap.c)
 *     RtlAvlInsertNodeEx @ 0x1800333C0 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180033910 (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdata @ 0x180033A80 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x1800366F0 (LdrControlFlowGuardEnforced.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     NtSetInformationProcess @ 0x1801603D0 (NtSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x180160B90 (ZwQuerySystemTime.c)
 */

DWORD __cdecl RtlAddGrowableFunctionTable(
        PVOID *DynamicTable,
        PRUNTIME_FUNCTION FunctionTable,
        DWORD EntryCount,
        DWORD MaximumEntryCount,
        ULONG_PTR RangeBase,
        ULONG_PTR RangeEnd)
{
  DWORD result; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 *v15; // rbx
  NTSTATUS v16; // edi
  _QWORD *v17; // rdx
  bool v18; // r8
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  bool v21; // r8
  _QWORD *v22; // rax
  __int64 **v23; // rax
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  PVOID v27; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // edx
  __int128 ProcessInformation; // [rsp+20h] [rbp-28h] BYREF

  ProcessInformation = 0LL;
  if ( EntryCount > MaximumEntryCount || RangeBase >= RangeEnd )
    __fastfail(5u);
  result = LdrEnsureMrdataHeapExists(DynamicTable, FunctionTable);
  if ( (result & 0x80000000) != 0 )
    return result;
  LOBYTE(v10) = LdrControlFlowGuardEnforced();
  if ( v10 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v11 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v11 == -1 )
        goto LABEL_7;
    }
    else
    {
      RtlProtectHeap(LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v11 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LOBYTE(v12) = LdrControlFlowGuardEnforced();
  if ( v12 )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x88uLL);
  v15 = (__int64 *)Heap;
  if ( !Heap )
  {
    LOBYTE(v29) = LdrControlFlowGuardEnforced();
    if ( v29 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v30 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_7;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v30 - 1;
      if ( v30 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return -1073741670;
  }
  Heap[2].QuadPart = (__int64)FunctionTable;
  Heap[10].HighPart = EntryCount;
  ZwQuerySystemTime(Heap + 3);
  v15[4] = RangeBase;
  v15[5] = RangeEnd;
  v15[6] = RangeBase;
  *((_DWORD *)v15 + 20) = 3;
  *(_QWORD *)&ProcessInformation = v15;
  BYTE8(ProcessInformation) = 0;
  v16 = NtSetInformationProcess(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          ProcessDynamicFunctionTableInformation,
          &ProcessInformation,
          0x10u);
  if ( v16 < 0 )
  {
    LOBYTE(v26) = LdrControlFlowGuardEnforced();
    if ( v26 )
      v27 = LdrpMrdataHeap;
    else
      v27 = NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap(v27, 0, v15);
    LOBYTE(v28) = LdrControlFlowGuardEnforced();
    if ( v28 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v25 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_7;
LABEL_8:
      *(_DWORD *)LdrpMrdataHeapUnprotected = v25 - 1;
      if ( v25 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return v16;
  }
  LdrProtectMrdata(0LL);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v17 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  v18 = 0;
  if ( RtlpDynamicFunctionTableTreeMin )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v15[4] < *(v17 - 7) )
      {
        v19 = (_QWORD *)*v17;
        if ( !*v17 )
          break;
      }
      else
      {
        v19 = (_QWORD *)v17[1];
        if ( !v19 )
        {
          v18 = 1;
          break;
        }
      }
      v17 = v19;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)&RtlpDynamicFunctionTableTreeMin, (unsigned __int64)v17, v18, v15 + 11);
  v20 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  v21 = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_28;
  while ( (unsigned __int64)v15[5] < *(v20 - 10) )
  {
    v22 = (_QWORD *)*v20;
    if ( !*v20 )
      goto LABEL_28;
LABEL_25:
    v20 = v22;
  }
  v22 = (_QWORD *)v20[1];
  if ( v22 )
    goto LABEL_25;
  v21 = 1;
LABEL_28:
  RtlAvlInsertNodeEx((unsigned __int64 *)&RtlpDynamicFunctionTableTreeMax, (unsigned __int64)v20, v21, v15 + 14);
  v23 = (__int64 **)qword_1801E6068;
  if ( *(PVOID **)qword_1801E6068 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *v15 = (__int64)&RtlpDynamicFunctionTable;
  v15[1] = (__int64)v23;
  *v23 = v15;
  qword_1801E6068 = (__int64)v15;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1LL);
  *DynamicTable = v15;
  LOBYTE(v24) = LdrControlFlowGuardEnforced();
  if ( v24 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v25 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      goto LABEL_8;
LABEL_7:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return v16;
}
