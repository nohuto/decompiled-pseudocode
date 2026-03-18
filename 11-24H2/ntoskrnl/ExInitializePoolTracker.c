/*
 * XREFs of ExInitializePoolTracker @ 0x140C4246C
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x140659E80 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     ExpInsertPoolTracker @ 0x1402C4BA8 (ExpInsertPoolTracker.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     ExpInitializePoolTrackerTable @ 0x1406548C0 (ExpInitializePoolTrackerTable.c)
 *     ExpSeedHotTags @ 0x140C42588 (ExpSeedHotTags.c)
 */

__int64 ExInitializePoolTracker()
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // ecx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v2 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v3 = (v2 | (unsigned int)ExGenRandom(0)) ^ v1;
  if ( !v3 )
    v3 = 1LL;
  _BitScanReverse((unsigned int *)&v4, KeLargestCacheLine);
  ExpPoolQuotaCookie = v3;
  ExpCacheLineSize = 1 << v4;
  if ( (unsigned int)(1 << v4) >= 0x10 )
  {
    if ( (unsigned int)(1 << v4) > 0x1000 )
      ExpCacheLineSize = 4096;
  }
  else
  {
    ExpCacheLineSize = 16;
  }
  result = ExpInitializePoolTrackerTable();
  if ( (int)result >= 0 )
  {
    ExPoolTagTables = (void *)PoolTrackTable;
    ExpSeedHotTags();
    ExpTaggedPoolLock = 0LL;
    ExpInsertPoolTracker(0x6C6F6F50u, (80 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL, 64LL, PoolTrackTable);
    return 0LL;
  }
  return result;
}
