/*
 * XREFs of ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1400DB064
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DD034 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x14003C7D8 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400DB1D0 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?GetAllocationPriorityClassFromPriority@@YA?AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1400DB390 (-GetAllocationPriorityClassFromPriority@@YA-AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1400DC2D0 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1400DC324 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UpdateAllocationPriority(
        VIDMM_GLOBAL *this,
        struct _KTHREAD ****a2,
        __int64 a3,
        __int64 a4)
{
  struct _KTHREAD **v5; // rbx
  struct _KTHREAD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 AllocationPriorityClassFromPriority; // r12
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int8 v12; // al
  __int64 v13; // r13
  __int64 *v14; // r10
  __int64 *v15; // r14
  __int64 *v16; // r14
  __int64 *v17; // r11
  __int64 *v18; // rcx
  VIDMM_PROCESS_BUDGET_STATE *v19; // rcx
  __int64 v20; // r9
  char IsHighPriorityProcess; // al
  struct VIDMM_PROCESS_BUDGET_STATE *v22; // r8

  v5 = **a2;
  v6 = *v5;
  v7 = *((unsigned int *)*v5 + 12);
  *((_DWORD *)*v5 + 12) = a3;
  if ( *((_DWORD *)v5 + 18) == 2
    && (*(_DWORD *)(*((_QWORD *)v6 + 8) + 104LL) & 0x1001) != 0
    && ((_DWORD)v5[3] & 0x400) == 0 )
  {
    AllocationPriorityClassFromPriority = (unsigned __int8)GetAllocationPriorityClassFromPriority(v7, a2, a3, a4);
    v12 = GetAllocationPriorityClassFromPriority((unsigned int)v8, v10, v8, v11);
    v13 = v12;
    if ( (_BYTE)AllocationPriorityClassFromPriority != v12 )
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v5 + 17));
      v14 = (__int64 *)v5[14];
      while ( v14 != (__int64 *)(v5 + 14) )
      {
        v15 = v14;
        v14 = (__int64 *)*v14;
        v16 = v15 - 2;
        v17 = (__int64 *)*v16;
        while ( v17 != v16 )
        {
          v18 = v17 - 5;
          v17 = (__int64 *)*v17;
          if ( (*((_DWORD *)v18 + 7) & 3) == 2 )
          {
            v19 = (VIDMM_PROCESS_BUDGET_STATE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v18 + 8) + 16LL)
                                                                       + 8LL
                                                                       * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
                                                           + 16LL)
                                               + 304LL * ((_WORD)v5[3] & 0x3F)
                                               + 8);
            *((_QWORD *)v19 + AllocationPriorityClassFromPriority + 32) -= *((_QWORD *)v6 + 2);
            *((_QWORD *)v19 + v13 + 32) += *((_QWORD *)v6 + 2);
            if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v19) )
            {
              IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(v20 + 32));
              VIDMM_GLOBAL::AddToPromotionCandidateList(this, (_DWORD)v5[3] & 0x3F, v22, IsHighPriorityProcess);
            }
          }
        }
      }
      DXGFASTMUTEX::Release(v5 + 17);
      VIDMM_GLOBAL::RequestNewBudget(this, 1);
    }
  }
}
