/*
 * XREFs of ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14037781C
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403774A0 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1401C1AF0 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1402611D8 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x14028A2B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x14036D944 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140373174 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x140373D4C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x140373EE8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140377D7C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     DxgkInvalidateMonitorConnections @ 0x140378200 (DxgkInvalidateMonitorConnections.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403796C4 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x140404204 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 */

__int64 __fastcall HandleMonitorDepartureCase(
        __int64 a1,
        struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v7; // rsi
  __int64 v9; // rdi
  struct DXGGLOBAL *Global; // rax
  int v11; // eax
  unsigned int v12; // edi
  DXGGLOBAL *v14; // rax
  struct DXGADAPTER *v15; // rax
  DXGADAPTER *v16; // rbx
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // rsi
  struct DXGGLOBAL *v20; // rax
  int v21; // eax
  int v22; // eax
  struct CCD_BTL *v23; // rax
  int v24; // eax
  unsigned int v25; // esi
  int PathDescriptorByTarget; // eax
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // rsi
  int v33; // eax
  __int64 v34; // [rsp+20h] [rbp-E0h]
  __int64 v35; // [rsp+20h] [rbp-E0h]
  __int64 v36; // [rsp+28h] [rbp-D8h]
  __int64 v37; // [rsp+28h] [rbp-D8h]
  __int64 HighPart; // [rsp+28h] [rbp-D8h]
  __int64 LowPart; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v40[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v42; // [rsp+60h] [rbp-A0h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v43; // [rsp+68h] [rbp-98h]
  struct D3DKMT_GETPATHSMODALITY *v44[9]; // [rsp+70h] [rbp-90h] BYREF
  int v45; // [rsp+BCh] [rbp-44h]
  int v46; // [rsp+C0h] [rbp-40h]
  _BYTE v47[144]; // [rsp+E0h] [rbp-20h] BYREF

  v7 = a4;
  v9 = a3;
  v43 = a6;
  if ( a4 == 10 && a5 == 2 )
  {
    *(_BYTE *)(a1 + 25) = 0;
    Global = DXGGLOBAL::GetGlobal();
    v11 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)Global,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            a1,
            (int)v7 - 6);
    v12 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1((unsigned int)(v7 - 7), v11);
      WdLogGlobalForLineNumber = 3148;
      return v12;
    }
    *(_BYTE *)(a1 + 26) = 1;
    return 0LL;
  }
  if ( a5 != 5 )
  {
    v22 = DxgkInvalidateMonitorConnections(2uLL);
    if ( v22 < 0 )
    {
      WdLogSingleEntry1(4LL, v22);
      WdLogGlobalForLineNumber = 3227;
    }
    if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, a2, v9) < 0 )
    {
      WdLogSingleEntry3(3LL, a2->HighPart, a2->LowPart, v9);
      WdLogGlobalForLineNumber = 3244;
    }
    if ( *(_BYTE *)(a1 + 24) )
    {
      *(_BYTE *)(a1 + 26) = 1;
      *(_BYTE *)(a1 + 31) = 1;
      CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v44, 8u, 0);
      v23 = CCD_BTL::Global();
      v24 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v44, (struct CCD_BTL *)((char *)v23 + 8));
      v42 = v24;
      if ( v24 < 0 )
      {
        v31 = v7;
        v32 = v24;
        WdLogSingleEntry5(2LL, v24, a2->HighPart, a2->LowPart, v9, v31);
        LowPart = a2->LowPart;
        HighPart = a2->HighPart;
        WdLogGlobalForLineNumber = 3339;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Unable to get copy of most recent topology. (NtStatus = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x, i_TargetId = "
           "0x%I64x, i_MonitorEvent = 0x%I64x)",
          v32,
          HighPart,
          LowPart,
          v9,
          v31);
        DxgkLogCodePointPacket(0x3Du, v42, 0, 0, (__int64)*a2);
      }
      else
      {
        v25 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 462);
        if ( v25 > 1 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 3275;
          v41 = 0LL;
          DxgkLogCodePointPacket(0x52u, v25, 0, 0, 0LL);
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v44);
          return 0LL;
        }
        if ( *(_DWORD *)(a1 + 20) != -1 )
        {
          *(_BYTE *)(a1 + 25) = 0;
          PathDescriptorByTarget = CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v44, a2, v9, 0LL);
          if ( PathDescriptorByTarget == -1073741275 )
          {
            v45 = 1;
            v46 = 4;
            v27 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v44, 0, 0);
            if ( v27 >= 0 )
            {
              v30 = CCD_TOPOLOGY::Persist(v44, 0LL, v28, v29);
              if ( v30 >= 0 )
              {
                *(_DWORD *)(a1 + 32) |= 0x20u;
                *(_BYTE *)(a1 + 26) = 0;
                *(_BYTE *)(a1 + 31) = 0;
              }
              else
              {
                WdLogSingleEntry1(3LL, v30);
                WdLogGlobalForLineNumber = 3309;
              }
            }
            else
            {
              WdLogSingleEntry1(3LL, v27);
              WdLogGlobalForLineNumber = 3298;
            }
          }
          else if ( PathDescriptorByTarget < 0 )
          {
            WdLogSingleEntry2(3LL, PathDescriptorByTarget, v9);
            WdLogGlobalForLineNumber = 3328;
          }
        }
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v44);
    }
    if ( *(_BYTE *)(a1 + 30) )
    {
      *(_BYTE *)(a1 + 25) = 0;
      *(_DWORD *)(a1 + 20) = v9;
    }
    v33 = DisplayConfigHandleMonitorInvalidation(5uLL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, v43);
    v17 = v33;
    if ( v33 < 0 )
    {
      WdLogSingleEntry1(4LL, v33);
      WdLogGlobalForLineNumber = 3368;
      v17 = 0;
    }
    WdLogSingleEntry1(4LL, v17);
    WdLogGlobalForLineNumber = 3372;
    return v17;
  }
  v41 = 0LL;
  v14 = DXGGLOBAL::GetGlobal();
  v15 = DXGGLOBAL::ReferenceAdapterByLuid(v14, *a2, &v41);
  v16 = v15;
  if ( !v15 )
  {
    v17 = -1073741811;
    WdLogSingleEntry3(2LL, a2->HighPart, a2->LowPart, -1073741811LL);
    v36 = a2->LowPart;
    v34 = a2->HighPart;
    WdLogGlobalForLineNumber = 3171;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to find adapter from LUID 0x%I64x%08I64x, returning 0x%I64x.",
      v34,
      v36,
      -1073741811LL,
      0LL,
      0LL);
    return v17;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, v15, 0LL);
  DXGADAPTER::ReleaseReference(v16);
  v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47, 0LL);
  v19 = v18;
  if ( v18 >= 0 )
  {
    v40[0] = 0;
    if ( DmmIsTargetInClientVidPnTopology(v16, v9, v40) >= 0 && !v40[0] )
      *(_BYTE *)(a1 + 26) = 0;
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v47);
    *(_BYTE *)(a1 + 25) = 0;
    v20 = DXGGLOBAL::GetGlobal();
    v21 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v20,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            a1,
            4);
    v12 = v21;
    if ( v21 >= 0 )
    {
      v12 = 0;
    }
    else
    {
      WdLogSingleEntry1(3LL, v21);
      WdLogGlobalForLineNumber = 3215;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
    return v12;
  }
  WdLogSingleEntry3(2LL, a2->HighPart, a2->LowPart, v18);
  v37 = a2->LowPart;
  v35 = a2->HighPart;
  WdLogGlobalForLineNumber = 3187;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to acquire adapter core access on adapter 0x%I64x%08I64x, NtStatus = 0x%I64x.",
    v35,
    v37,
    v19,
    0LL,
    0LL);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
  return (unsigned int)v19;
}
