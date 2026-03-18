/*
 * XREFs of ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1400F1F58
 * Callers:
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x14009A358 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F1CA8 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F28C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x140114090 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGE_DIRECTORY::SetPageTableInPde(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3)
{
  __int64 v3; // r10
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx

  v3 = 8LL * a3;
  v4 = 2LL * a3;
  *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4 + 8) = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(v3 + *((_QWORD *)this + 6))
                                                                            + 16LL)
                                                              + 72LL) >> 12;
  v5 = 32LL * *(unsigned int *)(32LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)a2 + 15) + 28);
  *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4) = v5 ^ (*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4) ^ v5) & 0xFFFFFFFFFFFFFC1FuLL;
  *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4) = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v4) & 0xFFFFFFFFFFFE07FFuLL | (16LL * (**(_DWORD **)(v3 + *((_QWORD *)this + 6)) & 0xF80));
  v6 = *((_QWORD *)this + 5);
  if ( (**(_DWORD **)(v3 + *((_QWORD *)this + 6)) & 0x40) != 0 )
    *(_QWORD *)(v6 + 16LL * a3) = *(_QWORD *)(v6 + 16LL * a3) & 0xFFFFFFFFFFF9FFFFuLL | 0x20000;
  else
    *(_QWORD *)(v6 + 16LL * a3) &= 0xFFFFFFFFFFF9FFFFuLL;
}
