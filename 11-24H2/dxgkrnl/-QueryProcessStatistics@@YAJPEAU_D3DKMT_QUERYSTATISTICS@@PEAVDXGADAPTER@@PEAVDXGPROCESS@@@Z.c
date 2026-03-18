/*
 * XREFs of ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1403375AC
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x140295A90 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x14004166C (-VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEA.c)
 *     ?VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x14004D9F8 (-VidSchQueryProcessStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKM.c)
 *     ?VidMmQueryProcessAdapterStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x14006B298 (-VidMmQueryProcessAdapterStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GPEAVDXGPROCESS@@PEAU_D.c)
 *     ?VidMmQueryProcessSegmentGroupStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION@@@Z @ 0x14006B2E4 (-VidMmQueryProcessSegmentGroupStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GW4_D3DKMT_MEMORY_.c)
 *     ?VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_VIDPNSOURCE_INFORMATION@@@Z @ 0x14006B348 (-VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@IPEAVDXGPROCESS.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QueryProcessStatistics(
        struct _D3DKMT_QUERYSTATISTICS *a1,
        struct DXGADAPTER *a2,
        struct DXGPROCESS *a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // ebp
  unsigned __int16 v12; // r15
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int (__fastcall *v20)(__int64, __int64, __int64, __int64, char *); // rax
  int ProcessAdapterStatistics; // edi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rbp
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *v39; // r14
  unsigned __int16 v40; // r8
  unsigned int v41; // r9d
  unsigned __int16 v42; // r8
  struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *v43; // r14

  v3 = 0LL;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5915;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pQueryStatistics", 5915LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 || !*((_QWORD *)a2 + 391) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5916;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pAdapter && pAdapter->IsRenderAdapter()",
      5916LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5918;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pProcess", 5918LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = (struct _KTHREAD *)*((_QWORD *)a3 + 16);
  if ( v7 != KeGetCurrentThread() && a3 != DXGPROCESS::GetCurrent((__int64)v7) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5919;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pProcess->IsMutexOwner() || pProcess == DXGPROCESS::GetCurrent()",
      5919LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *(int *)a1;
  if ( (int)v8 > 9 )
  {
    if ( (_DWORD)v8 != 13 )
    {
      if ( (_DWORD)v8 == 14 )
      {
        v30 = *((_QWORD *)a2 + 391);
        v31 = *((_QWORD *)a3 + 8);
        v18 = *((unsigned __int16 *)a1 + 401);
        v32 = *(_QWORD *)(v30 + 760);
        v33 = *(_QWORD *)(v30 + 768);
        if ( v31 )
          v3 = *(_QWORD *)(v31 + 8LL * (unsigned int)(*(_DWORD *)v32 - 1));
        v34 = *(_QWORD *)(v32 + 8);
        v19 = v3;
        v16 = *((unsigned __int16 *)a1 + 400);
        v17 = v33;
        v20 = *(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64, char *))(v34 + 304);
        return v20(v17, v16, v18, v19, (char *)a1 + 24);
      }
      if ( (_DWORD)v8 != 15 )
      {
        if ( (_DWORD)v8 == 19 )
        {
          v9 = *((_QWORD *)a2 + 391);
          v10 = *((_QWORD *)a3 + 8);
          v11 = *((unsigned __int16 *)a1 + 401);
          v12 = *((_WORD *)a1 + 400);
          v13 = *(_QWORD *)(v9 + 736);
          v14 = *(_QWORD *)(v9 + 744);
          if ( v10 )
          {
            v15 = *(_QWORD *)(v10 + 8LL * (unsigned int)(*(_DWORD *)v13 - 1) + 16);
            if ( v15 )
            {
LABEL_16:
              v16 = v12;
              v17 = v14;
LABEL_17:
              v18 = v11;
              v19 = v15;
              v20 = *(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64, char *))(*(_QWORD *)(v13 + 8)
                                                                                              + 736LL);
              return v20(v17, v16, v18, v19, (char *)a1 + 24);
            }
          }
          else
          {
            v15 = 0LL;
          }
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1324;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pVidSchProcess", 1324LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_16;
        }
LABEL_52:
        ProcessAdapterStatistics = -1073741811;
        WdLogSingleEntry1(3LL, v8);
        WdLogGlobalForLineNumber = 6053;
        return (unsigned int)ProcessAdapterStatistics;
      }
      v41 = *((unsigned __int16 *)a1 + 401);
      v42 = *((_WORD *)a1 + 400);
      return (unsigned int)VIDMM_EXPORT::VidMmQueryProcessSegmentGroupStatistics(
                             *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 391) + 760LL),
                             *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 391) + 768LL),
                             v42,
                             v41,
                             a3,
                             (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
    }
    v40 = *((_WORD *)a1 + 400);
LABEL_54:
    v43 = (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24);
    ProcessAdapterStatistics = VIDMM_EXPORT::VidMmQueryProcessAdapterStatistics(
                                 *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 391) + 760LL),
                                 *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 391) + 768LL),
                                 v40,
                                 a3,
                                 (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
    if ( ProcessAdapterStatistics < 0 )
      return (unsigned int)ProcessAdapterStatistics;
    return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessAdapterStatistics(
                           *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 391) + 736LL),
                           *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 391) + 744LL),
                           a3,
                           v43);
  }
  if ( (_DWORD)v8 == 9 )
  {
    v41 = *((_DWORD *)a1 + 200);
    v42 = 0;
    return (unsigned int)VIDMM_EXPORT::VidMmQueryProcessSegmentGroupStatistics(
                           *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 391) + 760LL),
                           *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 391) + 768LL),
                           v42,
                           v41,
                           a3,
                           (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
  }
  if ( (_DWORD)v8 != 1 )
  {
    if ( (_DWORD)v8 == 2 )
    {
      v40 = 0;
      goto LABEL_54;
    }
    if ( (_DWORD)v8 == 4 )
    {
      v24 = *((_QWORD *)a2 + 391);
      v25 = *((_QWORD *)a3 + 8);
      v26 = *(_QWORD *)(v24 + 760);
      if ( v25 )
        v3 = *(_QWORD *)(v25 + 8LL * (unsigned int)(*(_DWORD *)v26 - 1));
      return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *))(*(_QWORD *)(v26 + 8)
                                                                                              + 304LL))(
                             *(_QWORD *)(v24 + 768),
                             0LL,
                             *((unsigned int *)a1 + 200),
                             v3,
                             (char *)a1 + 24);
    }
    if ( (_DWORD)v8 != 6 )
    {
      if ( (_DWORD)v8 == 8 )
        return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessVidPnSourceStatistics(
                               *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 391) + 736LL),
                               *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 391) + 744LL),
                               *((_DWORD *)a1 + 200),
                               a3,
                               (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24));
      goto LABEL_52;
    }
    v27 = *((_QWORD *)a2 + 391);
    v28 = *((_QWORD *)a3 + 8);
    v11 = *((_DWORD *)a1 + 200);
    v13 = *(_QWORD *)(v27 + 736);
    v29 = *(_QWORD *)(v27 + 744);
    if ( v28 )
    {
      v15 = *(_QWORD *)(v28 + 8LL * (unsigned int)(*(_DWORD *)v13 - 1) + 16);
      if ( v15 )
      {
LABEL_33:
        v16 = 0xFFFFLL;
        v17 = v29;
        goto LABEL_17;
      }
    }
    else
    {
      v15 = 0LL;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1324;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pVidSchProcess", 1324LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_33;
  }
  v35 = *((_QWORD *)a2 + 391);
  v36 = *((_QWORD *)a3 + 8);
  v37 = *(_QWORD *)(v35 + 760);
  if ( v36 )
    v38 = *(_QWORD *)(v36 + 8LL * (unsigned int)(*(_DWORD *)v37 - 1));
  else
    v38 = 0LL;
  v39 = (struct _D3DKMT_QUERYSTATISTICS *)((char *)a1 + 24);
  ProcessAdapterStatistics = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v37 + 8) + 280LL))(
                               *(_QWORD *)(v35 + 768),
                               v38,
                               (char *)a1 + 24);
  if ( ProcessAdapterStatistics >= 0 )
    return (unsigned int)VIDSCH_EXPORT::VidSchQueryProcessStatistics(
                           *(VIDSCH_EXPORT **)(*((_QWORD *)a2 + 391) + 736LL),
                           *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a2 + 391) + 744LL),
                           a3,
                           v39);
  return (unsigned int)ProcessAdapterStatistics;
}
