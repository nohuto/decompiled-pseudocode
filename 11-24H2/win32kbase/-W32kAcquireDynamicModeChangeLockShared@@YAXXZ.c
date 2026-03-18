/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1401CD0C0
 * Callers:
 *     <none>
 * Callees:
 *     DxEngLockShareSem @ 0x1401CD1D0 (DxEngLockShareSem.c)
 */

void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
