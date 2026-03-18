/*
 * XREFs of ?LockedExclusive@CEResourceLock@@QEBA_NXZ @ 0x1401F3E74
 * Callers:
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x1401433C0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x140182DBC (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CEResourceLock::LockedExclusive(PERESOURCE *this)
{
  return ExIsResourceAcquiredExclusiveLite(*this) != 0;
}
