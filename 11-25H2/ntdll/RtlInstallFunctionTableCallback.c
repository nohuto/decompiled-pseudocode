/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x1800DE0B0
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
 *     RtlStringCbCopyW @ 0x1800DE4E0 (RtlStringCbCopyW.c)
 *     ZwQuerySystemTime @ 0x180163D60 (ZwQuerySystemTime.c)
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
  int v13; // ebx
  char *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rdx
  bool v18; // r8
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  bool v21; // r8
  _QWORD *v22; // rax
  __int64 *v23; // rax
  int v24; // r8d
  int v25; // ecx

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
  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
    v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v13 == -1 )
        goto LABEL_41;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v13 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( LdrControlFlowGuardEnforced() )
  {
    if ( (unsigned __int64)(v10 + 136) >= 0xFF000 )
      goto LABEL_42;
    ProcessHeap = (char *)LdrpMrdataHeap;
  }
  else
  {
    ProcessHeap = (char *)NtCurrentPeb()->ProcessHeap;
  }
  Heap = RtlAllocateHeap(ProcessHeap, 0, v10 + 136);
  v16 = Heap;
  if ( !Heap )
  {
LABEL_42:
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
      v25 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_41;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v25 - 1;
      if ( v25 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap + 16) = TableIdentifier;
  ZwQuerySystemTime(Heap + 24);
  *(_QWORD *)(v16 + 32) = BaseAddress;
  *(_QWORD *)(v16 + 40) = BaseAddress + v6;
  *(_QWORD *)(v16 + 64) = Context;
  *(_QWORD *)(v16 + 48) = BaseAddress;
  *(_QWORD *)(v16 + 56) = Callback;
  *(_DWORD *)(v16 + 80) = 2;
  *(_QWORD *)(v16 + 72) = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    *(_QWORD *)(v16 + 72) = v16 + 136;
    RtlStringCbCopyW(v16 + 136, v10, OutOfProcessCallbackDll);
  }
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpDynamicFunctionTableLock);
  v17 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  v18 = 0;
  if ( !RtlpDynamicCallbackTableTreeMin )
    goto LABEL_23;
  while ( *(_QWORD *)(v16 + 32) < *(v17 - 7) )
  {
    v19 = (_QWORD *)*v17;
    if ( !*v17 )
      goto LABEL_23;
LABEL_33:
    v17 = v19;
  }
  v19 = (_QWORD *)v17[1];
  if ( v19 )
    goto LABEL_33;
  v18 = 1;
LABEL_23:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicCallbackTableTreeMin,
    (unsigned __int64)v17,
    v18,
    (_QWORD *)(v16 + 88));
  v20 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
  v21 = 0;
  if ( !RtlpDynamicCallbackTableTreeMax )
    goto LABEL_29;
  while ( 2 )
  {
    if ( *(_QWORD *)(v16 + 40) < *(v20 - 10) )
    {
      v22 = (_QWORD *)*v20;
      if ( !*v20 )
        goto LABEL_29;
      goto LABEL_26;
    }
    v22 = (_QWORD *)v20[1];
    if ( v22 )
    {
LABEL_26:
      v20 = v22;
      continue;
    }
    break;
  }
  v21 = 1;
LABEL_29:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicCallbackTableTreeMax,
    (unsigned __int64)v20,
    v21,
    (_QWORD *)(v16 + 112));
  v23 = (__int64 *)qword_1801E9278;
  if ( *(__int64 **)qword_1801E9278 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v16 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v16 + 8) = v23;
  *v23 = v16;
  qword_1801E9278 = v16;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
    v24 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v24 - 1;
      if ( v24 == 1 )
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
