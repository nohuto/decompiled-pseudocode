/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C0169390
 * Callers:
 *     <none>
 * Callees:
 *     DxEngUnlockShareSem @ 0x1C0169400 (DxEngUnlockShareSem.c)
 */

void W32kReleaseDynamicModeChangeLockShared(void)
{
  DxEngUnlockShareSem();
}
