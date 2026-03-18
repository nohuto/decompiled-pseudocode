/*
 * XREFs of ?FlushPendingCPUAccess@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FA010
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140093C18 (-FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SEGMENT::FlushPendingCPUAccess(VIDMM_SEGMENT *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL *v2; // rcx

  if ( (*((_DWORD *)this + 26) & 0x10) == 0 )
  {
    v2 = (VIDMM_GLOBAL *)**((unsigned int **)a2 + 49);
    if ( ((unsigned __int8)v2 & 4) != 0 )
      VIDMM_GLOBAL::FlushAllocationFromProcessorCache(v2, a2);
  }
}
