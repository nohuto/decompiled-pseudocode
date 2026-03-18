/*
 * XREFs of ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1400F6C50
 * Callers:
 *     ?QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJGW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION@@@Z @ 0x140099250 (-QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJGW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDM.c)
 *     ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1400F9EB8 (-QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140007710 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400E819C (-GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400F01AC (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1400FEE60 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
 */

__int64 __fastcall VIDMM_PROCESS::QueryVideoMemoryInfo(
        VIDMM_PROCESS *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11)
{
  __int64 v14; // rsi
  struct DXGPROCESS *v15; // rdx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v17; // rbx
  unsigned __int64 *v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int8 v23; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v24[7]; // [rsp+51h] [rbp-1Fh] BYREF
  _BYTE v25[8]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]
  int v27; // [rsp+68h] [rbp-8h]

  if ( (unsigned int)a5 <= D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL )
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a3);
    if ( v14 )
    {
      v17 = *(_QWORD *)(v14 + 16) + 304LL * (unsigned __int16)a4;
      *a6 = *(_QWORD *)(v17 + 8LL * (int)a5 + 32);
      *a8 = *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(
                          *(VIDMM_GLOBAL **)v14,
                          a4,
                          a5,
                          *((struct VIDMM_PARTITION **)this + 37))
            + 5);
      *a9 = *(_QWORD *)(v17 + 8LL * (int)a5 + 64);
      v18 = a10;
      if ( a10 )
      {
        v19 = 5LL;
        do
        {
          if ( a5 )
            v20 = 0LL;
          else
            v20 = *(unsigned __int64 *)((char *)v18 + v17 + 8 - (_QWORD)a10 + 256);
          *v18++ = v20;
          --v19;
        }
        while ( v19 );
        *a11 = *(_QWORD *)(v17 + 8LL * (int)a5 + 208);
      }
      v27 = 0;
      v26 = v14 + 48;
      if ( v14 != -48 && *(struct _KTHREAD **)(v14 + 56) == KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1512;
        DxgkLogInternalTriageEvent(v21, 262146LL);
      }
      DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v25);
      *a7 = *(_QWORD *)(v17 + 8LL * (int)a5 + 144);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
      return 0LL;
    }
    if ( !a10 )
    {
      v15 = (struct DXGPROCESS *)*((_QWORD *)this + 4);
      v23 = 0;
      v24[0] = 0;
      VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
        this,
        v15,
        (enum VIDMM_BUDGET_PRIORITY_BAND *)&v23,
        (enum VIDMM_BUDGET_VISIBILITY_STATE *)v24);
      SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(a2, a4, a5, *((struct VIDMM_PARTITION **)this + 37));
      *a6 = *((_QWORD *)SegmentGroupState + 3 * v23 + v24[0] + 6);
      *a8 = *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(a2, a4, a5, *((struct VIDMM_PARTITION **)this + 37)) + 5);
      *a9 = 0LL;
      *a7 = 0LL;
      return 0LL;
    }
  }
  return 3221225485LL;
}
