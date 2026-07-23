/*
 * XREFs of RtlpRegisterLockedMemoryZone @ 0x1800F0158
 * Callers:
 *     RtlLockMemoryZone @ 0x1800F0040 (RtlLockMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlLockModuleSection @ 0x1800F0370 (RtlLockModuleSection.c)
 */

__int64 RtlpRegisterLockedMemoryZone()
{
  NTSTATUS v0; // edi
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
