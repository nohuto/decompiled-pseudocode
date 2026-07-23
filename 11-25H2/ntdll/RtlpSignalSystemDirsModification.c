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

void RtlpSignalSystemDirsModification()
{
  void *v0; // rsi
  void *v1; // rdi
  void *v2; // rbx

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v0 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v1 = (void *)RtlpInvalidatePathCache(&RtlpExeSearchPath);
  v2 = (void *)RtlpInvalidatePathCache(&RtlpSearchPath);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v0 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v0);
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
}
