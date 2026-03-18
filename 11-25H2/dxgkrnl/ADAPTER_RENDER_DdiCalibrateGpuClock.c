/*
 * XREFs of ADAPTER_RENDER_DdiCalibrateGpuClock @ 0x14006BE80
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x140021718 (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiCalibrateGpuClock(
        ADAPTER_RENDER *a1,
        unsigned int a2,
        __int64 a3,
        struct _DXGK_GPUCLOCKDATA *a4)
{
  return ADAPTER_RENDER::DdiCalibrateGpuClock(a1, a2, a3, a4);
}
