/*
 * XREFs of ?UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1400B3440
 * Callers:
 *     ?UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ @ 0x1400988CC (-UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1400B2ED0 (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1400B3BA4 (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z.c)
 */

void __fastcall VIDMM_DEVICE_PAGING_QUEUE::UnmapGpuVA(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  bool v2; // zf
  struct VIDMM_PROCESS **v3; // rcx

  v2 = *((_QWORD *)this + 3) == 0LL;
  v3 = **(struct VIDMM_PROCESS ****)(*(_QWORD *)this + 96LL);
  if ( !v2 )
  {
    VIDMM_GLOBAL::UnmapGpuVA(
      (VIDMM_GLOBAL *)v3,
      v3[5048],
      (struct VIDMM_MONITORED_FENCE_STORAGE *)(*((_QWORD *)this + 1) + 64LL),
      *((_DWORD *)this + 4),
      1);
    *((_QWORD *)this + 3) = 0LL;
  }
}
