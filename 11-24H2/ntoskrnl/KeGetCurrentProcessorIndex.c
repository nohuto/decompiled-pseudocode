/*
 * XREFs of KeGetCurrentProcessorIndex @ 0x140429710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG KeGetCurrentProcessorIndex(void)
{
  return KeGetPcr()->Prcb.Number;
}
