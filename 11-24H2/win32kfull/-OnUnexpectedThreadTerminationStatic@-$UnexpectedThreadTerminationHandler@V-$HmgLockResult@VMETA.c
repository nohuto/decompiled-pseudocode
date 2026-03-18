/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgLockResult@VMETA@@@@@@SAXPEAX@Z @ 0x14030FBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupRoutine@?$HmgLockResult@VMETA@@@@QEAAXXZ @ 0x14030FBAC (-CleanupRoutine@-$HmgLockResult@VMETA@@@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic(
        OBJECT **a1)
{
  HmgLockResult<META>::CleanupRoutine(a1);
}
