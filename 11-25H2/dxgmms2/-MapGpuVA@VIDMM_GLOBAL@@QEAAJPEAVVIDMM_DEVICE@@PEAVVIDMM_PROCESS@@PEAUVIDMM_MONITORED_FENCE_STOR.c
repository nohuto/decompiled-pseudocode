/*
 * XREFs of ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400FA43C
 * Callers:
 *     VidMmMapGpuVA @ 0x1400404F0 (VidMmMapGpuVA.c)
 *     VidMmMapPagingProcessGpuVA @ 0x140042D20 (VidMmMapPagingProcessGpuVA.c)
 *     ?MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ @ 0x1400FA3DC (-MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140104104 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140032DD0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400FA518 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 */

int __fastcall VIDMM_GLOBAL::MapGpuVA(
        struct VIDMM_DEVICE **this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_PROCESS *a3,
        VIDMM_FENCE_STORAGE_PAGE **a4,
        unsigned __int64 *a5,
        unsigned int a6,
        bool a7)
{
  struct VIDMM_DEVICE *v8; // rdi
  __int64 v10; // r8

  v8 = a2;
  if ( !a7 )
  {
    if ( !a3 )
    {
      if ( DXGPROCESS::GetCurrent() && (v10 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
        a3 = *(struct VIDMM_PROCESS **)(v10 + 8);
      else
        a3 = 0LL;
    }
    return VIDMM_FENCE_STORAGE_PAGE::MapGpuVA(
             *a4,
             (struct VIDMM_GLOBAL *)this,
             v8,
             a3,
             (struct VIDMM_MONITORED_FENCE_STORAGE *)a4,
             a5,
             a6,
             a7);
  }
  if ( *(_BYTE *)(*((_QWORD *)this[2] + 93) + 55LL) || *((char *)this + 40937) < 0 )
  {
    a3 = this[5048];
    if ( !a2 )
      v8 = this[5049];
    return VIDMM_FENCE_STORAGE_PAGE::MapGpuVA(
             *a4,
             (struct VIDMM_GLOBAL *)this,
             v8,
             a3,
             (struct VIDMM_MONITORED_FENCE_STORAGE *)a4,
             a5,
             a6,
             a7);
  }
  *a5 = 0LL;
  return 0;
}
