/*
 * XREFs of ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x140307170
 * Callers:
 *     DxgkGetMonitorDisplayId @ 0x1401C6260 (DxgkGetMonitorDisplayId.c)
 *     DxgkGetMonitorEdid @ 0x140307140 (DxgkGetMonitorEdid.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1400406B0 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402E09E0 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402E1840 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402E1D74 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?MonitorGetDisplayIDFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z @ 0x140306B84 (-MonitorGetDisplayIDFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z.c)
 *     ?MonitorGetEdidFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z @ 0x140306C44 (-MonitorGetEdidFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x140307C80 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 */

__int64 __fastcall DxgkGetMonitorDescriptor(
        struct _LUID a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int8 *a6)
{
  char v6; // si
  DWORD LowPart; // edi
  __int64 v8; // rbx
  __int64 v9; // r14
  int v10; // r15d
  int v11; // eax
  __int64 v12; // r13
  DXGGLOBAL *Global; // rax
  DWORD v14; // ebx
  struct DXGADAPTER *v15; // rax
  DXGADAPTER *v16; // r13
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned int v30; // r14d
  __int64 v31; // rsi
  MONITOR_MGR *v32; // rbx
  int MonitorInstance; // eax
  struct DXGMONITOR *v34; // rbx
  struct HDXGMONITOR__ *MonitorHandle; // r15
  int EdidFromMonitor; // eax
  void *v37; // r8
  __int64 v38; // r9
  unsigned int v39; // ebx
  __int64 v40; // rcx
  __int64 v41; // r8
  bool v42; // zf
  bool v43; // zf
  unsigned int DisplayIDFromMonitor; // eax
  __int64 v45; // r14
  __int64 v46; // rbx
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 HighPart; // rdi
  __int64 v51; // r14
  __int64 v52; // rbx
  __int64 v53; // rsi
  char v54; // [rsp+50h] [rbp-B0h]
  int v55; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+60h] [rbp-A0h]
  char v57; // [rsp+68h] [rbp-98h]
  unsigned int v58; // [rsp+70h] [rbp-90h]
  unsigned int v59; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v60; // [rsp+78h] [rbp-88h]
  struct _LUID v61; // [rsp+80h] [rbp-80h] BYREF
  struct _LUID v62; // [rsp+88h] [rbp-78h] BYREF
  __int64 (__fastcall *v63)(struct _LUID, unsigned int, unsigned __int8, unsigned int, unsigned int *, unsigned __int8 *); // [rsp+90h] [rbp-70h] BYREF
  struct DXGMONITOR *v64; // [rsp+98h] [rbp-68h]
  unsigned __int8 *v65; // [rsp+A0h] [rbp-60h]
  unsigned int *v66; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v67; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v68[144]; // [rsp+C0h] [rbp-40h] BYREF

  v55 = -1;
  v6 = a3;
  LowPart = a1.LowPart;
  v66 = a5;
  v8 = a4;
  v9 = a2;
  v65 = a6;
  v60 = a4;
  v54 = a3;
  v58 = a2;
  v62 = a1;
  v56 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v57 = 1;
    v55 = 2187;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, (__int64)&EventProfilerEnter, a3, 2187);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v55, 2187);
  v61 = 0LL;
  v10 = -1073741811;
  v59 = 0;
  if ( v6 && (v8 & 0x7F) != 0 )
  {
    WdLogSingleEntry2(3LL, v8, 128LL);
    WdLogGlobalForLineNumber = 8332;
LABEL_34:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
    v42 = v57 == 0;
    goto LABEL_35;
  }
  v11 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v62, (unsigned int)v9, &v61, &v59);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v67 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    v14 = v61.LowPart;
    v15 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v61, &v67);
    v16 = v15;
    if ( !v15 )
    {
      HighPart = v61.HighPart;
      WdLogSingleEntry4(2LL, v61.HighPart, v14, -1073741811LL, 0LL);
      WdLogGlobalForLineNumber = 8365;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetMonitorDescriptor function, returning 0x%I64x.",
        HighPart,
        v14,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_34;
    }
    if ( !*((_QWORD *)v15 + 390) )
    {
      DXGADAPTER::ReleaseReference(v15);
      v26 = v61.HighPart;
      WdLogSingleEntry4(2LL, v61.HighPart, v14, -1073741811LL, 1LL);
      WdLogGlobalForLineNumber = 8375;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Caller specified adapter 0x%I64x%08I64x is not a display adapter, returning 0x%I64x",
        v26,
        v14,
        -1073741811LL,
        1LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
      if ( v57 )
      {
        v43 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_41:
        if ( !v43 )
          McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v55);
      }
      return (unsigned int)v10;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v68, v15, 0LL);
    DXGADAPTER::ReleaseReference(v16);
    v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v68, 0LL);
    v22 = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry3(3LL, v61.HighPart, v14, v17);
      WdLogGlobalForLineNumber = 8393;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
      if ( v57 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v55);
      }
      return v22;
    }
    v29 = WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
    v30 = v59;
    v31 = v59;
    *(_QWORD *)(v29 + 24) = v59;
    *(_QWORD *)(v29 + 32) = v16;
    WdLogGlobalForLineNumber = 2330;
    if ( v30 != -1 )
    {
      if ( !*((_QWORD *)v16 + 390) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2351;
      }
      v32 = *(MONITOR_MGR **)(*((_QWORD *)v16 + 390) + 112LL);
      if ( v32 )
      {
        v64 = 0LL;
        v63 = DxgkGetMonitorDescriptor;
        MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v63);
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v32, v30, 0, (struct MONITOR_REF_ACCESSOR *)&v63);
        v10 = MonitorInstance;
        if ( MonitorInstance == -1073741275 )
        {
          WdLogSingleEntry2(7LL, v31, v32);
          WdLogGlobalForLineNumber = 2376;
          MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v63);
          v10 = -1073741275;
        }
        else
        {
          if ( MonitorInstance >= 0 )
          {
            v34 = v64;
            if ( !v64 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2388;
            }
            v64 = 0LL;
            MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v34);
            MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v63);
            if ( !MonitorHandle )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 8418;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"MonitorHandle != NULL",
                8418LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( v54 )
            {
              EdidFromMonitor = MonitorGetEdidFromMonitor(MonitorHandle, v60, v66, v65);
              if ( EdidFromMonitor < 0 )
              {
                v51 = v58;
                v52 = v62.HighPart;
                v53 = EdidFromMonitor;
                WdLogSingleEntry5(2LL, v62.HighPart, LowPart, v58, EdidFromMonitor, 1LL);
                WdLogGlobalForLineNumber = 8434;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000LL,
                  0xFFFFFFFFLL,
                  L"Failed to get monitor EDID from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
                  v52,
                  LowPart,
                  v51,
                  v53,
                  1LL);
              }
              v39 = 0;
            }
            else
            {
              DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(MonitorHandle, v60, v66, v65);
              v39 = DisplayIDFromMonitor;
              if ( (int)(DisplayIDFromMonitor + 0x80000000) >= 0 && DisplayIDFromMonitor != -1073741789 )
              {
                WdLogSingleEntry4(3LL, v62.HighPart, LowPart, v58, (int)DisplayIDFromMonitor);
                WdLogGlobalForLineNumber = 8453;
              }
            }
            if ( (int)MonitorReleaseMonitorHandle(v16, MonitorHandle, v37, v38) < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 8463;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"NT_SUCCESS(Status2)",
                8463LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
            if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v40, (__int64)&EventProfilerExit, v41, v55);
            return v39;
          }
          WdLogSingleEntry2(2LL, v31, v32);
          WdLogGlobalForLineNumber = 2383;
          MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v63);
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v16);
        WdLogGlobalForLineNumber = 2361;
      }
    }
    v45 = v58;
    v46 = v62.HighPart;
    WdLogSingleEntry5(2LL, v62.HighPart, LowPart, v58, v10, 0LL);
    WdLogGlobalForLineNumber = 8414;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to get connected monitor from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
      v46,
      LowPart,
      v45,
      v10,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
    v42 = v57 == 0;
LABEL_35:
    if ( !v42 )
    {
      v43 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
      goto LABEL_41;
    }
    return (unsigned int)v10;
  }
  v47 = v62.HighPart;
  WdLogSingleEntry4(2LL, v62.HighPart, LowPart, v9, v11);
  WdLogGlobalForLineNumber = 8349;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to get adapter LUID from LUID (0x%I64x%08I64x), target ID 0x%I64x (Status = 0x%I64x).",
    v47,
    LowPart,
    v9,
    v12,
    0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v48, (__int64)&EventProfilerExit, v49, v55);
  return (unsigned int)v12;
}
