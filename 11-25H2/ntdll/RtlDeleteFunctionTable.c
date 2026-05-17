/*
 * XREFs of RtlDeleteFunctionTable @ 0x1800E8C20
 * Callers:
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x180024960 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180023510 (LdrControlFlowGuardEnforced.c)
 *     RtlProtectHeap @ 0x180024F60 (RtlProtectHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800E8E30 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAvlRemoveNode @ 0x1800E8FD0 (RtlAvlRemoveNode.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  __int64 i; // rbx
  int v3; // edi
  BOOLEAN v4; // di
  int v6; // edi
  int v7; // edx
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 *v10; // rcx
  __int64 v11; // rcx
  __int64 *v12; // rax

  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpDynamicFunctionTableLock);
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
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
    v3 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v3 == -1 )
        goto LABEL_8;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v3 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  v6 = *(_DWORD *)(i + 80);
  if ( v6 != 3 )
  {
    v9 = &RtlpDynamicCallbackTableTreeMin;
    if ( v6 != 2 )
      v9 = &RtlpDynamicFunctionTableTreeMin;
    RtlAvlRemoveNode(v9, i + 88);
    v10 = &RtlpDynamicCallbackTableTreeMax;
    if ( v6 != 2 )
      v10 = &RtlpDynamicFunctionTableTreeMax;
    RtlAvlRemoveNode(v10, i + 112);
    v11 = *(_QWORD *)i;
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || (v12 = *(__int64 **)(i + 8), *v12 != i) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
  }
  v4 = 1;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( *(_DWORD *)(i + 80) == 3 )
  {
    RtlDeleteGrowableFunctionTable(i);
  }
  else if ( LdrControlFlowGuardEnforced() )
  {
    RtlFreeHeap(LdrpMrdataHeap, 0, i, v8);
  }
  else
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, i, v8);
  }
  if ( !LdrControlFlowGuardEnforced() )
    return v4;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
  v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
  {
LABEL_8:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  *(_DWORD *)LdrpMrdataHeapUnprotected = v7 - 1;
  if ( v7 == 1 )
    RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  return 1;
}
