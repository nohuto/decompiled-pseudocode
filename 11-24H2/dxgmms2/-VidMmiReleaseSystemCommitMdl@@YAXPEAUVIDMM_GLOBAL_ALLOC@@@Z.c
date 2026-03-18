/*
 * XREFs of ?VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D9770
 * Callers:
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400B1D24 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVI.c)
 *     ?VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C0A1C (-VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z @ 0x1400DA2EC (-VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z.c)
 */

void __fastcall VidMmiReleaseSystemCommitMdl(struct VIDMM_GLOBAL_ALLOC *a1)
{
  PVOID *v1; // rbx

  v1 = (PVOID *)((char *)a1 + 56);
  if ( (*((_DWORD *)a1 + 7) & 0x10000) == 0 )
    VidMmiUnlockAllocation(*v1);
  *v1 = 0LL;
}
