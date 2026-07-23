/*
 * XREFs of RtlpRegisterLockedMemoryBlockLookaside @ 0x1800F0228
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x1800EFFC0 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x1800F02C0 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x1800F0370 (RtlLockModuleSection.c)
 */

__int64 RtlpRegisterLockedMemoryBlockLookaside()
{
  NTSTATUS v0; // esi
  int v1; // eax
  __int64 i; // rbx
  PVOID *v4; // rdi

  v0 = 0;
  RtlAcquireSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  v1 = RtlpLockedMemoryBlockLookasideCount;
  if ( RtlpLockedMemoryBlockLookasideCount )
  {
LABEL_2:
    RtlpLockedMemoryBlockLookasideCount = v1 + 1;
  }
  else
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 4 )
      {
        v1 = RtlpLockedMemoryBlockLookasideCount;
        goto LABEL_2;
      }
      v4 = (PVOID *)(&RtlpMemoryBlockLookasideCriticalRoutines + i);
      v0 = RtlLockModuleSection(*v4);
      if ( v0 < 0 )
        break;
    }
    for ( ; (_DWORD)i; LODWORD(i) = i - 1 )
      RtlUnlockModuleSection(*--v4);
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  return (unsigned int)v0;
}
