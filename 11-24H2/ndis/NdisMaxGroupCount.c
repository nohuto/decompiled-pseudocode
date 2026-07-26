/*
 * XREFs of NdisMaxGroupCount @ 0x1400D44F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT NdisMaxGroupCount(void)
{
  return KeQueryMaximumGroupCount();
}
