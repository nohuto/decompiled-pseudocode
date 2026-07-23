/*
 * XREFs of ExpInitializePoolTrackerTable @ 0x140652FC0
 * Callers:
 *     ExInitializePoolTracker @ 0x140C445BC (ExInitializePoolTracker.c)
 * Callees:
 *     ExAllocateHeapPages @ 0x1403E9344 (ExAllocateHeapPages.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 ExpInitializePoolTrackerTable()
{
  unsigned __int64 v0; // rdx
  unsigned __int64 v1; // rcx
  void *HeapPages; // rax

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
    if ( *(_QWORD *)(*(_QWORD *)qword_140E300C8 + 18512LL) > 0x10000uLL )
      goto LABEL_7;
    v0 = 512LL;
  }
  while ( 1 )
  {
    PoolTrackTableSize = v0;
LABEL_7:
    if ( v0 + 1 > 0x333333333333333LL )
      goto LABEL_10;
    HeapPages = (void *)ExAllocateHeapPages(0x333333333333333LL, (80 * v0 + 4175) & 0xFFFFFFFFFFFFF000uLL);
    v0 = PoolTrackTableSize;
    PoolTrackTable = (__int64)HeapPages;
    if ( HeapPages )
      break;
    if ( PoolTrackTableSize == 1 )
      return 3221225626LL;
LABEL_10:
    v0 >>= 1;
  }
  PoolTrackTableMask = PoolTrackTableSize++ - 1;
  memset_0(HeapPages, 0, 80 * (v0 + 1));
  return 0LL;
}
