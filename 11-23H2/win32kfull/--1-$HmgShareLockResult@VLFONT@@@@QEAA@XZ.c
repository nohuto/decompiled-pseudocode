/*
 * XREFs of ??1?$HmgShareLockResult@VLFONT@@@@QEAA@XZ @ 0x1C013F738
 * Callers:
 *     GreSelectFontInternal @ 0x1C011A874 (GreSelectFontInternal.c)
 *     GreSelectFont @ 0x1C011C490 (GreSelectFont.c)
 * Callees:
 *     ?CleanupRoutine@?$HmgShareLockResult@VLFONT@@@@QEAAXXZ @ 0x1C013F764 (-CleanupRoutine@-$HmgShareLockResult@VLFONT@@@@QEAAXXZ.c)
 */

__int64 __fastcall HmgShareLockResult<LFONT>::~HmgShareLockResult<LFONT>(__int64 a1)
{
  HmgShareLockResult<LFONT>::CleanupRoutine();
  return PopThreadGuardedObject(a1 + 8);
}
