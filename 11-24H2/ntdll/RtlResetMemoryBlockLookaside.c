/*
 * XREFs of RtlResetMemoryBlockLookaside @ 0x18013A390
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlInitializeSListHead @ 0x1800E1360 (RtlInitializeSListHead.c)
 *     RtlResetMemoryZone @ 0x18013A3F0 (RtlResetMemoryZone.c)
 */

NTSTATUS __cdecl RtlResetMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  unsigned int i; // ebx
  NTSTATUS v3; // ebx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  for ( i = 0; i < *((_DWORD *)MemoryBlockLookaside + 10); ++i )
    RtlInitializeSListHead((PSLIST_HEADER)MemoryBlockLookaside + 2 * i + 3);
  v3 = RtlResetMemoryZone(*((PVOID *)MemoryBlockLookaside + 2));
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  return v3;
}
