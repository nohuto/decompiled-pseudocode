/*
 * XREFs of VidMmUnmapPagingProcessGpuVA @ 0x140045E80
 * Callers:
 *     <none>
 * Callees:
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1400B3BA4 (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z.c)
 */

void __fastcall VidMmUnmapPagingProcessGpuVA(
        VIDMM_GLOBAL *a1,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        unsigned int a3)
{
  VIDMM_GLOBAL::UnmapGpuVA(a1, 0LL, a2, a3, 1);
}
