/*
 * XREFs of VidMmQueryAllocationResidency @ 0x14004BF00
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDMM_MULTI_ALLOC@@@Z @ 0x140096188 (-QueryAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDMM_MUL.c)
 */

enum _D3DKMT_ALLOCATIONRESIDENCYSTATUS __fastcall VidMmQueryAllocationResidency(
        VIDMM_GLOBAL *a1,
        const struct VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::QueryAllocationResidency(a1, a2);
}
