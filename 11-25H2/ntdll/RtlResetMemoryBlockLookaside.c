/*
 * XREFs of RtlResetMemoryBlockLookaside @ 0x18013D8D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlInitializeSListHead @ 0x1800E4E80 (RtlInitializeSListHead.c)
 *     RtlResetMemoryZone @ 0x18013D930 (RtlResetMemoryZone.c)
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
