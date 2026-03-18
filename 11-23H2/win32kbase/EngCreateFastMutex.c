/*
 * XREFs of EngCreateFastMutex @ 0x1C0169DD0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateFastMutex @ 0x1C007E708 (GreCreateFastMutex.c)
 */

HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
