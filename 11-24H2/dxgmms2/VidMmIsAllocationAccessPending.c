/*
 * XREFs of VidMmIsAllocationAccessPending @ 0x140041A90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAllocationAccessPending@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140102FC0 (-IsAllocationAccessPending@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_MULTI_ALLOC@@@Z.c)
 */

bool __fastcall VidMmIsAllocationAccessPending(VIDMM_GLOBAL *a1, struct VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::IsAllocationAccessPending(a1, a2);
}
