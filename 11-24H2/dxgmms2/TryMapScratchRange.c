/*
 * XREFs of TryMapScratchRange @ 0x1400AD654
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400ABA84 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 * Callees:
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1400AD738 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B3D10 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400E6660 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

struct VIDMM_MAPPED_VA_RANGE *__fastcall TryMapScratchRange(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        unsigned int a4,
        struct _DXGK_ADL *a5,
        unsigned __int8 *a6)
{
  unsigned int v8; // r15d
  unsigned int i; // ebx
  struct VIDMM_MAPPED_VA_RANGE *result; // rax

  v8 = a2;
  for ( i = 0; i < 2; ++i )
  {
    result = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
               (VIDMM_GLOBAL *)((char *)this + 40384),
               v8,
               *(_QWORD *)(*(_QWORD *)a3 + 16LL),
               a3,
               0LL,
               a4,
               0LL,
               a5,
               a6,
               0LL);
    if ( result )
      return result;
    if ( !i )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v8);
      VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v8);
    }
  }
  WdLogSingleEntry0(3LL);
  result = 0LL;
  WdLogGlobalForLineNumber = 4321;
  return result;
}
