/*
 * XREFs of ?TdrIsEnabled@@YA_NXZ @ 0x1401D01D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool TdrIsEnabled(void)
{
  return g_TdrConfig != 0;
}
