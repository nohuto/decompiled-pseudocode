/*
 * XREFs of KeSystemFullyCacheCoherent @ 0x1405BCD50
 * Callers:
 *     HalpGetCacheCoherency @ 0x1406FD5C0 (HalpGetCacheCoherency.c)
 * Callees:
 *     <none>
 */

__int64 KeSystemFullyCacheCoherent()
{
  return (unsigned int)KiSystemFullyCoherent;
}
