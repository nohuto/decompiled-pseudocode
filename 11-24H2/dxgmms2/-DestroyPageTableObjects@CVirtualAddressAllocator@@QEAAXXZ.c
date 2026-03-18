/*
 * XREFs of ?DestroyPageTableObjects@CVirtualAddressAllocator@@QEAAXXZ @ 0x14009A288
 * Callers:
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1400914E4 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400A9D98 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 */

void __fastcall CVirtualAddressAllocator::DestroyPageTableObjects(CVirtualAddressAllocator *this)
{
  unsigned int i; // edi
  VIDMM_PAGE_DIRECTORY **v3; // rsi

  if ( *((_QWORD *)this + 15) )
  {
    for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 11) + 6944LL); ++i )
    {
      v3 = (VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 15) + 32LL * i);
      if ( *v3 )
      {
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v3, this, 0LL);
        *v3 = 0LL;
      }
    }
  }
}
