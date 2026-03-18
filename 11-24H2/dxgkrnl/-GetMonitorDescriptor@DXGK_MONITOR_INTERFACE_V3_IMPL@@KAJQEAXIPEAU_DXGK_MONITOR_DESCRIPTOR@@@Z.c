/*
 * XREFs of ?GetMonitorDescriptor@DXGK_MONITOR_INTERFACE_V3_IMPL@@KAJQEAXIPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z @ 0x140271660
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1400107F0 (DpiGetDxgAdapter.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMonitor@@_N@Z @ 0x140032B8C (--0-$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMoni.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035774 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ??1?$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ @ 0x140050354 (--1-$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ.c)
 *     ?GetMonitorDescriptor@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z @ 0x14027967C (-GetMonitorDescriptor@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402E1840 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V3_IMPL::GetMonitorDescriptor(
        __int64 a1,
        unsigned int a2,
        struct _DXGK_MONITOR_DESCRIPTOR *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  DXGADAPTER *DxgAdapter; // rax
  DXGADAPTER *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  int MonitorInstance; // eax
  unsigned int MonitorDescriptor; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  _BYTE v20[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+28h] [rbp-28h]
  int v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h]
  char v24; // [rsp+40h] [rbp-10h]
  DxgMonitor::MonitorDescriptorState *v25; // [rsp+80h] [rbp+30h] BYREF

  v22 = -1;
  v23 = 0LL;
  v5 = a2;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 7064;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 7064);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 7064);
  if ( !a3 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2394;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit, v7, v22);
    }
    return 3221225485LL;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v10 = DxgAdapter;
  if ( !DxgAdapter )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 2401;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2404;
  }
  if ( !*((_QWORD *)v10 + 390) )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 2411;
LABEL_16:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v22);
    return 3223191554LL;
  }
  MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v20, 0LL);
  if ( *((_QWORD *)v10 + 390) == v13 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2416;
  }
  if ( !*(_QWORD *)(*((_QWORD *)v10 + 390) + 112LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2417;
  }
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(
                      *(MONITOR_MGR **)(*((_QWORD *)v10 + 390) + 112LL),
                      v5,
                      1u,
                      (struct MONITOR_REF_ACCESSOR *)v20);
  MonitorDescriptor = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    WdLogSingleEntry1(3LL, v5);
    WdLogGlobalForLineNumber = 2421;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v20);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v22);
    return 3223192376LL;
  }
  else
  {
    if ( MonitorInstance >= 0 )
    {
      RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
        (struct _ERESOURCE **)&v25,
        *(struct _ERESOURCE **)(v21 + 216),
        0);
      MonitorDescriptor = DxgMonitor::MonitorDescriptorState::GetMonitorDescriptor(v25, a3);
      RESOURCE_LOCK<DxgMonitor::MonitorModes>::~RESOURCE_LOCK<DxgMonitor::MonitorModes>((struct _ERESOURCE **)&v25);
    }
    else
    {
      WdLogSingleEntry2(2LL, v5, MonitorInstance);
      WdLogGlobalForLineNumber = 2426;
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v20);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v22);
    return MonitorDescriptor;
  }
}
