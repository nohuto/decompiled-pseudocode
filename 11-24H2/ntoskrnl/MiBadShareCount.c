/*
 * XREFs of MiBadShareCount @ 0x14023EE28
 * Callers:
 *     MiWsleFree @ 0x14021BFD0 (MiWsleFree.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiDecommitSharedPageTail @ 0x14023E140 (MiDecommitSharedPageTail.c)
 *     MiDecommitFreePage @ 0x14023E790 (MiDecommitFreePage.c)
 *     MiReduceShareCount @ 0x14023EDC0 (MiReduceShareCount.c)
 *     MiDeleteClusterPage @ 0x1402ED270 (MiDeleteClusterPage.c)
 *     MiDeleteSectionCluster @ 0x1403A0124 (MiDeleteSectionCluster.c)
 *     MiDecommitFreePagesTail @ 0x1404F1D60 (MiDecommitFreePagesTail.c)
 *     MiDecommitPrivatePageTail @ 0x1404F2240 (MiDecommitPrivatePageTail.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
