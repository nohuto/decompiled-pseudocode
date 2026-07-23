/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x1800DC260
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
 *     RtlStringCbCopyW @ 0x1800DC690 (RtlStringCbCopyW.c)
 *     ZwQuerySystemTime @ 0x180160B90 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlInstallFunctionTableCallback(
        ULONG64 TableIdentifier,
        ULONG64 BaseAddress,
        ULONG Length,
        PGET_RUNTIME_FUNCTION_CALLBACK Callback,
        PVOID Context,
        PCWSTR OutOfProcessCallbackDll)
{
  __int64 v6; // rbp
  __int64 v10; // rsi
  __int64 v11; // rax
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v18; // rbx
  _QWORD *v19; // rdx
  bool v20; // r8
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  bool v23; // r8
  _QWORD *v24; // rax
  __int64 *v25; // rax
  int v26; // eax
  int v27; // r8d
  int v28; // eax
  int v29; // ecx

  v6 = Length;
  if ( (TableIdentifier & 3) != 3 || (Length & 0x80000000) != 0 )
    return 0;
  v10 = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( OutOfProcessCallbackDll[v11] );
    v10 = 2 * v11 + 2;
  }
  if ( LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  LOBYTE(v13) = LdrControlFlowGuardEnforced();
  if ( v13 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v14 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v14 == -1 )
        goto LABEL_41;
    }
    else
    {
      RtlProtectHeap(LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v14 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LOBYTE(v15) = LdrControlFlowGuardEnforced();
  if ( v15 )
  {
    if ( (unsigned __int64)(v10 + 136) >= 0xFF000 )
      goto LABEL_42;
    ProcessHeap = LdrpMrdataHeap;
  }
  else
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  }
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, v10 + 136);
  v18 = (__int64)Heap;
  if ( !Heap )
  {
LABEL_42:
    LOBYTE(v28) = LdrControlFlowGuardEnforced();
    if ( v28 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v29 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_41;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v29 - 1;
      if ( v29 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  Heap[2].QuadPart = TableIdentifier;
  ZwQuerySystemTime(Heap + 3);
  *(_QWORD *)(v18 + 32) = BaseAddress;
  *(_QWORD *)(v18 + 40) = BaseAddress + v6;
  *(_QWORD *)(v18 + 64) = Context;
  *(_QWORD *)(v18 + 48) = BaseAddress;
  *(_QWORD *)(v18 + 56) = Callback;
  *(_DWORD *)(v18 + 80) = 2;
  *(_QWORD *)(v18 + 72) = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    *(_QWORD *)(v18 + 72) = v18 + 136;
    RtlStringCbCopyW(v18 + 136, v10);
  }
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v19 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  v20 = 0;
  if ( !RtlpDynamicCallbackTableTreeMin )
    goto LABEL_23;
  while ( *(_QWORD *)(v18 + 32) < *(v19 - 7) )
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
    (unsigned __int64 *)&RtlpDynamicCallbackTableTreeMin,
    (unsigned __int64)v19,
    v20,
    (_QWORD *)(v18 + 88));
  v22 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
  v23 = 0;
  if ( !RtlpDynamicCallbackTableTreeMax )
    goto LABEL_29;
  while ( 2 )
  {
    if ( *(_QWORD *)(v18 + 40) < *(v22 - 10) )
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
    (unsigned __int64 *)&RtlpDynamicCallbackTableTreeMax,
    (unsigned __int64)v22,
    v23,
    (_QWORD *)(v18 + 112));
  v25 = (__int64 *)qword_1801E6068;
  if ( *(PVOID **)qword_1801E6068 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v18 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v18 + 8) = v25;
  *v25 = v18;
  qword_1801E6068 = v18;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  LOBYTE(v26) = LdrControlFlowGuardEnforced();
  if ( v26 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v27 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v27 - 1;
      if ( v27 == 1 )
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
