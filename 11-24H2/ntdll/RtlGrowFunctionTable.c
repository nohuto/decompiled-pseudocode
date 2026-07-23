/*
 * XREFs of RtlGrowFunctionTable @ 0x1800F4140
 * Callers:
 *     <none>
 * Callees:
 *     RtlProtectHeap @ 0x180028BA0 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800366F0 (LdrControlFlowGuardEnforced.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

void __cdecl RtlGrowFunctionTable(PVOID DynamicTable, DWORD NewEntryCount)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // edx

  if ( *((_DWORD *)DynamicTable + 20) != 3 || NewEntryCount < *((_DWORD *)DynamicTable + 21) )
    RtlRaiseStatus(-1073741811);
  LOBYTE(v4) = LdrControlFlowGuardEnforced();
  if ( v4 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v5 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v5 == -1 )
        goto LABEL_14;
    }
    else
    {
      RtlProtectHeap(LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v5 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  *((_DWORD *)DynamicTable + 21) = NewEntryCount;
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( !v6 )
    return;
  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
  {
LABEL_14:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  *(_DWORD *)LdrpMrdataHeapUnprotected = v7 - 1;
  if ( v7 == 1 )
    RtlProtectHeap(LdrpMrdataHeap, 1u);
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
