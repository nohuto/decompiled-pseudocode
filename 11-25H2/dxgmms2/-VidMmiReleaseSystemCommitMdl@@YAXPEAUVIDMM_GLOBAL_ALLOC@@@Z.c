/*
 * XREFs of ?VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E568C
 * Callers:
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400A9714 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C00CC (-VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z @ 0x1400E61FC (-VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z.c)
 */

void __fastcall VidMmiReleaseSystemCommitMdl(struct VIDMM_GLOBAL_ALLOC *a1)
{
  PVOID *v1; // rbx

  v1 = (PVOID *)((char *)a1 + 56);
  if ( (*((_DWORD *)a1 + 7) & 0x10000) == 0 )
    VidMmiUnlockAllocation(*v1);
  *v1 = 0LL;
}
