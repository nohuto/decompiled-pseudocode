/*
 * XREFs of RtlpSignalSystemDirsModification @ 0x18015FA74
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FD1A4 (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpInvalidatePathCache @ 0x18010FDDC (RtlpInvalidatePathCache.c)
 */

__int64 RtlpSignalSystemDirsModification()
{
  __int64 v0; // rsi
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // r9

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpCachedPathLock);
  v0 = RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v1 = RtlpInvalidatePathCache(&RtlpExeSearchPath);
  v2 = RtlpInvalidatePathCache(&RtlpSearchPath);
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v0 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v0, v4);
  if ( v1 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1, v4);
  if ( v2 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2, v4);
  return result;
}
