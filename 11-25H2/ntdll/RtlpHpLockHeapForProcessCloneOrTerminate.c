/*
 * XREFs of RtlpHpLockHeapForProcessCloneOrTerminate @ 0x1800BD694
 * Callers:
 *     RtlLockProcessHeapOnProcessTerminate @ 0x18011008C (RtlLockProcessHeapOnProcessTerminate.c)
 *     RtlpLockHeapForClone @ 0x180144118 (RtlpLockHeapForClone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLargeLockAcquire @ 0x1800BD0C8 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpVsContextLockUnlock @ 0x18011DC50 (RtlpHpVsContextLockUnlock.c)
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
  return RtlpHpLfhContextLockUnlock(&a1[104]);
}
