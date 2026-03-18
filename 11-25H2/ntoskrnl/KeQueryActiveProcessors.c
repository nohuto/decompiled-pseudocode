/*
 * XREFs of KeQueryActiveProcessors @ 0x1404AEDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return KeActiveProcessors.Bitmap[0];
}
