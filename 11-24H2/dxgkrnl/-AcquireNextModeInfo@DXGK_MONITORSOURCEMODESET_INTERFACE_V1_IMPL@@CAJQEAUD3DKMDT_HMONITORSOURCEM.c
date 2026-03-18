/*
 * XREFs of ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1403C0790
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032BF8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402E1D74 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1403C0A14 (-_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@P.c)
 */

__int64 __fastcall DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        struct D3DKMDT_HMONITORSOURCEMODESET__ *const a1,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _ERESOURCE *v16; // rbx
  unsigned int NextMonitorModeEnumerator; // esi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  void *v22; // [rsp+20h] [rbp-30h] BYREF
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v23; // [rsp+28h] [rbp-28h]
  int v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h]
  char v26; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+58h] [rbp+8h]

  v24 = -1;
  v25 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 7019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 7019);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 7019);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v10[3] = a2;
  v10[4] = a1;
  v10[5] = a3;
  WdLogGlobalForLineNumber = 494;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a2 )
    {
      v23 = 0LL;
      v22 = retaddr;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v22);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v22);
      if ( a1 )
      {
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v22);
        v23 = a1;
        MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v22);
        v16 = (struct _ERESOURCE *)*((_QWORD *)a1 + 29);
        if ( v16 )
          MonitorResourceLock::AcquireExclusive(v16);
        NextMonitorModeEnumerator = DxgMonitor::MonitorModes::_GetNextMonitorModeEnumerator(
                                      (DxgMonitor::MonitorModes *)v16,
                                      a2,
                                      a3);
        if ( !NextMonitorModeEnumerator && !*a3 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 550;
        }
        if ( v16 )
        {
          ExReleaseResourceLite(v16);
          KeLeaveCriticalRegion();
        }
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v22);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
        if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v24);
        return NextMonitorModeEnumerator;
      }
      else
      {
        WdLogSingleEntry1(2LL, 0LL);
        WdLogGlobalForLineNumber = 532;
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v22);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
        if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v24);
        return 3223192353LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, 0LL);
      WdLogGlobalForLineNumber = 516;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
      if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v24);
      return 3223192354LL;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, a1);
    WdLogGlobalForLineNumber = 507;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v24);
    }
    return 3221225485LL;
  }
}
