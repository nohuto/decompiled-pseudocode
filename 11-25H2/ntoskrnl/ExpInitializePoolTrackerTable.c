/*
 * XREFs of ExpInitializePoolTrackerTable @ 0x1406489C0
 * Callers:
 *     ExInitializePoolTracker @ 0x140C3115C (ExInitializePoolTracker.c)
 * Callees:
 *     ExAllocateHeapPages @ 0x1402F7304 (ExAllocateHeapPages.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmGetNumberOfPhysicalPages @ 0x140A0A990 (MmGetNumberOfPhysicalPages.c)
 */

__int64 ExpInitializePoolTrackerTable()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rcx
  __int64 v3; // r8

  if ( PoolTrackTableSize )
  {
    v0 = 64LL;
    if ( (unsigned __int64)PoolTrackTableSize >= 0x40 )
    {
      _BitScanReverse64(&v1, PoolTrackTableSize);
      v0 = 1LL << v1;
    }
  }
  else
  {
    v0 = 4096LL;
    PoolTrackTableSize = 4096LL;
    if ( (unsigned __int64)MmGetNumberOfPhysicalPages(0LL) > 0x10000 )
      goto LABEL_7;
    v0 = 512LL;
  }
  while ( 1 )
  {
    PoolTrackTableSize = v0;
LABEL_7:
    if ( v0 + 1 > 0x333333333333333LL )
      goto LABEL_10;
    PoolTrackTable = ExAllocateHeapPages(0x333333333333333LL, (80 * v0 + 4175) & 0xFFFFFFFFFFFFF000uLL);
    if ( PoolTrackTable )
      break;
    v0 = PoolTrackTableSize;
    if ( PoolTrackTableSize == 1 )
      return 3221225626LL;
LABEL_10:
    v0 >>= 1;
  }
  PoolTrackTableMask = PoolTrackTableSize - 1;
  v3 = 5 * ++PoolTrackTableSize;
  memset_0((void *)PoolTrackTable, 0, 16 * v3);
  return 0LL;
}
