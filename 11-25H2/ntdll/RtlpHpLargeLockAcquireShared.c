/*
 * XREFs of RtlpHpLargeLockAcquireShared @ 0x1800F5B3C
 * Callers:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1800F5AF8 (RtlpHpLargeAllocSetExtraPresent.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 */

char __fastcall RtlpHpLargeLockAcquireShared(_RTL_SRWLOCK *a1)
{
  RtlAcquireSRWLockShared(a1 + 8);
  return -1;
}
