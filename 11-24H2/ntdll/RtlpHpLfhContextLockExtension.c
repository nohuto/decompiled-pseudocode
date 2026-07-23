/*
 * XREFs of RtlpHpLfhContextLockExtension @ 0x1800D6800
 * Callers:
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x180060FB8 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800D638C (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1800D660C (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1800D6728 (RtlpHpLfhContextMetadataAllocate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpHpLfhContextLockExtension(_RTL_SRWLOCK *a1)
{
  RtlAcquireSRWLockExclusive(a1 + 16);
  return -1;
}
