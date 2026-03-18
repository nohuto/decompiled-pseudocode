/*
 * XREFs of ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400BA350
 * Callers:
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400B9124 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400B9468 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1400B9620 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400B9F20 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF680 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D03C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAXPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400F1810 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAXPEAUVIDMM_DRIVER_UPDATE.c)
 */

void __fastcall VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        __int64 a3,
        void *a4,
        struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *a5)
{
  __int64 v5; // r10
  int v6; // eax
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 **v12; // rax

  v5 = *((_QWORD *)a2 + 11);
  if ( *(_BYTE *)(v5 + 40940) || (v6 = (int)(*(_DWORD *)this << 16) >> 29) == 0 )
  {
    VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(this, (struct VIDMM_GLOBAL *)v5, a4, a5);
  }
  else if ( v6 == 1 && (*(_DWORD *)this & 0x80000) == 0 )
  {
    v7 = *((_QWORD *)this + 3) + 128LL;
    v8 = *(__int64 **)v7;
    if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7
      || (v9 = *v8, *(__int64 **)(*v8 + 8) != v8)
      || (*(_QWORD *)v7 = v9,
          *(_QWORD *)(v9 + 8) = v7,
          v8[2] = *(_QWORD *)(v5 + 8LL * ((*(_DWORD *)this >> 7) & 0x1F) + 4896),
          v10 = (*(_DWORD *)this >> 7) & 0x1F,
          v11 = *(_QWORD *)(*(_QWORD *)(v5 + 40232) + 8 * v10) + 504LL,
          v12 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(v5 + 40232) + 8 * v10) + 512LL),
          *v12 != (__int64 *)v11) )
    {
      __fastfail(3u);
    }
    *v8 = v11;
    v8[1] = (__int64)v12;
    *v12 = v8;
    *(_QWORD *)(v11 + 8) = v8;
  }
}
