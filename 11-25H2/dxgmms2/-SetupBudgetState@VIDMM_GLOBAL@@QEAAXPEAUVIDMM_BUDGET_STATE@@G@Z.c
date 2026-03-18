/*
 * XREFs of ?SetupBudgetState@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@G@Z @ 0x1400DB544
 * Callers:
 *     ?RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1400DB3C8 (-RecalculateBudget@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140007710 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140033DC0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1400DB9A8 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1400DC46C (-CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET.c)
 */

void __fastcall VIDMM_GLOBAL::SetupBudgetState(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        struct VIDMM_BUDGET_STATE *a3)
{
  int v4; // r12d
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rdi
  struct _RTL_BALANCED_NODE *v11; // rax
  _QWORD *Children; // rbx
  __int64 v13; // r14
  struct _KTHREAD **v14; // rbx
  __int64 v15; // r12
  _QWORD *v16; // rdi
  VIDMM_PROCESS *v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r10
  _QWORD *v24; // rdi
  __int64 v25; // r11
  __int64 v26; // rcx
  int v27; // esi
  __int64 v28; // rdi
  __int64 v29; // rdx
  struct _RTL_BALANCED_NODE *v30; // rax
  _QWORD *v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rsi
  _QWORD **v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // r14
  _QWORD **v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rcx
  _QWORD *i; // rcx
  _BYTE v41[88]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v42; // [rsp+80h] [rbp+8h]
  __int64 v43; // [rsp+88h] [rbp+10h]
  struct VIDMM_PHYSICAL_ADAPTER *v44; // [rsp+98h] [rbp+20h]

  *(_WORD *)a2 = (_WORD)a3;
  v4 = 0;
  v42 = (unsigned __int16)a3;
  v6 = 552LL;
  v44 = *(struct VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8LL * (unsigned __int16)a3);
  v43 = ((*((_BYTE *)v44 + 477) & 0x40) != 0) + 1LL;
  v7 = 0LL;
  do
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * *(unsigned __int16 *)a2);
    if ( (*(_BYTE *)(v8 + v6) & 1) != 0 )
    {
      v11 = VIDMM_PARTITION::_PartitionTree;
      Children = 0LL;
      while ( v11 )
      {
        Children = v11->Children;
        v11 = v11->Children[0];
      }
      while ( Children )
      {
        v32 = 3LL;
        v33 = *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + Children[5] + 24)
            + 344LL * *(unsigned __int16 *)a2;
        do
        {
          memset((void *)(v33 + 240), 0, 0x60uLL);
          --v32;
        }
        while ( v32 );
        v34 = (_QWORD **)Children[1];
        v35 = Children;
        if ( v34 )
        {
          v39 = *v34;
          for ( Children = (_QWORD *)Children[1]; v39; v39 = (_QWORD *)*v39 )
            Children = v39;
        }
        else
        {
          while ( 1 )
          {
            Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !Children || (_QWORD *)*Children == v35 )
              break;
            v35 = Children;
          }
        }
      }
    }
    else
    {
      v9 = 3LL;
      v10 = v8 + 344LL * v4;
      do
      {
        memset((void *)(v10 + 824), 0, 0x60uLL);
        --v9;
      }
      while ( v9 );
    }
    ++v4;
    ++v7;
    v6 += 24LL;
  }
  while ( v7 < v43 );
  v13 = v42;
  v14 = (struct _KTHREAD **)*((_QWORD *)this + 5141);
  v15 = 552LL;
  if ( v14 != (struct _KTHREAD **)((char *)this + 41128) )
  {
    while ( 1 )
    {
      v16 = (_QWORD *)((char *)*(v14 - 1) + 304 * v42 + 8);
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41, v14 + 3, 0);
      DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v41);
      v16[23] = v16[17];
      v16[24] = v16[18];
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41);
      v16[24] += VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment((VIDMM_PROCESS_BUDGET_STATE *)v16);
      v17 = v14[2];
      v18 = *((_QWORD *)v17 + 4);
      if ( v18 )
      {
        if ( v17 != g_pVidMmSystemProcess )
          break;
      }
LABEL_27:
      v14 = (struct _KTHREAD **)*v14;
      if ( v14 == (struct _KTHREAD **)((char *)this + 41128) )
        goto LABEL_28;
    }
    if ( (*(_DWORD *)(v18 + 408) & 4) != 0 )
    {
      *((_BYTE *)v14 + 58) = 0;
    }
    else
    {
      v19 = *(_DWORD *)(v18 + 416);
      if ( (v19 & 1) == 0 )
      {
        *((_BYTE *)v14 + 58) = 2;
        *((_BYTE *)v14 + 56) = ((v19 & 2) != 0) + 1;
LABEL_17:
        v20 = *v16;
        if ( *v16 )
        {
          if ( *(_QWORD **)(v20 + 8) != v16 || (v21 = (_QWORD *)v16[1], (_QWORD *)*v21 != v16) )
            __fastfail(3u);
          *v21 = v20;
          *(_QWORD *)(v20 + 8) = v21;
          *v16 = 0LL;
          v16[1] = 0LL;
        }
        v22 = 0LL;
        v23 = 552LL;
        v24 = v16 + 7;
        v25 = 2LL;
        do
        {
          v26 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v42);
          if ( (*(_BYTE *)(v23 + v26) & 1) != 0 )
            a3 = (struct VIDMM_BUDGET_STATE *)(*(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)
                                                         + *(_QWORD *)(*((_QWORD *)v14[2] + 37) + 40LL)
                                                         + 24)
                                             + 344 * v42);
          else
            a3 = (struct VIDMM_BUDGET_STATE *)(v22 + v26 + 584);
          *((_QWORD *)a3 + *((unsigned __int8 *)v14 + 58) + 30) += v24[16];
          if ( *v24 )
          {
            *((_QWORD *)a3 + *((unsigned __int8 *)v14 + 58) + 36) += *v24;
            ++*((_DWORD *)a3 + *((unsigned __int8 *)v14 + 58) + 78);
          }
          v22 += 344LL;
          v23 += 24LL;
          ++v24;
          --v25;
        }
        while ( v25 );
        goto LABEL_27;
      }
      *((_BYTE *)v14 + 58) = 1;
    }
    *((_BYTE *)v14 + 56) = 0;
    goto LABEL_17;
  }
LABEL_28:
  v27 = 0;
  v28 = 0LL;
  do
  {
    v29 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v13);
    if ( (*(_BYTE *)(v15 + v29) & 1) != 0 )
    {
      v30 = VIDMM_PARTITION::_PartitionTree;
      v31 = 0LL;
      while ( v30 )
      {
        v31 = v30->Children;
        v30 = v30->Children[0];
      }
      if ( v31 )
      {
        v36 = 344 * v13;
        do
        {
          VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
            this,
            v44,
            a3,
            (struct VIDMM_SEGMENT_GROUP_STATE *)(v36
                                               + *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)
                                                           + v31[5]
                                                           + 24)));
          v37 = (_QWORD **)v31[1];
          v38 = v31;
          if ( v37 )
          {
            v31 = (_QWORD *)v31[1];
            for ( i = *v37; i; i = (_QWORD *)*i )
              v31 = i;
          }
          else
          {
            while ( 1 )
            {
              v31 = (_QWORD *)(v31[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !v31 || (_QWORD *)*v31 == v38 )
                break;
              v38 = v31;
            }
          }
        }
        while ( v31 );
        v13 = v42;
      }
    }
    else
    {
      VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
        this,
        v44,
        a3,
        (struct VIDMM_SEGMENT_GROUP_STATE *)(v29 + 584 + 344LL * v27));
    }
    ++v27;
    ++v28;
    v15 += 24LL;
  }
  while ( v28 < v43 );
}
