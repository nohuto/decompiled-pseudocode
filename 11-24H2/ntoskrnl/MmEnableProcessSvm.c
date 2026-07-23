/*
 * XREFs of MmEnableProcessSvm @ 0x14066BC8C
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x1406576CC (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
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
