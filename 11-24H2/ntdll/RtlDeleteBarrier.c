/*
 * XREFs of RtlDeleteBarrier @ 0x18013DED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlDeleteBarrier(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax

  v3 = (a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v3 + 8), a2, a3);
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v3 + 8));
  }
  return result;
}
