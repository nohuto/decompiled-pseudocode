/*
 * XREFs of IopSetFsRegistrationInProgress @ 0x140593F20
 * Callers:
 *     IoRegisterFileSystem @ 0x140711E80 (IoRegisterFileSystem.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall IopSetFsRegistrationInProgress(char a1)
{
  KIRQL v2; // al

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  IopFsRegistrationInProgress = a1;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
}
