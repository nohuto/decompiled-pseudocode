/*
 * XREFs of RtlResetMemoryZone @ 0x18013C200
 * Callers:
 *     RtlResetMemoryBlockLookaside @ 0x18013C1A0 (RtlResetMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlResetMemoryZone(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int64 *i; // rdx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 32), a2, a3);
  for ( i = *(__int64 **)(a1 + 48); i != (__int64 *)a1; i = (__int64 *)*i )
    _InterlockedExchange64(i + 2, (__int64)(i + 4));
  _InterlockedExchange64((volatile __int64 *)(a1 + 16), a1 + 56);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  return 0LL;
}
