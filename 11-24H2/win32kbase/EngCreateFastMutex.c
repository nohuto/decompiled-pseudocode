/*
 * XREFs of EngCreateFastMutex @ 0x1401C4360
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateFastMutex @ 0x1401C49C0 (GreCreateFastMutex.c)
 */

HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
