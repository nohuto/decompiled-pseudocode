/*
 * XREFs of KeIsExecutingDpc @ 0x14042D120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KeIsExecutingDpc()
{
  return KeGetPcr()->Prcb.DpcRequestSummary & 0x10001;
}
