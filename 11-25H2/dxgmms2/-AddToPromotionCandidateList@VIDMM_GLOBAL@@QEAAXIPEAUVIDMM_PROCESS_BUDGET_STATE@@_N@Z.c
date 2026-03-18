/*
 * XREFs of ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1400DC324
 * Callers:
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DAD40 (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAUV.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1400DB064 (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1400DC1AC (-AssignProcessBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@P.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::AddToPromotionCandidateList(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_PROCESS_BUDGET_STATE *a3,
        char a4)
{
  __int64 v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rax

  if ( !*(_QWORD *)a3 )
  {
    v4 = *((_QWORD *)this + 5029);
    v5 = (_QWORD *)(*(_QWORD *)(v4 + 8LL * a2) + 520LL);
    if ( a4 )
    {
      v7 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 )
LABEL_4:
        __fastfail(3u);
      *(_QWORD *)a3 = v7;
      *((_QWORD *)a3 + 1) = v5;
      *(_QWORD *)(v7 + 8) = a3;
      *v5 = a3;
    }
    else
    {
      v6 = *(_QWORD **)(*(_QWORD *)(v4 + 8LL * a2) + 528LL);
      if ( (_QWORD *)*v6 != v5 )
        goto LABEL_4;
      *(_QWORD *)a3 = v5;
      *((_QWORD *)a3 + 1) = v6;
      *v6 = a3;
      v5[1] = a3;
    }
  }
}
