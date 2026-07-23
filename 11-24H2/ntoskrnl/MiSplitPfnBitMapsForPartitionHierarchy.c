/*
 * XREFs of MiSplitPfnBitMapsForPartitionHierarchy @ 0x14068C5C4
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14068A054 (MiActOnPartitionNodePages.c)
 *     MiAcquireAddMemoryResources @ 0x1407E8B78 (MiAcquireAddMemoryResources.c)
 * Callees:
 *     MiSplitPfnBitMaps @ 0x1407FB5D0 (MiSplitPfnBitMaps.c)
 */

__int64 __fastcall MiSplitPfnBitMapsForPartitionHierarchy(__int64 a1, __int64 a2, __int64 a3)
{
  while ( (unsigned int)MiSplitPfnBitMaps(a1, a2, a3) )
  {
    if ( (ULONG *)a1 == &MiSystemPartition )
      return 1LL;
    a1 = **(_QWORD **)(*(_QWORD *)(a1 + 184) + 72LL);
  }
  return 0LL;
}
