/*
 * XREFs of KeQueryActiveProcessors @ 0x1404AFBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return KeActiveProcessors.Bitmap[0];
}
