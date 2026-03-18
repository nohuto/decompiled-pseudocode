/*
 * XREFs of ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x14034A0C4
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x1402894D0 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x140041CDC (-VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEA.c)
 *     ?VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x14004E058 (-VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKM.c)
 *     ?VidMmQueryProcessAdapterStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x14006B678 (-VidMmQueryProcessAdapterStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GPEAVDXGPROCESS@@PEAU_D.c)
 *     ?VidMmQueryProcessSegmentGroupStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION@@@Z @ 0x14006B6C4 (-VidMmQueryProcessSegmentGroupStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GW4_D3DKMT_MEMORY_.c)
 *     ?VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION@@@Z @ 0x14006B728 (-VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QueryProcessStatistics(
        struct _D3DKMT_QUERYSTATISTICS *a1,
        struct DXGADAPTER *a2,
        struct _KTHREAD **a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  struct _KTHREAD *v9; // rsi
  unsigned int v10; // ebp
  unsigned __int16 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int (__fastcall *v19)(__int64, __int64, __int64, __int64, char *); // rax
  int ProcessAdapterStatistics; // edi
  __int64 v23; // rax
  struct _KTHREAD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  struct _KTHREAD *v27; // rsi
  __int64 v28; // r15
  __int64 v29; // rax
  struct _KTHREAD *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rax
  struct _KTHREAD *v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *v38; // r14
  unsigned __int16 v39; // r8
  unsigned int v40; // r9d
  unsigned __int16 v41; // r8
  struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *v42; // r14

  v3 = 0LL;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5868;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pQueryStatistics", 5868LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 || !*((_QWORD *)a2 + 391) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5869;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pAdapter && pAdapter->IsRenderAdapter()",
      5869LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5871;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pProcess", 5871LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a3[16] != KeGetCurrentThread() && a3 != (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5872;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pProcess->IsMutexOwner() || pProcess == DXGPROCESS::GetCurrent()",
      5872LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = *(int *)a1;
  if ( (int)v7 > 9 )
  {
    if ( (_DWORD)v7 != 13 )
    {
      if ( (_DWORD)v7 == 14 )
      {
        v29 = *((_QWORD *)a2 + 391);
        v30 = a3[8];
        v17 = *((unsigned __int16 *)a1 + 401);
        v31 = *(_QWORD *)(v29 + 760);
        v32 = *(_QWORD *)(v29 + 768);
        if ( v30 )
          v3 = *((_QWORD *)v30 + (unsigned int)(*(_DWORD *)v31 - 1));
        v33 = *(_QWORD *)(v31 + 8);
        v18 = v3;
        v15 = *((unsigned __int16 *)a1 + 400);
        v16 = v32;
        v19 = *(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64, char *))(v33 + 304);
        return v19(v16, v15, v17, v18, (char *)a1 + 24);
      }
      if ( (_DWORD)v7 != 15 )
      {
        if ( (_DWORD)v7 == 19 )
        {
          v8 = *((_QWORD *)a2 + 391);
          v9 = a3[8];
          v10 = *((unsigned __int16 *)a1 + 401);
          v11 = *((_WORD *)a1 + 400);
          v12 = *(_QWORD *)(v8 + 736);
          v13 = *(_QWORD *)(v8 + 744);
          if ( v9 )
          {
            v14 = *((_QWORD *)v9 + (unsigned int)(*(_DWORD *)v12 - 1) + 2);
            if ( v14 )
            {
LABEL_16:
              v15 = v11;
              v16 = v13;
LABEL_17:
              v17 = v10;
              v18 = v14;
              v19 = *(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64, char *))(*(_QWORD *)(v12 + 8)
                                                                                              + 736LL);
              return v19(v16, v15, v17, v18, (char *)a1 + 24);
            }
          }
          else
          {
            v14 = 0LL;
          }
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1324;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pVidSchProcess", 1324LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_16;
        }
LABEL_52:
        ProcessAdapterStatistics = -1073741811;
        WdLogSingleEntry1(3LL, v7);
        WdLogGlobalForLineNumber = 6006;
        return (unsigned int)ProcessAdapterStatistics;
      }
      v40 = *((unsigned __int16 *)a1 + 401);
      v41 = *((_WORD *)a1 + 400);
      return (unsigned int)VIDMM_EXPORT::VidMmQueryProcessSegmentGroupStatistics(
                             *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 391) + 760LL),
                             *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 391) + 768LL),
                             v41,
                             v40,
                             (struct DXGPROCESS *)a3,
                             (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
    }
    v39 = *((_WORD *)a1 + 400);
LABEL_54:
    v42 = (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24);
    ProcessAdapterStatistics = VIDMM_EXPORT::VidMmQueryProcessAdapterStatistics(
                                 *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 391) + 760LL),
                                 *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 391) + 768LL),
                                 v39,
                                 (struct DXGPROCESS *)a3,
                                 (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
    if ( ProcessAdapterStatistics < 0 )
      return (unsigned int)ProcessAdapterStatistics;
    return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessAdapterStatistics(
                           *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 391) + 736LL),
                           *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 391) + 744LL),
                           (struct DXGPROCESS *)a3,
                           v42);
  }
  if ( (_DWORD)v7 == 9 )
  {
    v40 = *((_DWORD *)a1 + 200);
    v41 = 0;
    return (unsigned int)VIDMM_EXPORT::VidMmQueryProcessSegmentGroupStatistics(
                           *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 391) + 760LL),
                           *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 391) + 768LL),
                           v41,
                           v40,
                           (struct DXGPROCESS *)a3,
                           (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  }
  if ( (_DWORD)v7 != 1 )
  {
    if ( (_DWORD)v7 == 2 )
    {
      v39 = 0;
      goto LABEL_54;
    }
    if ( (_DWORD)v7 == 4 )
    {
      v23 = *((_QWORD *)a2 + 391);
      v24 = a3[8];
      v25 = *(_QWORD *)(v23 + 760);
      if ( v24 )
        v3 = *((_QWORD *)v24 + (unsigned int)(*(_DWORD *)v25 - 1));
      return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v25 + 8)
                                                                                              + 304LL))(
                             *(_QWORD *)(v23 + 768),
                             0LL,
                             *((unsigned int *)a1 + 200),
                             v3,
                             (char *)a1 + 24);
    }
    if ( (_DWORD)v7 != 6 )
    {
      if ( (_DWORD)v7 == 8 )
        return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessVidPnSourceStatistics(
                               *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 391) + 736LL),
                               *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 391) + 744LL),
                               *((_DWORD *)a1 + 200),
                               (struct DXGPROCESS *)a3,
                               (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
      goto LABEL_52;
    }
    v26 = *((_QWORD *)a2 + 391);
    v27 = a3[8];
    v10 = *((_DWORD *)a1 + 200);
    v12 = *(_QWORD *)(v26 + 736);
    v28 = *(_QWORD *)(v26 + 744);
    if ( v27 )
    {
      v14 = *((_QWORD *)v27 + (unsigned int)(*(_DWORD *)v12 - 1) + 2);
      if ( v14 )
      {
LABEL_33:
        v15 = 0xFFFFLL;
        v16 = v28;
        goto LABEL_17;
      }
    }
    else
    {
      v14 = 0LL;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1324;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pVidSchProcess", 1324LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_33;
  }
  v34 = *((_QWORD *)a2 + 391);
  v35 = a3[8];
  v36 = *(_QWORD *)(v34 + 760);
  if ( v35 )
    v37 = *((_QWORD *)v35 + (unsigned int)(*(_DWORD *)v36 - 1));
  else
    v37 = 0LL;
  v38 = (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24);
  ProcessAdapterStatistics = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v36 + 8) + 280LL))(
                               *(_QWORD *)(v34 + 768),
                               v37,
                               (char *)a1 + 24);
  if ( ProcessAdapterStatistics >= 0 )
    return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessStatistics(
                           *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 391) + 736LL),
                           *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 391) + 744LL),
                           (struct DXGPROCESS *)a3,
                           v38);
  return (unsigned int)ProcessAdapterStatistics;
}
