/*
 * XREFs of MapScratchRangeWithStall @ 0x140104324
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400ABA84 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 * Callees:
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1400AD738 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct VIDMM_MAPPED_VA_RANGE *__fastcall MapScratchRangeWithStall(
        __int64 a1,
        unsigned __int16 a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        unsigned int a4,
        struct _DXGK_ADL *a5,
        unsigned __int8 *a6)
{
  unsigned int v8; // r14d
  int i; // ebx
  struct VIDMM_MAPPED_VA_RANGE *result; // rax
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp-28h] BYREF

  v8 = a2;
  for ( i = 10; !i; --i )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 69LL, a1, a3, 0LL);
    WdLogGlobalForLineNumber = 195;
LABEL_6:
    Interval.QuadPart = -500000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  result = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
             (VIDMM_PAGING_PROCESS *)(a1 + 40384),
             v8,
             *(_QWORD *)(*(_QWORD *)a3 + 16LL),
             a3,
             0LL,
             a4,
             0LL,
             a5,
             a6,
             0LL);
  if ( !result )
    goto LABEL_6;
  return result;
}
