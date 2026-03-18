/*
 * XREFs of ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400B0FB0
 * Callers:
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400B0CC8 (-PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F28C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x140034DC0 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU3@@Z @ 0x1400B11D8 (-PageInPageTableOrDirectory@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGE_TABLE_BASE@@PEAUVIDMM_ALLOC@@_NPEA.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitPageDirectory(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_ALLOC **a3)
{
  __int64 v5; // rdx
  struct VIDMM_ALLOC **v6; // r8
  struct VIDMM_ALLOC *v7; // r9
  VIDMM_GLOBAL *v8; // rcx
  unsigned __int64 v9; // rcx
  bool v11; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) && this[2] != v7 )
  {
    v8 = *(VIDMM_GLOBAL **)(v5 + 88);
    v11 = (char)v7;
    LODWORD(v7) = VIDMM_GLOBAL::PageInPageTableOrDirectory(
                    v8,
                    (struct VIDMM_PAGE_TABLE_BASE *)this,
                    this[3],
                    (*(_DWORD *)(v5 + 144) & 4) != 0,
                    &v11,
                    v6);
    if ( (int)v7 >= 0 )
    {
      v9 = *(unsigned int *)this;
      if ( (v9 & 0x10) != 0 )
        ++*(_QWORD *)(32 * ((v9 >> 7) & 0x1F) + *((_QWORD *)a2 + 15) + 8);
    }
  }
  return (unsigned int)v7;
}
