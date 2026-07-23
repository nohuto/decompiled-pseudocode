/*
 * XREFs of KeSystemFullyCacheCoherent @ 0x1405BA380
 * Callers:
 *     HalpGetCacheCoherency @ 0x1406FB200 (HalpGetCacheCoherency.c)
 * Callees:
 *     <none>
 */

__int64 KeSystemFullyCacheCoherent()
{
  return (unsigned int)KiSystemFullyCoherent;
}
