/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x180006BA0
 * Callers:
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x1800068D0 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1800069C0 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180006F10 (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdata @ 0x180007080 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18009C280 (RtlProtectHeap.c)
 *     NtSetInformationProcess @ 0x180162010 (NtSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x1801627D0 (ZwQuerySystemTime.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edi
  _QWORD *v23; // rdx
  bool v24; // r8
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  bool v27; // r8
  _QWORD *v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // ecx
  void *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // edx
  bool v38; // zf
  __int64 v39; // rdx
  __int128 v40; // [rsp+20h] [rbp-28h] BYREF

  v40 = 0LL;
  if ( a3 > a4 || a5 >= a6 )
    __fastfail(5u);
  result = LdrEnsureMrdataHeapExists(a1, a2);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned int)LdrControlFlowGuardEnforced(v11, v10) )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v14 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v14 == -1 )
        goto LABEL_7;
    }
    else
    {
      RtlProtectHeap(LdrpMrdataHeap, 0LL);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v14 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced(v13, v12) )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap(ProcessHeap, 0LL, 136LL);
  v19 = Heap;
  if ( !Heap )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced(v18, v17) )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v37 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_7;
      v38 = v37 == 1;
      v39 = (unsigned int)(v37 - 1);
      *(_DWORD *)LdrpMrdataHeapUnprotected = v39;
      if ( v38 )
      {
        LOBYTE(v39) = 1;
        RtlProtectHeap(LdrpMrdataHeap, v39);
      }
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 3221225626LL;
  }
  *(_QWORD *)(Heap + 16) = a2;
  *(_DWORD *)(Heap + 84) = a3;
  ZwQuerySystemTime(Heap + 24);
  *(_QWORD *)(v19 + 32) = a5;
  *(_QWORD *)(v19 + 40) = a6;
  *(_QWORD *)(v19 + 48) = a5;
  *(_DWORD *)(v19 + 80) = 3;
  *(_QWORD *)&v40 = v19;
  BYTE8(v40) = 0;
  v22 = NtSetInformationProcess(-1LL, 53LL, &v40);
  if ( v22 < 0 )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced(v21, v20) )
      v34 = (void *)LdrpMrdataHeap;
    else
      v34 = NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap(v34, 0LL, v19);
    if ( (unsigned int)LdrControlFlowGuardEnforced(v36, v35) )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v33 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_7;
LABEL_8:
      *(_DWORD *)LdrpMrdataHeapUnprotected = v33 - 1;
      if ( v33 == 1 )
      {
        LOBYTE(v32) = 1;
        RtlProtectHeap(LdrpMrdataHeap, v32);
      }
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return (unsigned int)v22;
  }
  LdrProtectMrdata(0LL);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v23 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  v24 = 0;
  if ( RtlpDynamicFunctionTableTreeMin )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v19 + 32) < *(v23 - 7) )
      {
        v25 = (_QWORD *)*v23;
        if ( !*v23 )
          break;
      }
      else
      {
        v25 = (_QWORD *)v23[1];
        if ( !v25 )
        {
          v24 = 1;
          break;
        }
      }
      v23 = v25;
    }
  }
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicFunctionTableTreeMin,
    (unsigned __int64)v23,
    v24,
    (_QWORD *)(v19 + 88));
  v26 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  v27 = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_28;
  while ( *(_QWORD *)(v19 + 40) < *(v26 - 10) )
  {
    v28 = (_QWORD *)*v26;
    if ( !*v26 )
      goto LABEL_28;
LABEL_25:
    v26 = v28;
  }
  v28 = (_QWORD *)v26[1];
  if ( v28 )
    goto LABEL_25;
  v27 = 1;
LABEL_28:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicFunctionTableTreeMax,
    (unsigned __int64)v26,
    v27,
    (_QWORD *)(v19 + 112));
  v29 = (__int64 *)qword_1801E7068;
  if ( *(__int64 **)qword_1801E7068 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v19 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v19 + 8) = v29;
  *v29 = v19;
  qword_1801E7068 = v19;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1LL);
  *a1 = v19;
  if ( (unsigned int)LdrControlFlowGuardEnforced(v31, v30) )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v33 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      goto LABEL_8;
LABEL_7:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return (unsigned int)v22;
}
