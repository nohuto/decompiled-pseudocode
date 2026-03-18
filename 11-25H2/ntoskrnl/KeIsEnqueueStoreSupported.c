/*
 * XREFs of KeIsEnqueueStoreSupported @ 0x1404A9F30
 * Callers:
 *     ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x1408F3CDC (ExIsSvmPasidMsrUpdateRequiredForProcess.c)
 * Callees:
 *     <none>
 */

char KeIsEnqueueStoreSupported()
{
  return HIBYTE(KeFeatureBits) & 1;
}
