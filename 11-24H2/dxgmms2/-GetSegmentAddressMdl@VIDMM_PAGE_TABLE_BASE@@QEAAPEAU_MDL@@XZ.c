/*
 * XREFs of ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x140039928
 * Callers:
 *     ?MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z @ 0x14009AAF8 (-MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400ABA84 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 * Callees:
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400F7E30 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 */

struct _MDL *__fastcall VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl(VIDMM_PAGE_TABLE_BASE *this)
{
  struct VIDMM_GLOBAL_ALLOC *v1; // rcx
  __int64 v2; // rax

  v1 = (struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)this + 2);
  if ( v1 && (v2 = *(_QWORD *)(*(_QWORD *)v1 + 64LL)) != 0 && (*(_DWORD *)(v2 + 104) & 0x1000) != 0 )
    return VidMmGetFullMDL(v1, 0LL);
  else
    return 0LL;
}
