/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x1800BD0C8
 * Callers:
 *     RtlpHpLargeFree @ 0x180009DDC (RtlpHpLargeFree.c)
 *     RtlpHpLargeReAlloc @ 0x1800BCCC4 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeAlloc @ 0x1800BD0E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpLockHeapForProcessCloneOrTerminate @ 0x1800BD694 (RtlpHpLockHeapForProcessCloneOrTerminate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpHpLargeLockAcquire(_RTL_SRWLOCK *a1)
{
  RtlAcquireSRWLockExclusive(a1 + 8);
  return -1;
}
