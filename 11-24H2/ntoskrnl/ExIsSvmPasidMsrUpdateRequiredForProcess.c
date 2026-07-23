/*
 * XREFs of ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x1408FCEF4
 * Callers:
 *     ExpAssignPasid @ 0x1407C0F58 (ExpAssignPasid.c)
 *     PspRecheckThreadPasidMsrState @ 0x1408FCE90 (PspRecheckThreadPasidMsrState.c)
 * Callees:
 *     ExIsSvmEnabledForProcess @ 0x140485FF0 (ExIsSvmEnabledForProcess.c)
 *     KeIsEnqueueStoreSupported @ 0x1404A2A5C (KeIsEnqueueStoreSupported.c)
 */

char __fastcall ExIsSvmPasidMsrUpdateRequiredForProcess(__int64 a1)
{
  char v1; // dl

  if ( ExIsSvmEnabledForProcess(a1) && KeIsEnqueueStoreSupported() )
    return 1;
  return v1;
}
