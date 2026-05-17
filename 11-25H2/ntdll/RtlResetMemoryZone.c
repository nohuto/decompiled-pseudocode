/*
 * XREFs of RtlResetMemoryZone @ 0x18013D930
 * Callers:
 *     RtlResetMemoryBlockLookaside @ 0x18013D8D0 (RtlResetMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlResetMemoryZone(__int64 a1)
{
  __int64 *i; // rdx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 32));
  for ( i = *(__int64 **)(a1 + 48); i != (__int64 *)a1; i = (__int64 *)*i )
    _InterlockedExchange64(i + 2, (__int64)(i + 4));
  _InterlockedExchange64((volatile __int64 *)(a1 + 16), a1 + 56);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  return 0LL;
}
