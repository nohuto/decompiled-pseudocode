/*
 * XREFs of ?AssignProcessBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1400DC1AC
 * Callers:
 *     ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1400DBD24 (-AssignBudgetsWithinBand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STAT.c)
 *     ?AssignMaximumBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1400DC0AC (-AssignMaximumBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x14003C7D8 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     McTemplateK0xxpqhuuuuu_EtwWriteTransfer @ 0x14003E8CC (McTemplateK0xxpqhuuuuu_EtwWriteTransfer.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1400DC2D0 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1400DC324 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AssignProcessBudget(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        struct VIDMM_SEGMENT_GROUP_STATE *a3,
        struct VIDMM_PROCESS_ADAPTER_INFO *a4,
        unsigned __int64 a5)
{
  __int64 v6; // rsi
  unsigned __int64 v8; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  char IsHighPriorityProcess; // al

  v6 = *(int *)a3;
  v8 = a5;
  v10 = *((_QWORD *)a4 + 2) + 304LL * *(unsigned __int16 *)a2;
  v11 = *(_QWORD *)(v10 + 8 * v6 + 48);
  if ( v11 && a5 >= v11 )
    v8 = *(_QWORD *)(v10 + 8 * v6 + 48);
  v12 = *((_QWORD *)a3 + 4);
  v13 = *(_QWORD *)(v10 + 8 * v6 + 32);
  if ( v8 < v12 )
    v12 = v8;
  *(_QWORD *)(v10 + 8 * v6 + 32) = v12;
  if ( (byte_140081241 & 0x20) != 0 )
    McTemplateK0xxpqhuuuuu_EtwWriteTransfer(*((_QWORD *)a4 + 5), v13, (__int64)a3);
  *((_BYTE *)a4 + 83) = *((_BYTE *)a4 + 82);
  *((_BYTE *)a4 + 81) = *((_BYTE *)a4 + 80);
  if ( !(_DWORD)v6 && VIDMM_PROCESS_BUDGET_STATE::CanBePromoted((VIDMM_PROCESS_BUDGET_STATE *)(v10 + 8)) )
  {
    IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(*((_QWORD *)a4 + 5) + 32LL));
    VIDMM_GLOBAL::AddToPromotionCandidateList(
      this,
      *(unsigned __int16 *)a2,
      (struct VIDMM_PROCESS_BUDGET_STATE *)(v10 + 8),
      IsHighPriorityProcess);
  }
}
