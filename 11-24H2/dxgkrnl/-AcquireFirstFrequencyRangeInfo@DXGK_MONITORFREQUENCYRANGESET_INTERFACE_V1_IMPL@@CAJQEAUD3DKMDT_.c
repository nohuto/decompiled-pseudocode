/*
 * XREFs of ?AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1402708E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032BF8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035774 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@AEAVMONITOR_REF_ACCESSOR@@@Z @ 0x140037574 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@AEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ??1?$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ @ 0x140050354 (--1-$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ.c)
 *     ?_GetFirstMonitorFreqRangeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x14027A83C (-_GetFirstMonitorFreqRangeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_FREQU.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL::AcquireFirstFrequencyRangeInfo(
        struct D3DKMDT_HMONITORFREQUENCYRANGESET__ *const a1,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int MonitorFromHandle; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  struct _ERESOURCE *v17; // rbx
  unsigned int FirstMonitorFreqRangeEnumerator; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  _BYTE v21[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+28h] [rbp-28h]
  int v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h]
  char v25; // [rsp+40h] [rbp-10h]
  struct _ERESOURCE *v26; // [rsp+60h] [rbp+10h] BYREF

  v23 = -1;
  v24 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 7024;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 7024);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 7024);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = a2;
  WdLogGlobalForLineNumber = 964;
  if ( a2 )
  {
    *a2 = 0LL;
    MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v21, 0LL);
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(
                          (struct HDXGMONITOR__ *)a1,
                          (struct MONITOR_REF_ACCESSOR *)v21);
    if ( MonitorFromHandle == -1073741816 )
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 992;
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v21);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
      if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v23);
      return 3223192347LL;
    }
    else
    {
      if ( MonitorFromHandle < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1003;
      }
      v16 = v22;
      if ( !v22 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1004;
      }
      v17 = *(struct _ERESOURCE **)(v16 + 232);
      v26 = v17;
      if ( v17 )
        MonitorResourceLock::AcquireExclusive(v17);
      FirstMonitorFreqRangeEnumerator = DxgMonitor::MonitorModes::_GetFirstMonitorFreqRangeEnumerator(
                                          (DxgMonitor::MonitorModes *)v17,
                                          a2);
      if ( !FirstMonitorFreqRangeEnumerator && !*a2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1010;
      }
      RESOURCE_LOCK<DxgMonitor::MonitorModes>::~RESOURCE_LOCK<DxgMonitor::MonitorModes>(&v26);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v21);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
      if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v23);
      return FirstMonitorFreqRangeEnumerator;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, a1);
    WdLogGlobalForLineNumber = 976;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v23);
    }
    return 3221225485LL;
  }
}
