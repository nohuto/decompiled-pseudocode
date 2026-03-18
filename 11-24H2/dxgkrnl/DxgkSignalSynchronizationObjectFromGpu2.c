/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpu2 @ 0x1402B1850
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2@@PEAX@Z @ 0x1402B2040 (-DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu2(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2 *a1,
        void *a2)
{
  return DxgkSignalSynchronizationObjectFromGpu2Impl(a1, a2);
}
