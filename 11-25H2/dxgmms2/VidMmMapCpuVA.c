/*
 * XREFs of VidMmMapCpuVA @ 0x140040490
 * Callers:
 *     <none>
 * Callees:
 *     ?MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@Z @ 0x1400FC5A4 (-MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@Z.c)
 */

__int64 __fastcall VidMmMapCpuVA(
        VIDMM_GLOBAL *a1,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        void **a3,
        unsigned int a4)
{
  return VIDMM_GLOBAL::MapCpuVA(a1, a2, a3, a4);
}
