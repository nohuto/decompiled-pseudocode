/*
 * XREFs of RtlResetMemoryZone @ 0x18013A3F0
 * Callers:
 *     RtlResetMemoryBlockLookaside @ 0x18013A390 (RtlResetMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

NTSTATUS __cdecl RtlResetMemoryZone(PVOID MemoryZone)
{
  volatile __int64 *i; // rdx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  for ( i = (volatile __int64 *)*((_QWORD *)MemoryZone + 6); i != MemoryZone; i = (volatile __int64 *)*i )
    _InterlockedExchange64(i + 2, (__int64)(i + 4));
  _InterlockedExchange64((volatile __int64 *)MemoryZone + 2, (__int64)MemoryZone + 56);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  return 0;
}
