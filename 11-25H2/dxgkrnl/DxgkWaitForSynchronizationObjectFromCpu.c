/*
 * XREFs of DxgkWaitForSynchronizationObjectFromCpu @ 0x1402A61C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1402A61E0 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        __int64 a2,
        __int64 a3,
        void *a4)
{
  return DxgkWaitForSynchronizationObjectFromCpuInternal(a1, 1, 0LL, a4);
}
