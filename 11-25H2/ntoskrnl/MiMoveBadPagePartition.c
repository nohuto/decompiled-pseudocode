/*
 * XREFs of MiMoveBadPagePartition @ 0x14067F7C4
 * Callers:
 *     MiTransferPartitionPageRun @ 0x14067FC6C (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MiUnlinkPageFromBadList @ 0x1403BA1C4 (MiUnlinkPageFromBadList.c)
 *     MiUpdatePartitionChildPageCounts @ 0x140680074 (MiUpdatePartitionChildPageCounts.c)
 */

__int64 __fastcall MiMoveBadPagePartition(__int64 a1, ULONG *a2, ULONG_PTR a3)
{
  MiUnlinkPageFromBadList(a3, 0);
  MiAcquireNonPagedResources(a2, 1uLL, 0LL, 1LL);
  MiReleaseNonPagedResources(a1, 1uLL);
  *(_QWORD *)(a3 + 40) = ((unsigned __int64)*(unsigned __int16 *)a2 << 43) ^ (*(_QWORD *)(a3 + 40) ^ ((unsigned __int64)*(unsigned __int16 *)a2 << 43)) & 0xFFE007FFFFFFFFFFuLL;
  *(_QWORD *)(a3 + 16) &= 0xFFFFFFFFF7FFF3FFuLL;
  if ( a2 != &MiSystemPartition )
  {
    ++*((_QWORD *)a2 + 2314);
    *((_BYTE *)a2 + 12) = 1;
  }
  --*(_QWORD *)(a1 + 18512);
  *(_BYTE *)(a1 + 12) = 1;
  MiInsertPageInList(a3, 0x20u);
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return MiUpdatePartitionChildPageCounts(a2, a1, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a3 + 0x220000000000LL) >> 4), 1LL);
}
