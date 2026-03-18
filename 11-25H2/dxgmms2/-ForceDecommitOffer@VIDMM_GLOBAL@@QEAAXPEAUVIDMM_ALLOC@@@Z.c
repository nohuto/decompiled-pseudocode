/*
 * XREFs of ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140093BC8
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1400F39C8 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     memset @ 0x140056780 (memset.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140093C84 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E6F70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

void __fastcall VIDMM_GLOBAL::ForceDecommitOffer(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD v7[12]; // [rsp+30h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = a2;
    WdLogGlobalForLineNumber = 6300;
  }
  VIDMM_GLOBAL::ForceDiscardOffer(this, a2);
  v4 = **(_QWORD **)a2;
  memset(v7, 0, 0x58uLL);
  v5 = *(_DWORD *)(v4 + 24) & 0x3F;
  v7[1] = *((_QWORD *)a2 + 1);
  v6 = *(_QWORD *)(v7[1] + 80LL);
  LODWORD(v7[0]) = 215;
  v7[4] = v4;
  VIDMM_GLOBAL::QueueDeferredCommand(
    this,
    *(struct VIDMM_PAGING_QUEUE **)(32 * v5 + v6),
    (struct _VIDMM_DEFERRED_COMMAND *)v7,
    1,
    0LL);
}
