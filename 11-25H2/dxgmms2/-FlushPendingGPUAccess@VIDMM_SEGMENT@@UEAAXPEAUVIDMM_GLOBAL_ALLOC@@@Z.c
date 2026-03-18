/*
 * XREFs of ?FlushPendingGPUAccess@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FEF60
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140093AEC (-FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SEGMENT::FlushPendingGPUAccess(VIDMM_SEGMENT *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  if ( (*((_DWORD *)this + 26) & 0x10) == 0 )
    VIDMM_GLOBAL::FlushAllocationFromProcessorCache(this, a2);
}
