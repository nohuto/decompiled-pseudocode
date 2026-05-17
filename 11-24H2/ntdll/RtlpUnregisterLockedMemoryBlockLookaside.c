/*
 * XREFs of RtlpUnregisterLockedMemoryBlockLookaside @ 0x180001C2C
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x1800019C0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x18010D790 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlUnlockModuleSection @ 0x180001D20 (RtlUnlockModuleSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 RtlpUnregisterLockedMemoryBlockLookaside()
{
  __int64 (__fastcall **v1)(); // rbx
  __int64 v2; // rdi

  RtlAcquireSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  if ( !--RtlpLockedMemoryBlockLookasideCount )
  {
    v1 = RtlpMemoryBlockLookasideCriticalRoutines;
    v2 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v1++);
      --v2;
    }
    while ( v2 );
  }
  return RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
}
