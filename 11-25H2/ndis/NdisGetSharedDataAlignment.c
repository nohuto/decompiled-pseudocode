/*
 * XREFs of NdisGetSharedDataAlignment @ 0x1400865F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG NdisGetSharedDataAlignment(void)
{
  return KeGetRecommendedSharedDataAlignment();
}
