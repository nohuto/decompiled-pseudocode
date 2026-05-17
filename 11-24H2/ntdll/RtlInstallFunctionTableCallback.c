/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x1800E0D10
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
 *     RtlStringCbCopyW @ 0x1800E1140 (RtlStringCbCopyW.c)
 *     ZwQuerySystemTime @ 0x1801627D0 (ZwQuerySystemTime.c)
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
  volatile signed __int32 **v13; // rdx
  unsigned __int64 v14; // r8
  int v15; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v18; // rbx
  volatile signed __int32 **v19; // rdx
  unsigned __int64 v20; // r8
  _QWORD *v21; // rdx
  bool v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  bool v25; // r8
  _QWORD *v26; // rax
  __int64 *v27; // rax
  volatile signed __int32 **v28; // rdx
  unsigned __int64 v29; // r8
  int v30; // r8d
  volatile signed __int32 **v31; // rdx
  unsigned __int64 v32; // r8
  int v33; // ecx

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
  if ( (int)LdrEnsureMrdataHeapExists(TableIdentifier, BaseAddress) < 0 )
    return 0;
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v13, v14);
    v15 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v15 == -1 )
        goto LABEL_41;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v15 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( LdrControlFlowGuardEnforced() )
  {
    if ( (unsigned __int64)(v10 + 136) >= 0xFF000 )
      goto LABEL_42;
    ProcessHeap = (void *)LdrpMrdataHeap;
  }
  else
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  }
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, v10 + 136);
  v18 = Heap;
  if ( !Heap )
  {
LABEL_42:
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v31, v32);
      v33 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_41;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v33 - 1;
      if ( v33 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap + 16) = TableIdentifier;
  ZwQuerySystemTime(Heap + 24);
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
    RtlStringCbCopyW(v18 + 136, v10, OutOfProcessCallbackDll);
  }
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpDynamicFunctionTableLock, v19, v20);
  v21 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  v22 = 0;
  if ( !RtlpDynamicCallbackTableTreeMin )
    goto LABEL_23;
  while ( *(_QWORD *)(v18 + 32) < *(v21 - 7) )
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
    (unsigned __int64 *)&RtlpDynamicCallbackTableTreeMin,
    (unsigned __int64)v21,
    v22,
    (_QWORD *)(v18 + 88));
  v24 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
  v25 = 0;
  if ( !RtlpDynamicCallbackTableTreeMax )
    goto LABEL_29;
  while ( 2 )
  {
    if ( *(_QWORD *)(v18 + 40) < *(v24 - 10) )
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
    (unsigned __int64 *)&RtlpDynamicCallbackTableTreeMax,
    (unsigned __int64)v24,
    v25,
    (_QWORD *)(v18 + 112));
  v27 = (__int64 *)qword_1801E7068;
  if ( *(__int64 **)qword_1801E7068 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v18 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v18 + 8) = v27;
  *v27 = v18;
  qword_1801E7068 = v18;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v28, v29);
    v30 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v30 - 1;
      if ( v30 == 1 )
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
