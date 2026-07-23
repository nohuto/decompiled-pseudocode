/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x18009EEEC
 * Callers:
 *     RtlpHpLargeAlloc @ 0x18009A714 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeReAlloc @ 0x18009E474 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeFree @ 0x18009E878 (RtlpHpLargeFree.c)
 *     RtlpHpLockHeapForProcessCloneOrTerminate @ 0x18009EF68 (RtlpHpLockHeapForProcessCloneOrTerminate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpHpLargeLockAcquire(_RTL_SRWLOCK *a1)
{
  RtlAcquireSRWLockExclusive(a1 + 8);
  return -1;
}
