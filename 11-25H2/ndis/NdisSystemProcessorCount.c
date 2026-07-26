/*
 * XREFs of NdisSystemProcessorCount @ 0x1400DB8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CCHAR NdisSystemProcessorCount(void)
{
  return KeQueryMaximumProcessorCountEx(0);
}
