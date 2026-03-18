/*
 * XREFs of VidMmIsAllocationAccessPending @ 0x1400430A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAllocationAccessPending@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1401040D0 (-IsAllocationAccessPending@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_MULTI_ALLOC@@@Z.c)
 */

bool __fastcall VidMmIsAllocationAccessPending(VIDMM_GLOBAL *a1, struct VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::IsAllocationAccessPending(a1, a2);
}
