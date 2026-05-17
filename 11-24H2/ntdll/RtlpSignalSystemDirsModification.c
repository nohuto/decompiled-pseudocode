/*
 * XREFs of RtlpSignalSystemDirsModification @ 0x18015E5B4
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FAF6C (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpInvalidatePathCache @ 0x18010D3AC (RtlpInvalidatePathCache.c)
 */

__int64 __fastcall RtlpSignalSystemDirsModification(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 result; // rax

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpCachedPathLock, a2, a3);
  v3 = RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v4 = RtlpInvalidatePathCache(&RtlpExeSearchPath);
  v5 = RtlpInvalidatePathCache(&RtlpSearchPath);
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v3 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
  if ( v4 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( v5 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  return result;
}
