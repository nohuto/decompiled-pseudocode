/*
 * XREFs of VidMmMapGpuVA @ 0x1400404F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400FA43C (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 */

__int64 __fastcall VidMmMapGpuVA(
        VIDMM_GLOBAL *a1,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        unsigned __int64 *a4,
        unsigned int a5)
{
  return VIDMM_GLOBAL::MapGpuVA(a1, a2, 0LL, a3, a4, a5, 0);
}
