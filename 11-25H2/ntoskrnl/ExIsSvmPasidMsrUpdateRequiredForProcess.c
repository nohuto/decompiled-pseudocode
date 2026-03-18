/*
 * XREFs of ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x1408F3CDC
 * Callers:
 *     ExpAssignPasid @ 0x1407B1338 (ExpAssignPasid.c)
 *     PspRecheckThreadPasidMsrState @ 0x1408F3C78 (PspRecheckThreadPasidMsrState.c)
 * Callees:
 *     ExIsSvmEnabledForProcess @ 0x14048BE0C (ExIsSvmEnabledForProcess.c)
 *     KeIsEnqueueStoreSupported @ 0x1404A9F30 (KeIsEnqueueStoreSupported.c)
 */

char __fastcall ExIsSvmPasidMsrUpdateRequiredForProcess(__int64 a1)
{
  char v1; // dl

  if ( ExIsSvmEnabledForProcess(a1) && KeIsEnqueueStoreSupported() )
    return 1;
  return v1;
}
