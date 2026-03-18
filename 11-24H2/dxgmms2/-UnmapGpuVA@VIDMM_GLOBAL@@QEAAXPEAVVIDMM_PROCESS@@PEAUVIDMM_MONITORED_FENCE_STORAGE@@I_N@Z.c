/*
 * XREFs of ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1400BBB58
 * Callers:
 *     VidMmUnmapGpuVA @ 0x14003FE80 (VidMmUnmapGpuVA.c)
 *     VidMmUnmapPagingProcessGpuVA @ 0x1400440D0 (VidMmUnmapPagingProcessGpuVA.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x140091128 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1400BB420 (-UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z @ 0x1400BBBAC (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UnmapGpuVA(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        VIDMM_FENCE_STORAGE_PAGE **a3,
        unsigned int a4,
        bool a5)
{
  if ( a2 )
    goto LABEL_2;
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL) + 55LL) || *((char *)this + 40937) < 0 )
  {
    a2 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 5048);
LABEL_2:
    VIDMM_FENCE_STORAGE_PAGE::UnmapGpuVA(*a3, this, a2, a4, a5);
  }
}
