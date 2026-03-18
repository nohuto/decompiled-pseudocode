/*
 * XREFs of ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1400F8B58
 * Callers:
 *     ?QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJGW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION@@@Z @ 0x1400990D0 (-QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJGW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDM.c)
 *     ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1400FAB48 (-QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140007710 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400DA8F4 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400EC0DC (-GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1400FF178 (-GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY.c)
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
  __int64 v11; // rbx
  __int64 v15; // rsi
  struct DXGPROCESS *v16; // rdx
  struct VIDMM_SEGMENT_GROUP_STATE *v17; // rax
  const struct VIDMM_SEGMENT_GROUP_STATE *v18; // rax
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v19; // r8d
  __int64 v20; // rdi
  __int64 v21; // r14
  const struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  unsigned __int64 *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  _BYTE v29[8]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v30[8]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v31; // [rsp+60h] [rbp-10h]
  int v32; // [rsp+68h] [rbp-8h]

  v11 = a5;
  if ( (unsigned int)a5 <= D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL )
  {
    v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a3);
    if ( v15 )
    {
      v19 = a5;
      v20 = *(_QWORD *)(v15 + 16) + 304LL * (unsigned __int16)a4;
      v21 = a5;
      *a6 = *(_QWORD *)(v20 + 8LL * (int)a5 + 32);
      SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                            *(VIDMM_GLOBAL **)v15,
                            a4,
                            v19,
                            *((struct VIDMM_PARTITION **)this + 37));
      *a8 = *((_QWORD *)SegmentGroupState + 5);
      *a9 = *(_QWORD *)(v20 + 8 * v11 + 64);
      v23 = a10;
      if ( a10 )
      {
        v24 = 5LL;
        v25 = v20 + 8 - (_QWORD)a10;
        do
        {
          if ( (_DWORD)v11 )
            v26 = 0LL;
          else
            v26 = *(unsigned __int64 *)((char *)v23 + v25 + 256);
          *v23++ = v26;
          --v24;
        }
        while ( v24 );
        *a11 = *(_QWORD *)(v20 + 8 * v11 + 208);
      }
      v32 = 0;
      v31 = v15 + 48;
      if ( v15 != -48 )
      {
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        if ( *(struct _KTHREAD **)(v15 + 56) == KeGetCurrentThread() )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1575;
          DxgkLogInternalTriageEvent(v27, 262146LL);
        }
      }
      DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v30);
      *a7 = *(_QWORD *)(v20 + 8 * v21 + 144);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
      return 0LL;
    }
    if ( !a10 )
    {
      v16 = (struct DXGPROCESS *)*((_QWORD *)this + 4);
      LOBYTE(a5) = 0;
      v29[0] = 0;
      VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
        this,
        v16,
        (enum VIDMM_BUDGET_PRIORITY_BAND *)&a5,
        (enum VIDMM_BUDGET_VISIBILITY_STATE *)v29);
      v17 = VIDMM_GLOBAL::GetSegmentGroupState(
              a2,
              a4,
              (enum _D3DKMT_MEMORY_SEGMENT_GROUP)v11,
              *((struct VIDMM_PARTITION **)this + 37));
      *a6 = *((_QWORD *)v17 + 3 * (unsigned __int8)a5 + v29[0] + 6);
      v18 = VIDMM_GLOBAL::GetSegmentGroupState(
              a2,
              a4,
              (enum _D3DKMT_MEMORY_SEGMENT_GROUP)v11,
              *((struct VIDMM_PARTITION **)this + 37));
      *a8 = *((_QWORD *)v18 + 5);
      *a9 = 0LL;
      *a7 = 0LL;
      return 0LL;
    }
  }
  return 3221225485LL;
}
