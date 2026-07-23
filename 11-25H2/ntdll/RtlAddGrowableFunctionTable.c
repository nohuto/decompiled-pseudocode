/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x180024410
 * Callers:
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x180024960 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180023510 (LdrControlFlowGuardEnforced.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800240BC (LdrEnsureMrdataHeapExists.c)
 *     RtlAvlInsertNodeEx @ 0x180024780 (RtlAvlInsertNodeEx.c)
 *     RtlProtectHeap @ 0x180024F60 (RtlProtectHeap.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtSetInformationProcess @ 0x1801635A0 (NtSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x180163D60 (ZwQuerySystemTime.c)
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
  __int64 v18; // r8
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // r8
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
  result = LdrEnsureMrdataHeapExists();
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
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v17 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  LOBYTE(v18) = 0;
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
          LOBYTE(v18) = 1;
          break;
        }
      }
      v17 = v19;
    }
  }
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v17, v18, v15 + 11);
  v20 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  LOBYTE(v21) = 0;
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
  LOBYTE(v21) = 1;
LABEL_28:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v20, v21, v15 + 14);
  v23 = (__int64 **)qword_1801E9278;
  if ( *(PVOID **)qword_1801E9278 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *v15 = (__int64)&RtlpDynamicFunctionTable;
  v15[1] = (__int64)v23;
  *v23 = v15;
  qword_1801E9278 = (__int64)v15;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
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
