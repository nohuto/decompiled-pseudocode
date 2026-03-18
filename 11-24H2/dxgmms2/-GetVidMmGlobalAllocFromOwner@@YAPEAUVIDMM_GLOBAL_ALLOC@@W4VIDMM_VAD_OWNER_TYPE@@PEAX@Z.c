/*
 * XREFs of ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140036F30
 * Callers:
 *     ??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ @ 0x140037684 (--1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ.c)
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x140099824 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED.c)
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x14009A358 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333_N@Z @ 0x14009AD34 (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 *     ValidateUniqueGpuVaMapping @ 0x14009B80C (ValidateUniqueGpuVaMapping.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x140114090 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetVidMmGlobalAllocFromOwner(int a1, _QWORD *a2)
{
  int v2; // ecx
  int v4; // ecx

  if ( a1 == 3 )
    return a2;
  v2 = a1 - 1;
  if ( !v2 )
    goto LABEL_3;
  v4 = v2 - 3;
  if ( !v4 )
  {
    a2 = (_QWORD *)a2[7];
LABEL_3:
    if ( a2 )
      return *(_QWORD **)*a2;
    return 0LL;
  }
  if ( v4 == 1 )
  {
    a2 = (_QWORD *)a2[3];
    goto LABEL_3;
  }
  return 0LL;
}
