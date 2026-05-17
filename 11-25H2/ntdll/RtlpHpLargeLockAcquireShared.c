/*
 * XREFs of RtlpHpLargeLockAcquireShared @ 0x1800F5B3C
 * Callers:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1800F5AF8 (RtlpHpLargeAllocSetExtraPresent.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 */

char __fastcall RtlpHpLargeLockAcquireShared(__int64 a1)
{
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 64));
  return -1;
}
