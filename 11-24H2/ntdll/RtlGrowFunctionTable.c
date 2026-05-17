/*
 * XREFs of RtlGrowFunctionTable @ 0x1800F9570
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18009C280 (RtlProtectHeap.c)
 */

__int64 __fastcall RtlGrowFunctionTable(__int64 a1, unsigned int a2)
{
  volatile signed __int32 **v4; // rdx
  unsigned __int64 v5; // r8
  int v6; // edi
  __int64 result; // rax
  volatile signed __int32 **v8; // rdx
  unsigned __int64 v9; // r8
  int v10; // edx

  if ( *(_DWORD *)(a1 + 80) != 3 || a2 < *(_DWORD *)(a1 + 84) )
    RtlRaiseStatus(-1073741811);
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v4, v5);
    v6 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v6 == -1 )
        goto LABEL_14;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v6 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  *(_DWORD *)(a1 + 84) = a2;
  result = LdrControlFlowGuardEnforced();
  if ( !(_DWORD)result )
    return result;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v8, v9);
  v10 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
  {
LABEL_14:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  *(_DWORD *)LdrpMrdataHeapUnprotected = v10 - 1;
  if ( v10 == 1 )
    RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
  return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
