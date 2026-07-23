/*
 * XREFs of RtlpHpLockHeapForProcessCloneOrTerminate @ 0x18009EF68
 * Callers:
 *     RtlLockProcessHeapOnProcessTerminate @ 0x1800AB850 (RtlLockProcessHeapOnProcessTerminate.c)
 *     RtlpLockHeapForClone @ 0x180140BD8 (RtlpLockHeapForClone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLargeLockAcquire @ 0x18009EEEC (RtlpHpLargeLockAcquire.c)
 *     RtlpHpVsContextLockUnlock @ 0x18011A5E8 (RtlpHpVsContextLockUnlock.c)
 */

__int64 __fastcall RtlpHpLockHeapForProcessCloneOrTerminate(_RTL_SRWLOCK *a1)
{
  _RTL_SRWLOCK *v1; // rbx

  v1 = a1 + 40;
  RtlpHpLargeLockAcquire(a1 + 40);
  RtlpHpLargeLockAcquire(v1 + 24);
  RtlpHpLargeLockAcquire(a1);
  RtlAcquireSRWLockExclusive(v1 + 14);
  RtlAcquireSRWLockExclusive(v1 + 38);
  RtlAcquireSRWLockExclusive(a1 + 29);
  RtlpHpVsContextLockUnlock(&a1[88], 0LL);
  return RtlpHpLfhContextLockUnlock(&a1[104], 0LL);
}
