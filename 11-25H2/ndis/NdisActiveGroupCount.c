/*
 * XREFs of NdisActiveGroupCount @ 0x1400DB7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT NdisActiveGroupCount(void)
{
  return KeQueryActiveGroupCount();
}
