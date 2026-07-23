/*
 * XREFs of MiBadShareCount @ 0x140206F78
 * Callers:
 *     MiDecommitSharedPageTail @ 0x140206290 (MiDecommitSharedPageTail.c)
 *     MiDecommitFreePage @ 0x1402068E0 (MiDecommitFreePage.c)
 *     MiReduceShareCount @ 0x140206F10 (MiReduceShareCount.c)
 *     MiDeleteSectionCluster @ 0x140216B54 (MiDeleteSectionCluster.c)
 *     MiWsleFree @ 0x140248D20 (MiWsleFree.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiDeleteClusterPage @ 0x14034E8B0 (MiDeleteClusterPage.c)
 *     MiDecommitFreePagesTail @ 0x1404EF800 (MiDecommitFreePagesTail.c)
 *     MiDecommitPrivatePageTail @ 0x1404EFCE0 (MiDecommitPrivatePageTail.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
