/*
 * XREFs of RtlDeleteGrowableFunctionTable @ 0x1800E8E30
 * Callers:
 *     RtlDeleteFunctionTable @ 0x1800E8C20 (RtlDeleteFunctionTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180023510 (LdrControlFlowGuardEnforced.c)
 *     RtlProtectHeap @ 0x180024F60 (RtlProtectHeap.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlAvlRemoveNode @ 0x1800E8FD0 (RtlAvlRemoveNode.c)
 *     NtSetInformationProcess @ 0x1801635A0 (NtSetInformationProcess.c)
 */

__int64 __fastcall RtlDeleteGrowableFunctionTable(__int64 a1)
{
  bool v1; // zf
  int v3; // eax
  int v4; // edi
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // r9
  void *ProcessHeap; // rcx
  int v9; // edx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 80) == 3;
  v11 = 0LL;
  if ( !v1 )
    RtlRaiseStatus(-1073741811);
  *(_QWORD *)&v11 = a1;
  BYTE8(v11) = 1;
  v3 = NtSetInformationProcess(-1LL, 53LL, &v11, 16LL);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
  LdrProtectMrdata(0);
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
    v4 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v4 == -1 )
        goto LABEL_13;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v4 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpDynamicFunctionTableLock);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMin, a1 + 88);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMax, a1 + 112);
  v5 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v6 = *(_QWORD **)(a1 + 8), *v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  if ( LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap((__int64)ProcessHeap, 0, a1, v7);
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
    v9 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v9 - 1;
      if ( v9 == 1 )
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
