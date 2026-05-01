/*
 * XREFs of ??0CAutoSRWExclusiveLock@@QEAA@AEAVCSRWLock@@@Z @ 0x1801AC71C
 * Callers:
 *     ?LockExclusive@ObjectWithIamLock@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x180303D44 (-LockExclusive@ObjectWithIamLock@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 * Callees:
 *     <none>
 */

CAutoSRWExclusiveLock *__fastcall CAutoSRWExclusiveLock::CAutoSRWExclusiveLock(
        CAutoSRWExclusiveLock *this,
        RTL_SRWLOCK *a2)
{
  *(_QWORD *)this = a2;
  AcquireSRWLockExclusive(a2);
  return this;
}
