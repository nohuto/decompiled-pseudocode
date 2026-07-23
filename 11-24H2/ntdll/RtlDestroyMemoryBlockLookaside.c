/*
 * XREFs of RtlDestroyMemoryBlockLookaside @ 0x180108670
 * Callers:
 *     RtlpInitializeStackTraceLog @ 0x18011D61C (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800AA93C (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x1801086D0 (RtlDestroyMemoryZone.c)
 */

NTSTATUS __cdecl RtlDestroyMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  void *v1; // rdi
  void *v3; // rsi
  int v4; // ebx
  NTSTATUS result; // eax

  v1 = (void *)*((_QWORD *)MemoryBlockLookaside + 2);
  v3 = (void *)*((_QWORD *)MemoryBlockLookaside + 1);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  if ( *((_DWORD *)MemoryBlockLookaside + 11) )
    RtlpUnregisterLockedMemoryBlockLookaside();
  v4 = RtlDestroyMemoryZone(v1);
  result = RtlDestroyMemoryZone(v3);
  if ( v4 < 0 )
    return v4;
  return result;
}
