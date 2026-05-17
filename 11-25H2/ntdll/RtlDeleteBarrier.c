/*
 * XREFs of RtlDeleteBarrier @ 0x18013F600
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlDeleteBarrier(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax

  v1 = (a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v1 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v1 + 8));
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v1 + 8));
  }
  return result;
}
