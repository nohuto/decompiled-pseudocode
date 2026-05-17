/*
 * XREFs of RtlDestroyMemoryBlockLookaside @ 0x18010D790
 * Callers:
 *     RtlpInitializeStackTraceLog @ 0x18011F3EC (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180001C2C (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlDestroyMemoryZone @ 0x18010D7F0 (RtlDestroyMemoryZone.c)
 */

__int64 __fastcall RtlDestroyMemoryBlockLookaside(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  int v6; // ebx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)a1, a2, a3);
  if ( *(_DWORD *)(a1 + 44) )
    RtlpUnregisterLockedMemoryBlockLookaside();
  v6 = RtlDestroyMemoryZone(v3);
  result = RtlDestroyMemoryZone(v5);
  if ( v6 < 0 )
    return (unsigned int)v6;
  return result;
}
