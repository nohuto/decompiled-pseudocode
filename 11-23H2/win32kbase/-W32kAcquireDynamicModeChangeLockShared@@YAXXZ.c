/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C0169130
 * Callers:
 *     <none>
 * Callees:
 *     DxEngLockShareSem @ 0x1C01693B0 (DxEngLockShareSem.c)
 */

void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
