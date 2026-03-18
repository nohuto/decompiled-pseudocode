/*
 * XREFs of ?SetupBudgetState@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@G@Z @ 0x1400DF8A4
 * Callers:
 *     ?RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1400DF728 (-RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140007710 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400F01AC (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1400F0208 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1400FEE60 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 *     ?CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x140100CA8 (-CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET.c)
 */

void __fastcall VIDMM_GLOBAL::SetupBudgetState(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        struct VIDMM_BUDGET_STATE *a3)
{
  int v4; // r15d
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rdx
  struct _RTL_BALANCED_NODE *v9; // rax
  _QWORD *Children; // rbx
  __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD **v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 *i; // rbx
  __int64 v19; // rdi
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  VIDMM_GLOBAL *v22; // rcx
  VIDMM_PROCESS *v23; // rax
  struct DXGPROCESS *v24; // rdx
  unsigned __int8 *v25; // rbp
  __int64 v26; // rdx
  _QWORD *v27; // rax
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v28; // esi
  _QWORD *v29; // rdi
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v31; // rcx
  int v32; // esi
  __int64 v33; // rdi
  __int64 v34; // r15
  __int64 v35; // rdx
  struct _RTL_BALANCED_NODE *v36; // rax
  _QWORD *v37; // rbx
  __int64 v38; // r14
  _QWORD **v39; // rcx
  _QWORD *v40; // rax
  _QWORD *j; // rcx
  _BYTE v42[8]; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v43; // [rsp+58h] [rbp-60h]
  int v44; // [rsp+60h] [rbp-58h]
  __int64 v45; // [rsp+C0h] [rbp+8h]
  __int64 v46; // [rsp+C8h] [rbp+10h]
  unsigned __int16 v47; // [rsp+D0h] [rbp+18h]
  struct VIDMM_PHYSICAL_ADAPTER *v48; // [rsp+D8h] [rbp+20h]

  v47 = (unsigned __int16)a3;
  *(_WORD *)a2 = (_WORD)a3;
  v45 = (unsigned __int16)a3;
  v4 = 0;
  v6 = 552LL;
  v48 = *(struct VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8LL * (unsigned __int16)a3);
  v46 = ((*((_BYTE *)v48 + 477) & 0x40) != 0) + 1LL;
  v7 = 0LL;
  do
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * *(unsigned __int16 *)a2);
    if ( (*(_BYTE *)(v8 + v6) & 1) != 0 )
    {
      v9 = VIDMM_PARTITION::_PartitionTree;
      Children = 0LL;
      while ( v9 )
      {
        Children = v9->Children;
        v9 = v9->Children[0];
      }
      while ( Children )
      {
        v11 = 3LL;
        v12 = *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + Children[5] + 24)
            + 344LL * *(unsigned __int16 *)a2;
        do
        {
          memset((void *)(v12 + 240), 0, 0x60uLL);
          --v11;
        }
        while ( v11 );
        v13 = (_QWORD **)Children[1];
        v14 = Children;
        if ( v13 )
        {
          v15 = *v13;
          for ( Children = (_QWORD *)Children[1]; v15; v15 = (_QWORD *)*v15 )
            Children = v15;
        }
        else
        {
          while ( 1 )
          {
            Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !Children || (_QWORD *)*Children == v14 )
              break;
            v14 = Children;
          }
        }
      }
    }
    else
    {
      v16 = 3LL;
      v17 = v8 + 344LL * v4;
      do
      {
        memset((void *)(v17 + 824), 0, 0x60uLL);
        --v16;
      }
      while ( v16 );
    }
    ++v4;
    ++v7;
    v6 += 24LL;
  }
  while ( v7 < v46 );
  for ( i = (__int64 *)*((_QWORD *)this + 5141); i != (__int64 *)((char *)this + 41128); i = (__int64 *)*i )
  {
    v19 = *(i - 1);
    v44 = 0;
    v20 = (_QWORD *)(304 * v45 + v19 + 8);
    v43 = i + 3;
    if ( i != (__int64 *)-24LL && (struct _KTHREAD *)i[4] == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1512;
      DxgkLogInternalTriageEvent(v21, 262146LL);
    }
    DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v42);
    v20[23] = v20[17];
    v20[24] = v20[18];
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v42);
    v20[24] += VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v20);
    v23 = (VIDMM_PROCESS *)i[2];
    v24 = (struct DXGPROCESS *)*((_QWORD *)v23 + 4);
    if ( v24 && v23 != g_pVidMmSystemProcess )
    {
      v25 = (unsigned __int8 *)i + 58;
      VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
        v22,
        v24,
        (enum VIDMM_BUDGET_PRIORITY_BAND *)((char *)i + 58),
        (enum VIDMM_BUDGET_VISIBILITY_STATE *)(i + 7));
      v26 = *v20;
      if ( *v20 )
      {
        if ( *(_QWORD **)(v26 + 8) != v20 || (v27 = (_QWORD *)v20[1], (_QWORD *)*v27 != v20) )
          __fastfail(3u);
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        *v20 = 0LL;
        v20[1] = 0LL;
      }
      v28 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
      v29 = v20 + 7;
      do
      {
        SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(this, v47, v28, *(struct VIDMM_PARTITION **)(i[2] + 296));
        *((_QWORD *)SegmentGroupState + *v25 + 30) += v29[16];
        if ( *v29 )
        {
          *((_QWORD *)SegmentGroupState + *v25 + 36) += *v29;
          ++*((_DWORD *)SegmentGroupState + *v25 + 78);
        }
        ++v28;
        ++v29;
      }
      while ( v28 < 2 );
    }
  }
  v31 = v45;
  v32 = 0;
  v33 = 0LL;
  v34 = 552LL;
  do
  {
    v35 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v31);
    if ( (*(_BYTE *)(v34 + v35) & 1) == 0 )
    {
      VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
        this,
        v48,
        a3,
        (struct VIDMM_SEGMENT_GROUP_STATE *)(v35 + 584 + 344LL * v32));
LABEL_54:
      v31 = v45;
      goto LABEL_55;
    }
    v36 = VIDMM_PARTITION::_PartitionTree;
    v37 = 0LL;
    while ( v36 )
    {
      v37 = v36->Children;
      v36 = v36->Children[0];
    }
    if ( v37 )
    {
      v38 = 344 * v31;
      do
      {
        VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
          this,
          v48,
          a3,
          (struct VIDMM_SEGMENT_GROUP_STATE *)(v38
                                             + *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)
                                                         + v37[5]
                                                         + 24)));
        v39 = (_QWORD **)v37[1];
        v40 = v37;
        if ( v39 )
        {
          v37 = (_QWORD *)v37[1];
          for ( j = *v39; j; j = (_QWORD *)*j )
            v37 = j;
        }
        else
        {
          while ( 1 )
          {
            v37 = (_QWORD *)(v37[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v37 || (_QWORD *)*v37 == v40 )
              break;
            v40 = v37;
          }
        }
      }
      while ( v37 );
      goto LABEL_54;
    }
LABEL_55:
    ++v32;
    ++v33;
    v34 += 24LL;
  }
  while ( v33 < v46 );
}
