/*
 * XREFs of ?QueryAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDMM_MULTI_ALLOC@@@Z @ 0x140096188
 * Callers:
 *     VidMmQueryAllocationResidency @ 0x14004BF00 (VidMmQueryAllocationResidency.c)
 * Callees:
 *     ?QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDMM_LOCAL_ALLOC@@@Z @ 0x140103C80 (-QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEBUVIDM.c)
 */

enum _D3DKMT_ALLOCATIONRESIDENCYSTATUS __fastcall VIDMM_GLOBAL::QueryAllocationResidency(
        VIDMM_GLOBAL *this,
        const struct VIDMM_LOCAL_ALLOC **a2)
{
  return VIDMM_GLOBAL::QueryLocalAllocationResidency(this, *a2);
}
