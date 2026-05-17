/*
 * XREFs of RtlDeleteFunctionTable @ 0x1800E74E0
 * Callers:
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x1800068D0 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180007080 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18009C280 (RtlProtectHeap.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800E76F0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAvlRemoveNode @ 0x1800E7890 (RtlAvlRemoveNode.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  volatile signed __int32 **v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 i; // rbx
  volatile signed __int32 **v5; // rdx
  unsigned __int64 v6; // r8
  int v7; // edi
  BOOLEAN v8; // di
  int v10; // edi
  volatile signed __int32 **v11; // rdx
  unsigned __int64 v12; // r8
  int v13; // edx
  __int64 *v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rcx
  __int64 *v17; // rax

  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpDynamicFunctionTableLock, v2, v3);
  for ( i = RtlpDynamicFunctionTable; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &RtlpDynamicFunctionTable )
    {
      RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
      LdrProtectMrdata(1);
      return 0;
    }
    if ( *(PRUNTIME_FUNCTION *)(i + 16) == FunctionTable )
      break;
  }
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v5, v6);
    v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v7 == -1 )
        goto LABEL_8;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v7 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  v10 = *(_DWORD *)(i + 80);
  if ( v10 != 3 )
  {
    v14 = &RtlpDynamicCallbackTableTreeMin;
    if ( v10 != 2 )
      v14 = &RtlpDynamicFunctionTableTreeMin;
    RtlAvlRemoveNode(v14, i + 88);
    v15 = &RtlpDynamicCallbackTableTreeMax;
    if ( v10 != 2 )
      v15 = &RtlpDynamicFunctionTableTreeMax;
    RtlAvlRemoveNode(v15, i + 112);
    v16 = *(_QWORD *)i;
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || (v17 = *(__int64 **)(i + 8), *v17 != i) )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
  }
  v8 = 1;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( *(_DWORD *)(i + 80) == 3 )
  {
    RtlDeleteGrowableFunctionTable(i);
  }
  else if ( LdrControlFlowGuardEnforced() )
  {
    RtlFreeHeap(LdrpMrdataHeap, 0, i);
  }
  else
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, i);
  }
  if ( !LdrControlFlowGuardEnforced() )
    return v8;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v11, v12);
  v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
  {
LABEL_8:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  *(_DWORD *)LdrpMrdataHeapUnprotected = v13 - 1;
  if ( v13 == 1 )
    RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  return 1;
}
