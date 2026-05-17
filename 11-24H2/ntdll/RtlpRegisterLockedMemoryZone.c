/*
 * XREFs of RtlpRegisterLockedMemoryZone @ 0x180001BB8
 * Callers:
 *     RtlLockMemoryZone @ 0x180001AA0 (RtlLockMemoryZone.c)
 * Callees:
 *     RtlLockModuleSection @ 0x180001DD0 (RtlLockModuleSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 RtlpRegisterLockedMemoryZone()
{
  int v0; // edi
  int v1; // eax
  __int64 i; // rbx

  v0 = 0;
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  v1 = RtlpLockedMemoryZoneCount;
  if ( !RtlpLockedMemoryZoneCount )
  {
    for ( i = 0LL; !(_DWORD)i; i = 1LL )
    {
      v0 = RtlLockModuleSection(*(&RtlpMemoryZoneCriticalRoutines + i));
      if ( v0 < 0 )
        goto LABEL_3;
    }
    v1 = RtlpLockedMemoryZoneCount;
  }
  RtlpLockedMemoryZoneCount = v1 + 1;
LABEL_3:
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
  return (unsigned int)v0;
}
