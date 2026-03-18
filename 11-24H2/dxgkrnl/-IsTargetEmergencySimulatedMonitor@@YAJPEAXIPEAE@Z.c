/*
 * XREFs of ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1403DC5B4
 * Callers:
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x14030F03C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1403DC428 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 * Callees:
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1400406B0 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402E09E0 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402E1840 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402E1D74 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 */

__int64 __fastcall IsTargetEmergencySimulatedMonitor(_QWORD *a1, __int64 a2, bool *a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  MONITOR_MGR *v9; // rbx
  int MonitorInstance; // eax
  unsigned int v11; // edi
  unsigned int v12; // r15d
  struct DXGMONITOR *v13; // rbx
  struct HDXGMONITOR__ *MonitorHandle; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // r8
  __int64 v20; // r9
  int v21; // ebx
  struct DXGMONITOR *v23[2]; // [rsp+20h] [rbp-20h] BYREF
  void *v24; // [rsp+30h] [rbp-10h] BYREF
  struct HDXGMONITOR__ *v25; // [rsp+38h] [rbp-8h]
  void *retaddr; // [rsp+68h] [rbp+28h]

  v5 = (unsigned int)a2;
  *a3 = 0;
  v7 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v8 = (unsigned int)v5;
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = a1;
  WdLogGlobalForLineNumber = 2330;
  if ( !a1 || (_DWORD)v5 == -1 )
    return (unsigned int)-1073741811;
  if ( !a1[390] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2351;
  }
  v9 = *(MONITOR_MGR **)(a1[390] + 112LL);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 2361;
    return (unsigned int)-1073741811;
  }
  *(__m128i *)v23 = _mm_load_si128((const __m128i *)&_xmm);
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v23);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v9, v5, 0, (struct MONITOR_REF_ACCESSOR *)v23);
  v11 = -1073741275;
  v12 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    WdLogSingleEntry2(7LL, v8, v9);
    WdLogGlobalForLineNumber = 2376;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v23);
  }
  else if ( MonitorInstance < 0 )
  {
    WdLogSingleEntry2(2LL, v8, v9);
    WdLogGlobalForLineNumber = 2383;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v23);
    return v12;
  }
  else
  {
    v13 = v23[1];
    if ( !v23[1] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2388;
    }
    v23[1] = 0LL;
    MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v13);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v23);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v17, v18) + 24) = MonitorHandle;
    WdLogGlobalForLineNumber = 2504;
    if ( MonitorHandle )
    {
      v25 = 0LL;
      v24 = retaddr;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v24);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v24);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v24);
      v25 = MonitorHandle;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v24);
      v21 = *((_DWORD *)MonitorHandle + 70);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v24);
      v11 = 0;
      *a3 = v21 == 5;
    }
    else
    {
      v11 = -1073741811;
    }
    MonitorReleaseMonitorHandle(a1, MonitorHandle, v19, v20);
  }
  return v11;
}
