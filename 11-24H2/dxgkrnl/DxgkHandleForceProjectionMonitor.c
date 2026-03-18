/*
 * XREFs of DxgkHandleForceProjectionMonitor @ 0x1401C6560
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F84C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026D7CC (-MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2.c)
 *     ?MonitorDestroySimulatedMonitor@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DB84 (-MonitorDestroySimulatedMonitor@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x140296878 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402E06D8 (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402E09E0 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402E2950 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     DxgkInvalidateMonitorConnections @ 0x14038E2E0 (DxgkInvalidateMonitorConnections.c)
 *     ?MonitorGetMonitorType@@YAJPEAUHDXGMONITOR__@@PEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403A9710 (-MonitorGetMonitorType@@YAJPEAUHDXGMONITOR__@@PEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkHandleForceProjectionMonitor(struct _LUID a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r13
  unsigned int v11; // eax
  unsigned int v12; // r12d
  unsigned int v13; // r15d
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v15; // rax
  DXGADAPTER *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  bool v19; // zf
  unsigned int v20; // r8d
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  int IsTargetForceable; // eax
  signed int v25; // esi
  int MonitorHandle; // eax
  struct HDXGMONITOR__ *v27; // r13
  int MonitorType; // eax
  void *v29; // r8
  int SimulatedMonitor; // eax
  int v31; // eax
  char v33[4]; // [rsp+50h] [rbp-B0h] BYREF
  signed int v34; // [rsp+54h] [rbp-ACh] BYREF
  int v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h]
  char v37; // [rsp+68h] [rbp-98h]
  unsigned int v38; // [rsp+70h] [rbp-90h]
  struct HDXGMONITOR__ *v39; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v40; // [rsp+80h] [rbp-80h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v41; // [rsp+88h] [rbp-78h]
  unsigned __int64 v42; // [rsp+98h] [rbp-68h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-60h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v44[3]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v45[144]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = a2;
  v5 = a4;
  v7 = a3;
  v39 = (struct HDXGMONITOR__ *)a1;
  v38 = a2;
  LOBYTE(v44[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v44, 0LL, 0x29u, 0);
  v35 = -1;
  v41 = v44[1];
  v36 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2179;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerEnter, v9, 2179);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2179);
  v10 = v4;
  v43 = v4;
  WdLogSingleEntry5(4LL, v7, v4, v5, SHIDWORD(v39), a1.LowPart);
  WdLogGlobalForLineNumber = 1977;
  v11 = (unsigned int)v7 >> 31;
  v12 = v7 & 0x7FFFFFFF;
  v40 = v11;
  if ( v12 > 2 )
  {
    WdLogSingleEntry1(2LL, v12);
    WdLogGlobalForLineNumber = 1987;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified an invalid force projection monitor action %I64u.",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_55:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    v19 = v37 == 0;
LABEL_56:
    if ( !v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v35);
    LODWORD(v21) = -1073741811;
    goto LABEL_60;
  }
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 )
    {
      v13 = 3;
    }
    else
    {
      if ( (_DWORD)v5 != 2 )
      {
        WdLogSingleEntry1(2LL, v5);
        WdLogGlobalForLineNumber = 2001;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Caller specified an invalid force projection monitor type %I64u.",
          v5,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_55;
      }
      v13 = 4;
    }
  }
  else
  {
    v13 = 2;
  }
  v42 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v15 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v42);
  v16 = v15;
  if ( !v15 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2015;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    v19 = v37 == 0;
    goto LABEL_56;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, v15, 0LL);
  v21 = (int)COREADAPTERACCESS::AcquireExclusive((__int64)v45, v20 + 1, v20);
  DXGADAPTER::ReleaseReference(v16);
  if ( (int)v21 >= 0 )
  {
    v33[0] = 0;
    IsTargetForceable = DmmIsTargetForceable(v16, (unsigned int)v4, v33, 0LL);
    LODWORD(v21) = IsTargetForceable;
    if ( IsTargetForceable >= 0 && !v33[0] )
    {
      WdLogSingleEntry2(4LL, v4, v16);
      v34 = 0;
      LODWORD(v21) = -1073741811;
      WdLogGlobalForLineNumber = 2046;
LABEL_51:
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v45);
      if ( (_BYTE)v40 )
      {
        v31 = DxgkInvalidateMonitorConnections(1uLL);
        if ( v31 < 0 )
        {
          WdLogSingleEntry1(3LL, v31);
          WdLogGlobalForLineNumber = 2170;
        }
      }
      goto LABEL_17;
    }
    v25 = 0;
    v34 = 0;
    if ( IsTargetForceable < 0 )
      goto LABEL_51;
    v39 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(v16, v4, 0, DxgkHandleForceProjectionMonitor, &v39);
    LODWORD(v21) = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      if ( MonitorHandle != -1073741275 )
        goto LABEL_51;
      LODWORD(v21) = 0;
      if ( v39 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2082;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"hOldMonitor == NULL", 2082LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v27 = v39;
      MonitorType = MonitorGetMonitorType(v39, (enum _DMM_VIDPN_MONITOR_TYPE *)&v34);
      v25 = v34;
      LODWORD(v21) = MonitorType;
      if ( MonitorType >= 0 && !v34 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2071;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"(!NT_SUCCESS(ntStatus)) || (OldMonitorType != DMM_VMT_UNINITIALIZED)",
          2071LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)MonitorReleaseMonitorHandle(v16, v27, v29) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2076;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(_ntStatus)", 2076LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (int)v21 < 0 )
        goto LABEL_51;
      v10 = v43;
    }
    if ( v12 == 2 )
      goto LABEL_51;
    if ( !v12 )
    {
      if ( v25 && (v25 != 1 || v13 == 4) && v25 != 5 && (int)v13 >= v25 )
      {
        WdLogSingleEntry2(2LL, v13, v25);
        WdLogGlobalForLineNumber = 2129;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"The new force porjection monitor type %I64u has lower priority than old one %I64u.\n",
          v13,
          v25,
          0LL,
          0LL,
          0LL);
        goto LABEL_51;
      }
      SimulatedMonitor = MonitorCreateSimulatedMonitor(v16, v38, v13);
LABEL_50:
      LODWORD(v21) = SimulatedMonitor;
      goto LABEL_51;
    }
    if ( v25 )
    {
      if ( v13 == v25 )
      {
        SimulatedMonitor = MonitorDestroySimulatedMonitor(v16, v38, v41);
        goto LABEL_50;
      }
      WdLogSingleEntry2(3LL, v13, v25);
      WdLogGlobalForLineNumber = 2146;
    }
    else
    {
      WdLogSingleEntry1(2LL, v10);
      WdLogGlobalForLineNumber = 2138;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Caller specified traget %I64u does not have any monitor connected.\n",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    LODWORD(v21) = -1073741811;
    goto LABEL_51;
  }
  WdLogSingleEntry2(3LL, v16, v21);
  WdLogGlobalForLineNumber = 2030;
LABEL_17:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v35);
LABEL_60:
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v44);
  return (unsigned int)v21;
}
