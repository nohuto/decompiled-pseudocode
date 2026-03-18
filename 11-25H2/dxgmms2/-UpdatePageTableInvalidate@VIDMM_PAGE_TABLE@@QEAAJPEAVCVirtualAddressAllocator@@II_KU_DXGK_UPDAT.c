/*
 * XREFs of ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400B9F20
 * Callers:
 *     ?Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z @ 0x1400B776C (-Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF680 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1400D1A80 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_.c)
 * Callees:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400BA084 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400BA350 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEAU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400BA420 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_AL.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        struct _DXGK_UPDATEPAGETABLEFLAGS a6)
{
  VIDMM_GLOBAL *v6; // rsi
  enum _DXGK_PAGETABLEUPDATEMODE v11; // eax
  unsigned __int64 v12; // rbx
  unsigned int v13; // r8d
  __int64 result; // rax
  _OWORD v15[3]; // [rsp+90h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+D8h] [rbp+10h] BYREF

  v6 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  v16 = 0;
  v17 = 0LL;
  v15[0] = 0LL;
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
              this,
              a2,
              &v16,
              &v17,
              (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)v15) < 0 )
  {
    WdLogSingleEntry0(2LL);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 4524;
  }
  else
  {
    if ( *((_BYTE *)v6 + 40940) )
      v11 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v11 = (int)(*(_DWORD *)this << 16) >> 29;
    v12 = v17;
    VIDMM_GLOBAL::UpdatePageTable(
      v6,
      this,
      *((struct VIDMM_PROCESS **)a2 + 12),
      0LL,
      0LL,
      0LL,
      0LL,
      a3,
      a4,
      0LL,
      0LL,
      (*(_DWORD *)this >> 7) & 0x1F,
      v16,
      v17,
      v11,
      a5,
      a6,
      0LL);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
      this,
      a2,
      v13,
      v12,
      (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)v15);
    return 0LL;
  }
  return result;
}
