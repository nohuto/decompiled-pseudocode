/*
 * XREFs of ?EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x14009A2F8
 * Callers:
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x14009A358 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F2030 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x140034DC0 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400B13C4 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::EnsureResident(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        __int64 a3,
        struct VIDMM_ALLOC **a4)
{
  struct CVirtualAddressAllocator *v5; // rdx
  struct VIDMM_ALLOC **v6; // r9
  int v7; // edi
  __int64 result; // rax

  if ( !VIDMM_PAGE_TABLE_BASE::IsResident(this) )
  {
    v7 = VIDMM_PAGE_TABLE::CommitPageTable(this, v5, v6);
    if ( v7 < 0 )
    {
      WdLogSingleEntry0(3LL);
      result = (unsigned int)v7;
      WdLogGlobalForLineNumber = 6197;
      return result;
    }
    *(_DWORD *)this &= ~0x10000u;
  }
  return 0LL;
}
