/*
 * XREFs of RtlpUnregisterLockedMemoryBlockLookaside @ 0x1800AA93C
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x180105AA0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180108670 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x1800AAA30 (RtlUnlockModuleSection.c)
 */

void RtlpUnregisterLockedMemoryBlockLookaside()
{
  PVOID *v0; // rbx
  __int64 v1; // rdi

  RtlAcquireSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  if ( !--RtlpLockedMemoryBlockLookasideCount )
  {
    v0 = (PVOID *)RtlpMemoryBlockLookasideCriticalRoutines;
    v1 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v0++);
      --v1;
    }
    while ( v1 );
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
}
