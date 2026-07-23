/*
 * XREFs of RtlDeleteGrowableFunctionTable @ 0x1800279B0
 * Callers:
 *     RtlDeleteFunctionTable @ 0x1800277A0 (RtlDeleteFunctionTable.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x180027B50 (RtlAvlRemoveNode.c)
 *     RtlProtectHeap @ 0x180028BA0 (RtlProtectHeap.c)
 *     LdrProtectMrdata @ 0x180033A80 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x1800366F0 (LdrControlFlowGuardEnforced.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     NtSetInformationProcess @ 0x1801603D0 (NtSetInformationProcess.c)
 */

void __cdecl RtlDeleteGrowableFunctionTable(PVOID DynamicTable)
{
  bool v1; // zf
  int v3; // eax
  int v4; // eax
  int v5; // edi
  _QWORD *v6; // rdx
  PVOID *v7; // rax
  int v8; // eax
  PVOID ProcessHeap; // rcx
  int v10; // eax
  int v11; // edx
  __int128 ProcessInformation; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_DWORD *)DynamicTable + 20) == 3;
  ProcessInformation = 0LL;
  if ( !v1 )
    RtlRaiseStatus(-1073741811);
  *(_QWORD *)&ProcessInformation = DynamicTable;
  BYTE8(ProcessInformation) = 1;
  v3 = NtSetInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessDynamicFunctionTableInformation,
         &ProcessInformation,
         0x10u);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
  LdrProtectMrdata(0LL);
  LOBYTE(v4) = LdrControlFlowGuardEnforced();
  if ( v4 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v5 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v5 == -1 )
        goto LABEL_13;
    }
    else
    {
      RtlProtectHeap(LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v5 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMin, (char *)DynamicTable + 88);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMax, (char *)DynamicTable + 112);
  v6 = *(_QWORD **)DynamicTable;
  if ( *(PVOID *)(*(_QWORD *)DynamicTable + 8LL) != DynamicTable
    || (v7 = (PVOID *)*((_QWORD *)DynamicTable + 1), *v7 != DynamicTable) )
  {
    __fastfail(3u);
  }
  *v7 = v6;
  v6[1] = v7;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LOBYTE(v8) = LdrControlFlowGuardEnforced();
  if ( v8 )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap(ProcessHeap, 0, DynamicTable);
  LOBYTE(v10) = LdrControlFlowGuardEnforced();
  if ( v10 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v11 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v11 - 1;
      if ( v11 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      goto LABEL_21;
    }
LABEL_13:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
LABEL_21:
  LdrProtectMrdata(1LL);
}
