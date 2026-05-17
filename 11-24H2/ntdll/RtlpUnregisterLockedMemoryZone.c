/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x18000197C
 * Callers:
 *     RtlUnlockMemoryZone @ 0x1800018E0 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x18010D7F0 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlUnlockModuleSection @ 0x180001D20 (RtlUnlockModuleSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 RtlpUnregisterLockedMemoryZone()
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  return RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
