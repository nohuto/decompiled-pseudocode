/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x180105B9C
 * Callers:
 *     RtlUnlockMemoryZone @ 0x180105B00 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x1801086D0 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x1800AAA30 (RtlUnlockModuleSection.c)
 */

void RtlpUnregisterLockedMemoryZone()
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
