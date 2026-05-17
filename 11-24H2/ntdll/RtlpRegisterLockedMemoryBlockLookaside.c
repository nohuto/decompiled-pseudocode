/*
 * XREFs of RtlpRegisterLockedMemoryBlockLookaside @ 0x180001C88
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x180001A20 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlUnlockModuleSection @ 0x180001D20 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180001DD0 (RtlLockModuleSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 RtlpRegisterLockedMemoryBlockLookaside()
{
  int v0; // esi
  int v1; // eax
  __int64 i; // rbx
  __int64 (__fastcall **v4)(); // rdi

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
      v4 = &RtlpMemoryBlockLookasideCriticalRoutines[i];
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
