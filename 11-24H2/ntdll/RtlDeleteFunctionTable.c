/*
 * XREFs of RtlDeleteFunctionTable @ 0x1800277A0
 * Callers:
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x1800332D0 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 * Callees:
 *     RtlDeleteGrowableFunctionTable @ 0x1800279B0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAvlRemoveNode @ 0x180027B50 (RtlAvlRemoveNode.c)
 *     RtlProtectHeap @ 0x180028BA0 (RtlProtectHeap.c)
 *     LdrProtectMrdata @ 0x180033A80 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x1800366F0 (LdrControlFlowGuardEnforced.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  PRUNTIME_FUNCTION *i; // rbx
  int v3; // eax
  int v4; // edi
  BOOLEAN v5; // di
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // eax
  __int64 *v11; // rcx
  __int64 *v12; // rcx
  PRUNTIME_FUNCTION v13; // rcx
  PVOID *v14; // rax

  LdrProtectMrdata(0LL);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  for ( i = (PRUNTIME_FUNCTION *)RtlpDynamicFunctionTable; ; i = (PRUNTIME_FUNCTION *)*i )
  {
    if ( i == (PRUNTIME_FUNCTION *)&RtlpDynamicFunctionTable )
    {
      RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
      LdrProtectMrdata(1LL);
      return 0;
    }
    if ( i[2] == FunctionTable )
      break;
  }
  LOBYTE(v3) = LdrControlFlowGuardEnforced();
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v4 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v4 == -1 )
        goto LABEL_8;
    }
    else
    {
      RtlProtectHeap(LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v4 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  v7 = *((_DWORD *)i + 20);
  if ( v7 != 3 )
  {
    v11 = &RtlpDynamicCallbackTableTreeMin;
    if ( v7 != 2 )
      v11 = &RtlpDynamicFunctionTableTreeMin;
    RtlAvlRemoveNode(v11, i + 11);
    v12 = &RtlpDynamicCallbackTableTreeMax;
    if ( v7 != 2 )
      v12 = &RtlpDynamicFunctionTableTreeMax;
    RtlAvlRemoveNode(v12, i + 14);
    v13 = *i;
    if ( *(PRUNTIME_FUNCTION **)&(*i)->UnwindInfoAddress != i || (v14 = (PVOID *)i[1], *v14 != i) )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)&v13->UnwindInfoAddress = v14;
  }
  v5 = 1;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1LL);
  if ( *((_DWORD *)i + 20) == 3 )
  {
    RtlDeleteGrowableFunctionTable(i);
  }
  else
  {
    LOBYTE(v10) = LdrControlFlowGuardEnforced();
    if ( v10 )
      RtlFreeHeap(LdrpMrdataHeap, 0, i);
    else
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, i);
  }
  LOBYTE(v8) = LdrControlFlowGuardEnforced();
  if ( !v8 )
    return v5;
  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  v9 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
  {
LABEL_8:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  *(_DWORD *)LdrpMrdataHeapUnprotected = v9 - 1;
  if ( v9 == 1 )
    RtlProtectHeap(LdrpMrdataHeap, 1u);
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  return 1;
}
