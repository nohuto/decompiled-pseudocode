/*
 * XREFs of RtlpHpLfhContextLockExtension @ 0x180009A88
 * Callers:
 *     RtlpHpLfhContextMetadataFree @ 0x180009A2C (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x180009AA4 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1800B8200 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800F5658 (RtlpHpLfhContextLockUnlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpHpLfhContextLockExtension(_RTL_SRWLOCK *a1)
{
  RtlAcquireSRWLockExclusive(a1 + 16);
  return -1;
}
