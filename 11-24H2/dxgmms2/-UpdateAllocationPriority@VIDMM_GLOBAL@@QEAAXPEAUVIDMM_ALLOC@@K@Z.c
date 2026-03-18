/*
 * XREFs of ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1400DF3C4
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x14003A804 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400DF530 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?GetAllocationPriorityClassFromPriority@@YA?AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1400DF6F0 (-GetAllocationPriorityClassFromPriority@@YA-AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1400E05CC (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1400E0620 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UpdateAllocationPriority(VIDMM_GLOBAL *this, struct _KTHREAD ****a2, int a3)
{
  struct _KTHREAD **v4; // rbx
  struct _KTHREAD *v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 AllocationPriorityClassFromPriority; // r12
  unsigned __int8 v9; // al
  __int64 v10; // r13
  __int64 *v11; // r10
  __int64 *v12; // r14
  __int64 *v13; // r14
  __int64 *v14; // r11
  __int64 *v15; // rcx
  VIDMM_PROCESS_BUDGET_STATE *v16; // rcx
  __int64 v17; // r9
  char IsHighPriorityProcess; // al
  struct VIDMM_PROCESS_BUDGET_STATE *v19; // r8

  v4 = **a2;
  v5 = *v4;
  v6 = *((unsigned int *)*v4 + 12);
  *((_DWORD *)*v4 + 12) = a3;
  if ( *((_DWORD *)v4 + 18) == 2
    && (*(_DWORD *)(*((_QWORD *)v5 + 8) + 104LL) & 0x1001) != 0
    && ((_DWORD)v4[3] & 0x400) == 0 )
  {
    AllocationPriorityClassFromPriority = (unsigned __int8)GetAllocationPriorityClassFromPriority(v6);
    v9 = GetAllocationPriorityClassFromPriority(v7);
    v10 = v9;
    if ( (_BYTE)AllocationPriorityClassFromPriority != v9 )
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v4 + 17));
      v11 = (__int64 *)v4[14];
      while ( v11 != (__int64 *)(v4 + 14) )
      {
        v12 = v11;
        v11 = (__int64 *)*v11;
        v13 = v12 - 2;
        v14 = (__int64 *)*v13;
        while ( v14 != v13 )
        {
          v15 = v14 - 5;
          v14 = (__int64 *)*v14;
          if ( (*((_DWORD *)v15 + 7) & 3) == 2 )
          {
            v16 = (VIDMM_PROCESS_BUDGET_STATE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v15 + 8) + 16LL)
                                                                       + 8LL
                                                                       * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL))
                                                           + 16LL)
                                               + 304LL * ((_WORD)v4[3] & 0x3F)
                                               + 8);
            *((_QWORD *)v16 + AllocationPriorityClassFromPriority + 32) -= *((_QWORD *)v5 + 2);
            *((_QWORD *)v16 + v10 + 32) += *((_QWORD *)v5 + 2);
            if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v16) )
            {
              IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(v17 + 32));
              VIDMM_GLOBAL::AddToPromotionCandidateList(this, (_DWORD)v4[3] & 0x3F, v19, IsHighPriorityProcess);
            }
          }
        }
      }
      DXGFASTMUTEX::Release(v4 + 17);
      VIDMM_GLOBAL::RequestNewBudget(this, 1);
    }
  }
}
