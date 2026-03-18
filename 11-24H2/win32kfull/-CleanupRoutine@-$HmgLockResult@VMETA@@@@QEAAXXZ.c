/*
 * XREFs of ?CleanupRoutine@?$HmgLockResult@VMETA@@@@QEAAXXZ @ 0x14030FBAC
 * Callers:
 *     ??1?$HmgLockResult@VMETA@@@@QEAA@XZ @ 0x14030FB80 (--1-$HmgLockResult@VMETA@@@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgLockResult@VMETA@@@@@@SAXPEAX@Z @ 0x14030FBE0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@V-$HmgLockResult@VMETA.c)
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

void __fastcall HmgLockResult<META>::CleanupRoutine(OBJECT **a1)
{
  OBJECT *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    OBJECT::InterlockedDecrementExclusiveLockCount(v2);
    *a1 = 0LL;
  }
}
