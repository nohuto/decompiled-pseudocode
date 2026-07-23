/*
 * XREFs of MiMoveBadPagePartition @ 0x14068C184
 * Callers:
 *     MiTransferPartitionPageRun @ 0x14068C62C (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiUnlinkPageFromBadList @ 0x1403F6AAC (MiUnlinkPageFromBadList.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14068CA34 (MiUpdatePartitionChildPageCounts.c)
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
