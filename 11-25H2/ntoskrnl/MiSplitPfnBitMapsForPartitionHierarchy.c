/*
 * XREFs of MiSplitPfnBitMapsForPartitionHierarchy @ 0x14067FC04
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14067D694 (MiActOnPartitionNodePages.c)
 *     MiAcquireAddMemoryResources @ 0x1407D86E8 (MiAcquireAddMemoryResources.c)
 * Callees:
 *     MiSplitPfnBitMaps @ 0x1407EAFD0 (MiSplitPfnBitMaps.c)
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
