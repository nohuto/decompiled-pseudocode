/*
 * XREFs of ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1401CD538
 * Callers:
 *     EngDeleteDriverObj @ 0x1401CD5B0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1401CD6C0 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1401CD720 (EngUnlockDriverObj.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1400260C0 (PopThreadGuardedObject.c)
 *     ?CleanupRoutine@?$HmgLockResult@VDRVOBJ@@@@QEAAXXZ @ 0x1401CD55C (-CleanupRoutine@-$HmgLockResult@VDRVOBJ@@@@QEAAXXZ.c)
 */

void __fastcall HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(__int64 a1)
{
  HmgLockResult<DRVOBJ>::CleanupRoutine();
  PopThreadGuardedObject((_QWORD *)(a1 + 8));
}
