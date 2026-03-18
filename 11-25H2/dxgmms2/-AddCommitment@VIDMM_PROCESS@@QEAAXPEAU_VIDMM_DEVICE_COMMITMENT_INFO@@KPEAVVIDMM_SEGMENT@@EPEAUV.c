/*
 * XREFs of ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DAD40
 * Callers:
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400DAC34 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x14003C7D8 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     McTemplateK0xxpqhu_EtwWriteTransfer @ 0x14003DB68 (McTemplateK0xxpqhu_EtwWriteTransfer.c)
 *     ?GetAllocationPriorityClassFromPriority@@YA?AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1400DB390 (-GetAllocationPriorityClassFromPriority@@YA-AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1400DC2D0 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1400DC324 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::AddCommitment(
        DXGPROCESS **this,
        __int64 a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        unsigned __int8 a5,
        struct VIDMM_GLOBAL_ALLOC *a6)
{
  __int64 v7; // r13
  __int64 v8; // r12
  unsigned __int64 v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int8 v14; // bl
  __int64 *v15; // rax
  struct VIDMM_SEGMENT *v16; // rsi
  _QWORD *v17; // rax
  struct VIDMM_SEGMENT **v18; // rcx
  __int64 *v19; // r12
  __int64 v20; // rbx
  unsigned __int64 v21; // r9
  __int64 AllocationPriorityClassFromPriority; // r8
  char IsHighPriorityProcess; // al
  VIDMM_GLOBAL *v24; // r10

  v7 = a2;
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
    WdLogGlobalForLineNumber = 934;
  }
  v12 = *((_QWORD *)this[2] + v8);
  if ( v12 )
  {
    v12 = *(_QWORD *)(v12 + 16);
    a2 = 304LL * *((unsigned __int16 *)a4 + 210);
    v13 = *(_QWORD *)(a2 + v12) + 184LL * *((unsigned __int16 *)a4 + 20);
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
  a2 = *(_QWORD *)(v13 + 48);
  v15 = (__int64 *)(v7 + 16);
  if ( *(_QWORD *)a2 != v13 + 40 )
    goto LABEL_13;
  *v15 = v12;
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)a2 = v15;
  *(_QWORD *)(v13 + 48) = v15;
  if ( *(_DWORD *)(v13 + 8) != 1 )
LABEL_8:
    v14 = 0;
  v16 = (struct VIDMM_SEGMENT *)(v13 + 24);
  if ( g_IsInternalReleaseOrDbg )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
    v17[3] = v16;
    v17[4] = a4;
    v17[5] = v14;
    v17[6] = v10;
    WdLogGlobalForLineNumber = 2651;
  }
  if ( v14 )
  {
    v18 = (struct VIDMM_SEGMENT **)*((_QWORD *)a4 + 25);
    if ( *v18 != (struct VIDMM_SEGMENT *)((char *)a4 + 192) )
LABEL_13:
      __fastfail(3u);
    *(_QWORD *)v16 = (char *)a4 + 192;
    *((_QWORD *)v16 + 1) = v18;
    *v18 = v16;
    *((_QWORD *)a4 + 25) = v16;
  }
  v19 = (__int64 *)*((_QWORD *)this[2] + v8);
  v20 = v19[2] + 304 * (*((_WORD *)a6 + 12) & 0x3FLL);
  v21 = v10 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 8LL * *((int *)a4 + 129) + 208), v10);
  if ( (byte_140081241 & 0x20) != 0 )
    McTemplateK0xxpqhu_EtwWriteTransfer(v19[5], &EventVidMmProcessCommitmentChange, *v19);
  if ( (*((_DWORD *)a4 + 26) & 0x1001) != 0 && (*((_DWORD *)a6 + 6) & 0x400) == 0 )
  {
    AllocationPriorityClassFromPriority = (unsigned __int8)GetAllocationPriorityClassFromPriority(
                                                             *(unsigned int *)(*(_QWORD *)a6 + 48LL),
                                                             a2,
                                                             v13,
                                                             v21);
    *(_QWORD *)(v20 + 8 * AllocationPriorityClassFromPriority + 264) += v10;
    if ( (byte_140081241 & 0x20) != 0 )
      McTemplateK0xxpqhu_EtwWriteTransfer(
        *((_WORD *)a6 + 12) & 0x3F,
        &EventVidMmProcessDemotedCommitmentChange,
        AllocationPriorityClassFromPriority);
    if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted((VIDMM_PROCESS_BUDGET_STATE *)(v20 + 8)) )
    {
      IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(this[4]);
      VIDMM_GLOBAL::AddToPromotionCandidateList(
        v24,
        *((_DWORD *)a6 + 6) & 0x3F,
        (struct VIDMM_PROCESS_BUDGET_STATE *)(v20 + 8),
        IsHighPriorityProcess);
    }
  }
}
