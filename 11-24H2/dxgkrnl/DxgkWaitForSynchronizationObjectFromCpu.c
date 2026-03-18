/*
 * XREFs of DxgkWaitForSynchronizationObjectFromCpu @ 0x1402AC5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1402AC610 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

int __fastcall DxgkWaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        __int64 a2,
        __int64 a3,
        void *a4)
{
  return DxgkWaitForSynchronizationObjectFromCpuInternal(a1, 1, 0LL, a4);
}
