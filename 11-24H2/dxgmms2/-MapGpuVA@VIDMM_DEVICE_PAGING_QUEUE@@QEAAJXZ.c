/*
 * XREFs of ?MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ @ 0x1400F947C
 * Callers:
 *     ?MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x1400989EC (-MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1400F8528 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 * Callees:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400F94DC (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 */

__int64 __fastcall VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = VIDMM_GLOBAL::MapGpuVA(
         **(VIDMM_GLOBAL ***)(*(_QWORD *)this + 96LL),
         *(struct VIDMM_DEVICE **)(**(_QWORD **)(*(_QWORD *)this + 96LL) + 40392LL),
         *(struct VIDMM_PROCESS **)(**(_QWORD **)(*(_QWORD *)this + 96LL) + 40384LL),
         (struct VIDMM_MONITORED_FENCE_STORAGE *)(*((_QWORD *)this + 1) + 64LL),
         (unsigned __int64 *)this + 3,
         1 << *((_DWORD *)this + 4),
         1);
  v2 = 0;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v2;
}
