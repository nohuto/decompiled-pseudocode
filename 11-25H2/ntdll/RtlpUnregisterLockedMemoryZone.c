/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x1800F068C
 * Callers:
 *     RtlUnlockMemoryZone @ 0x1800F05F0 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180110270 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x1800F02C0 (RtlUnlockModuleSection.c)
 */

__int64 RtlpUnregisterLockedMemoryZone()
{
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpMemoryZoneLock);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection((__int64)RtlAllocateMemoryZone);
  return RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
