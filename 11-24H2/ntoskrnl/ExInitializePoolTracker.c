/*
 * XREFs of ExInitializePoolTracker @ 0x140C445BC
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x140658520 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     ExpInsertPoolTracker @ 0x14021BE10 (ExpInsertPoolTracker.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     ExpInitializePoolTrackerTable @ 0x140652FC0 (ExpInitializePoolTrackerTable.c)
 *     ExpSeedHotTags @ 0x140C446D8 (ExpSeedHotTags.c)
 */

__int64 __fastcall ExInitializePoolTracker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  int v11; // ecx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v6 = (unsigned __int64)(unsigned int)ExGenRandom(0, MEMORY[0xFFFFF78000000018], (__int64)CurrentPrcb, a4) << 32;
  v10 = (v6 | (unsigned int)ExGenRandom(0, v7, v8, v9)) ^ v5;
  if ( !v10 )
    v10 = 1LL;
  _BitScanReverse((unsigned int *)&v11, KeLargestCacheLine);
  ExpPoolQuotaCookie = v10;
  ExpCacheLineSize = 1 << v11;
  if ( (unsigned int)(1 << v11) >= 0x10 )
  {
    if ( (unsigned int)(1 << v11) > 0x1000 )
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
