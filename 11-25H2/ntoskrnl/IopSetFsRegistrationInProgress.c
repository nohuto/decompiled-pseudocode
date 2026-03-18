/*
 * XREFs of IopSetFsRegistrationInProgress @ 0x140593890
 * Callers:
 *     IoRegisterFileSystem @ 0x1407081F0 (IoRegisterFileSystem.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall IopSetFsRegistrationInProgress(char a1)
{
  KIRQL v2; // al

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  IopFsRegistrationInProgress = a1;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
}
