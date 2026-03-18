/*
 * XREFs of ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400B5364
 * Callers:
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAllocator@@_K2E@Z @ 0x1400B519C (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAll.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x14010188C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVadByStartAddressAvl(struct _RTL_BALANCED_NODE **a1, struct _RTL_BALANCED_NODE *a2)
{
  if ( *a1 == a2[1].Children[0] )
    return 0LL;
  else
    return *a1 < a2[1].Children[0] ? -1 : 1;
}
