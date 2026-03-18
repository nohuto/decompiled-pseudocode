/*
 * XREFs of VerifierKeIsExecutingLegacyDpc @ 0x140B95630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 VerifierKeIsExecutingLegacyDpc()
{
  return KeGetPcr()->Prcb.DpcRequestSummary & 1;
}
