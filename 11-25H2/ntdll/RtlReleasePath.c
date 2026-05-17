/*
 * XREFs of RtlReleasePath @ 0x1800EEB00
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlReleasePath(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // r9

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpCachedPathLock);
  --*(_QWORD *)(a1 - 48);
  v2 = a1 - 128;
  if ( *(_QWORD *)(a1 - 48) )
    v2 = 0LL;
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v2 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2, v4);
  return result;
}
