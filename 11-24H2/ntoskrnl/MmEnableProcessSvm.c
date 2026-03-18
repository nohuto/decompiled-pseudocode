/*
 * XREFs of MmEnableProcessSvm @ 0x14066AABC
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x14065902C (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 */

void MmEnableProcessSvm()
{
  _KPROCESS *Process; // rbx
  unsigned __int8 v1; // al

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = MiLockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink);
  BYTE3(Process[2].ContextSwitches) = HIBYTE(LODWORD(Process[2].ContextSwitches)) | 2;
  MiUnlockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, v1);
}
