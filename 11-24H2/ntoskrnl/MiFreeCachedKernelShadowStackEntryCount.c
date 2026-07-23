/*
 * XREFs of MiFreeCachedKernelShadowStackEntryCount @ 0x140681050
 * Callers:
 *     MiCreatePartitionOffsets @ 0x1407ECACC (MiCreatePartitionOffsets.c)
 * Callees:
 *     <none>
 */

__int64 MiFreeCachedKernelShadowStackEntryCount()
{
  return 1536LL * (unsigned __int16)KeNumberNodes;
}
