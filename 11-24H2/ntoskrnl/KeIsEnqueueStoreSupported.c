/*
 * XREFs of KeIsEnqueueStoreSupported @ 0x1404A800C
 * Callers:
 *     ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x1408A68E4 (ExIsSvmPasidMsrUpdateRequiredForProcess.c)
 * Callees:
 *     <none>
 */

char KeIsEnqueueStoreSupported()
{
  return HIBYTE(KeFeatureBits) & 1;
}
