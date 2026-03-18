/*
 * XREFs of PpmPerfControlActionCallback @ 0x1404AF690
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckContinueExecution @ 0x1403B099C (PpmCheckContinueExecution.c)
 */

BOOLEAN PpmPerfControlActionCallback()
{
  return PpmCheckContinueExecution();
}
