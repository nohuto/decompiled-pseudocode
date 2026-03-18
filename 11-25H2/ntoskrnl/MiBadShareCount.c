/*
 * XREFs of MiBadShareCount @ 0x140340DD8
 * Callers:
 *     MiDeleteSectionCluster @ 0x140229404 (MiDeleteSectionCluster.c)
 *     MiWsleFree @ 0x14022FD60 (MiWsleFree.c)
 *     MiDeleteClusterPage @ 0x1402C48B0 (MiDeleteClusterPage.c)
 *     MiReduceShareCount @ 0x140340D70 (MiReduceShareCount.c)
 *     MiDecommitSharedPageTail @ 0x140340E30 (MiDecommitSharedPageTail.c)
 *     MiDecommitFreePage @ 0x140341580 (MiDecommitFreePage.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiDecommitFreePagesTail @ 0x1404EDBB0 (MiDecommitFreePagesTail.c)
 *     MiDecommitPrivatePageTail @ 0x1404EE270 (MiDecommitPrivatePageTail.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadShareCount(__int64 a1)
{
  KeBugCheckEx(
    0x4Eu,
    0x99uLL,
    0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4),
    *(_BYTE *)(a1 + 34) & 7,
    *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
}
