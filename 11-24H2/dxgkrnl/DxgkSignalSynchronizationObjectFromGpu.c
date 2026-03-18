/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpu @ 0x1402B1830
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H_N@Z @ 0x1402B1870 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1,
        __int64 a2,
        bool a3)
{
  return DxgkSignalSynchronizationObjectFromGpuInternal(a1, 1, a3);
}
