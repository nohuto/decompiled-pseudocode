/*
 * XREFs of ?CleanupRoutine@?$HmgLockResult@VDRVOBJ@@@@QEAAXXZ @ 0x1401CD55C
 * Callers:
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1401CD538 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgLockResult@VDRVOBJ@@@@@@SAXPEAX@Z @ 0x1401CD590 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@V-$HmgLockResult@VDRVO.c)
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14003506C (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

void __fastcall HmgLockResult<DRVOBJ>::CleanupRoutine(OBJECT **a1)
{
  OBJECT *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    OBJECT::InterlockedDecrementExclusiveLockCount(v2);
    *a1 = 0LL;
  }
}
