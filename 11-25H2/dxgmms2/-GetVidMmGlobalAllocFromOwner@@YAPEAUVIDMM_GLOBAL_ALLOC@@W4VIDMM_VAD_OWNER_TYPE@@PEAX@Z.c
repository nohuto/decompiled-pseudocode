/*
 * XREFs of ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x14003839C
 * Callers:
 *     ??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ @ 0x140037A9C (--1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF084 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
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
