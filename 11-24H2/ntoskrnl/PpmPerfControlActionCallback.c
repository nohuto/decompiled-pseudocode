/*
 * XREFs of PpmPerfControlActionCallback @ 0x1404B0400
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckContinueExecution @ 0x140351834 (PpmCheckContinueExecution.c)
 */

BOOLEAN PpmPerfControlActionCallback()
{
  return PpmCheckContinueExecution();
}
