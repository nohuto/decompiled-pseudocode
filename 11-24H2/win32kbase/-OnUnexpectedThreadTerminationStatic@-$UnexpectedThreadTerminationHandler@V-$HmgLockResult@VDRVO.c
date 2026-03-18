/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgLockResult@VDRVOBJ@@@@@@SAXPEAX@Z @ 0x1401CD590
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupRoutine@?$HmgLockResult@VDRVOBJ@@@@QEAAXXZ @ 0x1401CD55C (-CleanupRoutine@-$HmgLockResult@VDRVOBJ@@@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<HmgLockResult<DRVOBJ>>::OnUnexpectedThreadTerminationStatic(
        OBJECT **a1)
{
  HmgLockResult<DRVOBJ>::CleanupRoutine(a1);
}
