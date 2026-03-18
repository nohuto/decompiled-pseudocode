/*
 * XREFs of ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x1408A68E4
 * Callers:
 *     ExpAssignPasid @ 0x1407C0B08 (ExpAssignPasid.c)
 *     PspRecheckThreadPasidMsrState @ 0x1408A6880 (PspRecheckThreadPasidMsrState.c)
 * Callees:
 *     ExIsSvmEnabledForProcess @ 0x14048B1C0 (ExIsSvmEnabledForProcess.c)
 *     KeIsEnqueueStoreSupported @ 0x1404A800C (KeIsEnqueueStoreSupported.c)
 */

char __fastcall ExIsSvmPasidMsrUpdateRequiredForProcess(__int64 a1)
{
  char v1; // dl

  if ( ExIsSvmEnabledForProcess(a1) && KeIsEnqueueStoreSupported() )
    return 1;
  return v1;
}
