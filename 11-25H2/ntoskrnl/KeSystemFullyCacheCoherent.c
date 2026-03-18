/*
 * XREFs of KeSystemFullyCacheCoherent @ 0x1405B8EB0
 * Callers:
 *     HalpGetCacheCoherency @ 0x1406F17D0 (HalpGetCacheCoherency.c)
 * Callees:
 *     <none>
 */

__int64 KeSystemFullyCacheCoherent()
{
  return (unsigned int)KiSystemFullyCoherent;
}
