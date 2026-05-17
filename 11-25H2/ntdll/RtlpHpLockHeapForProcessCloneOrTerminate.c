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

__int64 __fastcall RtlpHpLockHeapForProcessCloneOrTerminate(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 320;
  RtlpHpLargeLockAcquire(a1 + 320);
  RtlpHpLargeLockAcquire(v1 + 192);
  RtlpHpLargeLockAcquire(a1);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v1 + 112));
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v1 + 304));
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 232));
  RtlpHpVsContextLockUnlock(a1 + 704, 0LL);
  return RtlpHpLfhContextLockUnlock(a1 + 832);
}
