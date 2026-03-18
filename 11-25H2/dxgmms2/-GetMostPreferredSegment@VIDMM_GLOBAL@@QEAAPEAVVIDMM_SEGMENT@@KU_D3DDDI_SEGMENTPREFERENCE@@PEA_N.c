/*
 * XREFs of ?GetMostPreferredSegment@VIDMM_GLOBAL@@QEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1400FACC0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E8A9C (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBUVIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x14010EF94 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBU.c)
 * Callees:
 *     <none>
 */

struct VIDMM_SEGMENT *__fastcall VIDMM_GLOBAL::GetMostPreferredSegment(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _D3DDDI_SEGMENTPREFERENCE a3,
        bool *a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r10
  UINT v8; // r8d

  v4 = *((_QWORD *)this + 5029);
  v5 = 0LL;
  v6 = *(_QWORD *)(v4 + 8LL * a2);
  if ( a3.0 )
  {
    if ( (*(_BYTE *)&a3.0 & 0x1F) != 0 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v6 + 1648) + 8LL * ((*(_BYTE *)&a3.0 & 0x1Fu) - 1));
      *a4 = *(_BYTE *)(v5 + 104) & 1;
    }
    else
    {
      v8 = (a3.Value >> 6) & 0x1F;
      if ( v8 )
        return *(struct VIDMM_SEGMENT **)(*(_QWORD *)(v6 + 1648) + 8LL * (v8 - 1));
    }
  }
  return (struct VIDMM_SEGMENT *)v5;
}
