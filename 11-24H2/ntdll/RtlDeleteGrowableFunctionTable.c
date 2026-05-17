/*
 * XREFs of RtlDeleteGrowableFunctionTable @ 0x1800E76F0
 * Callers:
 *     RtlDeleteFunctionTable @ 0x1800E74E0 (RtlDeleteFunctionTable.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180007080 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18009C280 (RtlProtectHeap.c)
 *     RtlAvlRemoveNode @ 0x1800E7890 (RtlAvlRemoveNode.c)
 *     NtSetInformationProcess @ 0x180162010 (NtSetInformationProcess.c)
 */

__int64 __fastcall RtlDeleteGrowableFunctionTable(unsigned __int64 a1)
{
  bool v1; // zf
  int v3; // eax
  volatile signed __int32 **v4; // rdx
  unsigned __int64 v5; // r8
  int v6; // edi
  __int64 v7; // rdx
  _QWORD *v8; // rax
  void *ProcessHeap; // rcx
  volatile signed __int32 **v10; // rdx
  unsigned __int64 v11; // r8
  int v12; // edx
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 80) == 3;
  v14 = 0LL;
  if ( !v1 )
    RtlRaiseStatus(-1073741811);
  *(_QWORD *)&v14 = a1;
  BYTE8(v14) = 1;
  v3 = NtSetInformationProcess(-1LL, 53LL, &v14);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
  LdrProtectMrdata(0);
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v4, v5);
    v6 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v6 == -1 )
        goto LABEL_13;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v6 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpDynamicFunctionTableLock, v4, v5);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMin, a1 + 88);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMax, a1 + 112);
  v7 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v8 = *(_QWORD **)(a1 + 8), *v8 != a1) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  if ( LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap((__int64)ProcessHeap, 0, a1);
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v10, v11);
    v12 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v12 - 1;
      if ( v12 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      return LdrProtectMrdata(1);
    }
LABEL_13:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return LdrProtectMrdata(1);
}
