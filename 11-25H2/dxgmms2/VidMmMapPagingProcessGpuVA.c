/*
 * XREFs of VidMmMapPagingProcessGpuVA @ 0x140042D20
 * Callers:
 *     <none>
 * Callees:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400FA43C (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 */

__int64 __fastcall VidMmMapPagingProcessGpuVA(
        VIDMM_GLOBAL *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        char a3,
        unsigned __int64 *a4)
{
  return VIDMM_GLOBAL::MapGpuVA(this, 0LL, 0LL, a2, a4, 1 << a3, 1);
}
