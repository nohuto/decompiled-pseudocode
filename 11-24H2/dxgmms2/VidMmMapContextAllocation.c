/*
 * XREFs of VidMmMapContextAllocation @ 0x140042270
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1400F4E64 (-VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z.c)
 */

unsigned __int64 __fastcall VidMmMapContextAllocation(
        VIDMM_GLOBAL *a1,
        const struct _DXGKARGCB_MAPCONTEXTALLOCATION *a2)
{
  return VIDMM_GLOBAL::VidMmMapContextAllocationCb(a1, a2);
}
