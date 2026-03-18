/*
 * XREFs of ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x140104CDC
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140104104 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x140104CDC (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x140037870 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ?MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z @ 0x140099C54 (-MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x140104CDC (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2)
{
  unsigned int NumPde; // eax
  unsigned int v5; // r9d
  unsigned int v6; // ebp
  __int64 result; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rax
  VIDMM_PAGE_DIRECTORY *v11; // rcx

  NumPde = CVirtualAddressAllocator::GetNumPde(a2, this);
  v5 = *(_DWORD *)this;
  v6 = 2 * NumPde;
  if ( (*(_DWORD *)this & 0x1020) != 0x1020 )
    v6 = NumPde;
  if ( (v5 & 0x80000) == 0 )
    return 0LL;
  if ( (*(_DWORD *)this & 0xE000) != 0x2000
    || (result = MapPageTableToGpuVa(a2, this, (v5 >> 7) & 0x1F), (int)result >= 0) )
  {
    v8 = 0;
    if ( v6 )
    {
      v9 = 0LL;
      do
      {
        v10 = *((_QWORD *)this + 6);
        v11 = *(VIDMM_PAGE_DIRECTORY **)(v9 + v10);
        if ( v11 && (*(_DWORD *)v11 & 0x80000) != 0 )
        {
          if ( (*(_DWORD *)this & 0x20) != 0 )
          {
            result = MapPageTableToGpuVa(
                       a2,
                       *(struct VIDMM_PAGE_TABLE_BASE **)(v9 + v10),
                       (*(_DWORD *)this >> 7) & 0x1F);
            if ( (int)result < 0 )
              return result;
          }
          else
          {
            VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(v11, a2);
          }
        }
        ++v8;
        v9 += 8LL;
      }
      while ( v8 < v6 );
    }
    return 0LL;
  }
  return result;
}
