/*
 * XREFs of MiFreeCachedKernelShadowStackEntryCount @ 0x140674630
 * Callers:
 *     MiCreatePartitionOffsets @ 0x1407DC65C (MiCreatePartitionOffsets.c)
 * Callees:
 *     <none>
 */

__int64 MiFreeCachedKernelShadowStackEntryCount()
{
  return 1536LL * (unsigned __int16)KeNumberNodes;
}
