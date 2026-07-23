/*
 * XREFs of KeIsEnqueueStoreSupported @ 0x1404A2A5C
 * Callers:
 *     ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x1408FCEF4 (ExIsSvmPasidMsrUpdateRequiredForProcess.c)
 * Callees:
 *     <none>
 */

char KeIsEnqueueStoreSupported()
{
  return HIBYTE(KeFeatureBits) & 1;
}
