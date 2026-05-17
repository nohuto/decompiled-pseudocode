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

__int64 __fastcall RtlAddGrowableFunctionTable(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 result; // rax
  int v10; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v13; // rbx
  int v14; // edi
  _QWORD *v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rdx
  int v23; // ecx
  void *v24; // rcx
  int v25; // edx
  bool v26; // zf
  __int64 v27; // rdx
  __int128 v28; // [rsp+20h] [rbp-28h] BYREF

  v28 = 0LL;
  if ( a3 > a4 || a5 >= a6 )
    __fastfail(5u);
  result = LdrEnsureMrdataHeapExists();
  if ( (int)result < 0 )
    return result;
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
    v10 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v10 == -1 )
        goto LABEL_7;
    }
    else
    {
      RtlProtectHeap(LdrpMrdataHeap, 0LL);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v10 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap(ProcessHeap);
  v13 = Heap;
  if ( !Heap )
  {
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
      v25 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_7;
      v26 = v25 == 1;
      v27 = (unsigned int)(v25 - 1);
      *(_DWORD *)LdrpMrdataHeapUnprotected = v27;
      if ( v26 )
      {
        LOBYTE(v27) = 1;
        RtlProtectHeap(LdrpMrdataHeap, v27);
      }
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 3221225626LL;
  }
  *(_QWORD *)(Heap + 16) = a2;
  *(_DWORD *)(Heap + 84) = a3;
  ZwQuerySystemTime(Heap + 24);
  *(_QWORD *)(v13 + 32) = a5;
  *(_QWORD *)(v13 + 40) = a6;
  *(_QWORD *)(v13 + 48) = a5;
  *(_DWORD *)(v13 + 80) = 3;
  *(_QWORD *)&v28 = v13;
  BYTE8(v28) = 0;
  v14 = NtSetInformationProcess(-1LL, 53LL, &v28, 16LL);
  if ( v14 < 0 )
  {
    if ( LdrControlFlowGuardEnforced() )
      v24 = (void *)LdrpMrdataHeap;
    else
      v24 = NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap(v24, 0LL, v13);
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
      v23 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_7;
LABEL_8:
      *(_DWORD *)LdrpMrdataHeapUnprotected = v23 - 1;
      if ( v23 == 1 )
      {
        LOBYTE(v22) = 1;
        RtlProtectHeap(LdrpMrdataHeap, v22);
      }
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return (unsigned int)v14;
  }
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpDynamicFunctionTableLock);
  v15 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  LOBYTE(v16) = 0;
  if ( RtlpDynamicFunctionTableTreeMin )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v13 + 32) < *(v15 - 7) )
      {
        v17 = (_QWORD *)*v15;
        if ( !*v15 )
          break;
      }
      else
      {
        v17 = (_QWORD *)v15[1];
        if ( !v17 )
        {
          LOBYTE(v16) = 1;
          break;
        }
      }
      v15 = v17;
    }
  }
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v15, v16, v13 + 88);
  v18 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  LOBYTE(v19) = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_28;
  while ( *(_QWORD *)(v13 + 40) < *(v18 - 10) )
  {
    v20 = (_QWORD *)*v18;
    if ( !*v18 )
      goto LABEL_28;
LABEL_25:
    v18 = v20;
  }
  v20 = (_QWORD *)v18[1];
  if ( v20 )
    goto LABEL_25;
  LOBYTE(v19) = 1;
LABEL_28:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v18, v19, v13 + 112);
  v21 = (__int64 *)qword_1801E9278;
  if ( *(__int64 **)qword_1801E9278 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v13 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v13 + 8) = v21;
  *v21 = v13;
  qword_1801E9278 = v13;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  *a1 = v13;
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
    v23 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      goto LABEL_8;
LABEL_7:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return (unsigned int)v14;
}
