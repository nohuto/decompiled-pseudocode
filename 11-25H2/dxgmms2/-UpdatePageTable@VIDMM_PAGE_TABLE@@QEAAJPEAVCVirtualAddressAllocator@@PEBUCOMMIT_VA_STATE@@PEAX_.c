/*
 * XREFs of ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400B9468
 * Callers:
 *     ?Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z @ 0x1400B776C (-Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z.c)
 * Callees:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400BA084 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400BA350 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEAU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400BA420 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_AL.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UpdatePageTable(
        struct VIDMM_PAGE_TABLE_BASE *a1,
        VIDMM_GLOBAL **a2,
        __int64 a3,
        struct VIDMM_GLOBAL_ALLOC ***a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        struct _DXGK_UPDATEPAGETABLEFLAGS a10)
{
  VIDMM_GLOBAL *v10; // r14
  struct VIDMM_ALLOC *v15; // r11
  struct VIDMM_GLOBAL_ALLOC *v16; // r9
  enum _DXGK_PAGETABLEUPDATEMODE v17; // ecx
  unsigned __int64 v18; // rbx
  unsigned int v19; // r8d
  __int64 result; // rax
  unsigned __int64 v21; // [rsp+90h] [rbp-38h] BYREF
  __int128 v22; // [rsp+98h] [rbp-30h] BYREF
  unsigned int v23; // [rsp+D8h] [rbp+10h] BYREF

  v10 = a2[11];
  v23 = 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
              a1,
              (struct CVirtualAddressAllocator *)a2,
              &v23,
              &v21,
              (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)&v22) < 0 )
  {
    WdLogSingleEntry0(2LL);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 4593;
  }
  else
  {
    v15 = 0LL;
    if ( a6 == 1 )
    {
      v15 = (struct VIDMM_ALLOC *)a4;
      v16 = **a4;
    }
    else
    {
      v16 = 0LL;
      if ( a6 == 3 )
        v16 = (struct VIDMM_GLOBAL_ALLOC *)a4;
    }
    if ( *((_BYTE *)v10 + 40940) )
      v17 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v17 = (int)(*(_DWORD *)a1 << 16) >> 29;
    v18 = v21;
    VIDMM_GLOBAL::UpdatePageTable(
      v10,
      a1,
      a2[12],
      *(_QWORD *)(a3 + 16),
      v15,
      v16,
      a5,
      a7,
      a8,
      (struct _DXGK_PTE *)(*((_QWORD *)a1 + 4) + 16LL * a7),
      0LL,
      (*(_DWORD *)a1 >> 7) & 0x1F,
      v23,
      v21,
      v17,
      a9,
      a10,
      *(_QWORD *)(a3 + 88));
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
      a1,
      (struct CVirtualAddressAllocator *)a2,
      v19,
      v18,
      (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)&v22);
    return 0LL;
  }
  return result;
}
