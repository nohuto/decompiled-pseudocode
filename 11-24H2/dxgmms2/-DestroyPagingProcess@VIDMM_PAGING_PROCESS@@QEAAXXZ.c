/*
 * XREFs of ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1400914E4
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092720 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x140093FBC (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400D364C (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x14001D0F0 (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     ?UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ @ 0x140098A58 (-UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?DestroyPageTableObjects@CVirtualAddressAllocator@@QEAAXXZ @ 0x14009A288 (-DestroyPageTableObjects@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1400A9800 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PAGING_PROCESS::DestroyPagingProcess(VIDMM_PAGING_PROCESS *this)
{
  VIDMM_DEVICE *v2; // rcx
  __int64 i; // rdi
  CVirtualAddressAllocator *v4; // rcx
  VIDMM_DEVICE *v5; // rcx

  if ( *((_QWORD *)this + 2) )
  {
    v2 = (VIDMM_DEVICE *)*((_QWORD *)this + 1);
    if ( v2 )
      VIDMM_DEVICE::UnmapPagingQueueGpuVAs(v2);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*((_QWORD *)this + 2) + 6944LL); i = (unsigned int)(i + 1) )
    {
      v4 = (CVirtualAddressAllocator *)*((_QWORD *)this + i + 4);
      if ( v4 )
      {
        CVirtualAddressAllocator::DestroyPageTableObjects(v4);
        CVirtualAddressAllocator::DestroyVaAllocator(*((CVirtualAddressAllocator **)this + i + 4));
        *((_QWORD *)this + i + 4) = 0LL;
      }
    }
    v5 = (VIDMM_DEVICE *)*((_QWORD *)this + 1);
    if ( v5 )
    {
      VIDMM_DEVICE::`scalar deleting destructor'(v5);
      *((_QWORD *)this + 1) = 0LL;
    }
  }
}
