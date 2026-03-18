/*
 * XREFs of ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DF0A0
 * Callers:
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400DEF94 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x14003A804 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     McTemplateK0xxpqhu_EtwWriteTransfer @ 0x14003BC78 (McTemplateK0xxpqhu_EtwWriteTransfer.c)
 *     ?GetAllocationPriorityClassFromPriority@@YA?AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1400DF6F0 (-GetAllocationPriorityClassFromPriority@@YA-AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1400E05CC (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1400E0620 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::AddCommitment(
        DXGPROCESS **this,
        struct _VIDMM_DEVICE_COMMITMENT_INFO *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        unsigned __int8 a5,
        struct VIDMM_GLOBAL_ALLOC *a6)
{
  __int64 v8; // r12
  unsigned __int64 v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int8 v14; // bl
  __int64 **v15; // rdx
  __int64 *v16; // rax
  struct VIDMM_SEGMENT *v17; // rsi
  _QWORD *v18; // rax
  struct VIDMM_SEGMENT **v19; // rcx
  __int64 *v20; // r12
  __int64 v21; // rbx
  __int64 AllocationPriorityClassFromPriority; // r8
  char IsHighPriorityProcess; // al
  VIDMM_GLOBAL *v24; // r10

  v8 = a3;
  v10 = *(_QWORD *)(*(_QWORD *)a6 + 16LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v11[3] = this;
    v11[4] = v8;
    v11[5] = a4;
    v11[6] = a5;
    v11[7] = v10;
    WdLogGlobalForLineNumber = 935;
  }
  v12 = *((_QWORD *)this[2] + v8);
  if ( v12 )
  {
    v12 = *(_QWORD *)(v12 + 16);
    v13 = *(_QWORD *)(304LL * *((unsigned __int16 *)a4 + 210) + v12) + 184LL * *((unsigned __int16 *)a4 + 20);
  }
  else
  {
    v13 = 0LL;
  }
  *(_QWORD *)(v13 + 16) += v10;
  v14 = 1;
  ++*(_DWORD *)(v13 + 56);
  if ( !a5 )
    goto LABEL_8;
  ++*(_DWORD *)(v13 + 8);
  v12 = v13 + 40;
  v15 = *(__int64 ***)(v13 + 48);
  v16 = (__int64 *)((char *)a2 + 16);
  if ( *v15 != (__int64 *)(v13 + 40) )
    goto LABEL_13;
  *v16 = v12;
  *((_QWORD *)a2 + 3) = v15;
  *v15 = v16;
  *(_QWORD *)(v13 + 48) = v16;
  if ( *(_DWORD *)(v13 + 8) != 1 )
LABEL_8:
    v14 = 0;
  v17 = (struct VIDMM_SEGMENT *)(v13 + 24);
  if ( g_IsInternalReleaseOrDbg )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
    v18[3] = v17;
    v18[4] = a4;
    v18[5] = v14;
    v18[6] = v10;
    WdLogGlobalForLineNumber = 2650;
  }
  if ( v14 )
  {
    v19 = (struct VIDMM_SEGMENT **)*((_QWORD *)a4 + 25);
    if ( *v19 != (struct VIDMM_SEGMENT *)((char *)a4 + 192) )
LABEL_13:
      __fastfail(3u);
    *(_QWORD *)v17 = (char *)a4 + 192;
    *((_QWORD *)v17 + 1) = v19;
    *v19 = v17;
    *((_QWORD *)a4 + 25) = v17;
  }
  v20 = (__int64 *)*((_QWORD *)this[2] + v8);
  v21 = v20[2] + 304 * (*((_WORD *)a6 + 12) & 0x3FLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 8LL * *((int *)a4 + 129) + 208), v10);
  if ( (byte_140081241 & 0x20) != 0 )
    McTemplateK0xxpqhu_EtwWriteTransfer(v20[5], &EventVidMmProcessCommitmentChange, *v20);
  if ( (*((_DWORD *)a4 + 26) & 0x1001) != 0 && (*((_DWORD *)a6 + 6) & 0x400) == 0 )
  {
    AllocationPriorityClassFromPriority = (unsigned __int8)GetAllocationPriorityClassFromPriority(*(unsigned int *)(*(_QWORD *)a6 + 48LL));
    *(_QWORD *)(v21 + 8 * AllocationPriorityClassFromPriority + 264) += v10;
    if ( (byte_140081241 & 0x20) != 0 )
      McTemplateK0xxpqhu_EtwWriteTransfer(
        *((_WORD *)a6 + 12) & 0x3F,
        &EventVidMmProcessDemotedCommitmentChange,
        AllocationPriorityClassFromPriority);
    if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted((VIDMM_PROCESS_BUDGET_STATE *)(v21 + 8)) )
    {
      IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(this[4]);
      VIDMM_GLOBAL::AddToPromotionCandidateList(
        v24,
        *((_DWORD *)a6 + 6) & 0x3F,
        (struct VIDMM_PROCESS_BUDGET_STATE *)(v21 + 8),
        IsHighPriorityProcess);
    }
  }
}
