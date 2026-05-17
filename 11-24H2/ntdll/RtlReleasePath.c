/*
 * XREFs of RtlReleasePath @ 0x1800EDC80
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlReleasePath(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 result; // rax

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpCachedPathLock, a2, a3);
  --*(_QWORD *)(a1 - 48);
  v4 = a1 - 128;
  if ( *(_QWORD *)(a1 - 48) )
    v4 = 0LL;
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v4 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  return result;
}
