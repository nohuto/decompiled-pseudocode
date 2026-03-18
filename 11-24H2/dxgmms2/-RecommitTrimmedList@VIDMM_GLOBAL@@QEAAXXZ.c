/*
 * XREFs of ?RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400DECB0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DED20 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400DEF94 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecommitTrimmedList(VIDMM_GLOBAL *this)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  struct VIDMM_ALLOC *v3; // rsi
  struct VIDMM_GLOBAL_ALLOC *v4; // rdx
  int v5; // eax

  v1 = (_QWORD *)((char *)this + 3712);
  v2 = (_QWORD *)*((_QWORD *)this + 464);
  while ( v2 != v1 )
  {
    v3 = (struct VIDMM_ALLOC *)(v2 - 7);
    v2 = (_QWORD *)*v2;
    v4 = **(struct VIDMM_GLOBAL_ALLOC ***)v3;
    v5 = *((_DWORD *)v4 + 18);
    if ( v5 )
    {
      if ( v5 == 1 )
        VIDMM_SEGMENT::ReclaimResource(*(VIDMM_SEGMENT **)(*(_QWORD *)v4 + 64LL), v4);
      VIDMM_DEVICE::AddCommitment(*((VIDMM_DEVICE **)v3 + 1), v3);
    }
  }
  v1[1] = v1;
  *v1 = v1;
}
