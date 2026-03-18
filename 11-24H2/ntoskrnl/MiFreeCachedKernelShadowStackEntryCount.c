/*
 * XREFs of MiFreeCachedKernelShadowStackEntryCount @ 0x14067FE50
 * Callers:
 *     MiCreatePartitionOffsets @ 0x1407EC4FC (MiCreatePartitionOffsets.c)
 * Callees:
 *     <none>
 */

__int64 MiFreeCachedKernelShadowStackEntryCount()
{
  return 1536LL * (unsigned __int16)KeNumberNodes;
}
