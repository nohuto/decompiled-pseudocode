/*
 * XREFs of PpmPerfControlActionCallback @ 0x1404AAC90
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckContinueExecution @ 0x1402B065C (PpmCheckContinueExecution.c)
 */

BOOLEAN PpmPerfControlActionCallback()
{
  return PpmCheckContinueExecution();
}
