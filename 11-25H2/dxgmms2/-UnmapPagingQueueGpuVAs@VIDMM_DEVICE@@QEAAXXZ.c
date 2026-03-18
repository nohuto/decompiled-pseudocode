/*
 * XREFs of ?UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ @ 0x1400988CC
 * Callers:
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1400914EC (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1400B3440 (-UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::UnmapPagingQueueGpuVAs(VIDMM_DEVICE *this)
{
  unsigned int i; // ebx
  __int64 v3; // rsi
  __int64 v4; // rax

  for ( i = 0; i < *((_DWORD *)this + 15); ++i )
  {
    v3 = 32LL * i;
    VIDMM_DEVICE_PAGING_QUEUE::UnmapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(v3 + *((_QWORD *)this + 9)));
    VIDMM_DEVICE_PAGING_QUEUE::UnmapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(v3 + *((_QWORD *)this + 10)));
    v4 = *((_QWORD *)this + 11);
    if ( v4 )
      VIDMM_DEVICE_PAGING_QUEUE::UnmapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(v4 + v3));
  }
}
