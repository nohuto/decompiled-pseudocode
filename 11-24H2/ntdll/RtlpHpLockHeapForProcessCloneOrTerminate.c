/*
 * XREFs of RtlpHpLockHeapForProcessCloneOrTerminate @ 0x1800944B4
 * Callers:
 *     RtlLockProcessHeapOnProcessTerminate @ 0x18000322C (RtlLockProcessHeapOnProcessTerminate.c)
 *     RtlpLockHeapForClone @ 0x180142A28 (RtlpLockHeapForClone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLargeLockAcquire @ 0x180093A88 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpVsContextLockUnlock @ 0x18011C3B8 (RtlpHpVsContextLockUnlock.c)
 */

__int64 __fastcall RtlpHpLockHeapForProcessCloneOrTerminate(
        __int64 a1,
        volatile signed __int32 **a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  volatile signed __int32 **v5; // rdx
  unsigned __int64 v6; // r8
  volatile signed __int32 **v7; // rdx
  unsigned __int64 v8; // r8
  volatile signed __int32 **v9; // rdx
  unsigned __int64 v10; // r8
  volatile signed __int32 **v11; // rdx
  unsigned __int64 v12; // r8
  volatile signed __int32 **v13; // rdx
  unsigned __int64 v14; // r8

  v3 = a1 + 320;
  RtlpHpLargeLockAcquire(a1 + 320, a2, a3);
  RtlpHpLargeLockAcquire(v3 + 192, v5, v6);
  RtlpHpLargeLockAcquire(a1, v7, v8);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v3 + 112), v9, v10);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v3 + 304), v11, v12);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 232), v13, v14);
  RtlpHpVsContextLockUnlock(a1 + 704, 0LL);
  return RtlpHpLfhContextLockUnlock(a1 + 832);
}
