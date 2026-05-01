/*
 * XREFs of CempLockTrackerAreLocksHeldAtLevelOrHigher @ 0x1800041E0
 * Callers:
 *     ?ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x180004634 (-ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArAcquireGlobalLockShared@@YAXXZ @ 0x180005F38 (-ArAcquireGlobalLockShared@@YAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CempLockTrackerAreLocksHeldAtLevelOrHigher(DWORD a1, char a2)
{
  return a1 != -1 && (~((1LL << a2) - 1) & *(_QWORD *)TlsGetValue(a1)) != 0;
}
