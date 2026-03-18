/*
 * XREFs of ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x14026B470
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DpiGetDxgAdapter @ 0x140016C90 (DpiGetDxgAdapter.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032CC8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035818 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ??1?$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ @ 0x1400508E0 (--1-$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::ReleaseAdditionalTiming(
        __int64 a1,
        unsigned int a2,
        const struct _DXGK_TARGETMODE_DETAIL_TIMING *a3)
{
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  DXGADAPTER *DxgAdapter; // rax
  DXGADAPTER *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  MONITOR_MGR *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  int MonitorInstance; // edi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  _BYTE v30[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v31; // [rsp+28h] [rbp-28h]
  int v32; // [rsp+30h] [rbp-20h] BYREF
  __int64 v33; // [rsp+38h] [rbp-18h]
  char v34; // [rsp+40h] [rbp-10h]
  struct _ERESOURCE *v35; // [rsp+70h] [rbp+20h] BYREF

  v32 = -1;
  v33 = 0LL;
  v5 = a2;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 7060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 7060);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 7060);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v10[3] = a3;
  v10[4] = a1;
  v10[5] = v5;
  WdLogGlobalForLineNumber = 2272;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 2280;
LABEL_18:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v32);
    }
    return 3221225485LL;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v12 = DxgAdapter;
  if ( DxgAdapter )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 2304;
      goto LABEL_18;
    }
    v16 = *((_QWORD *)v12 + 390);
    if ( !v16 )
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 2315;
      goto LABEL_18;
    }
    v17 = *(MONITOR_MGR **)(v16 + 112);
    if ( !v17 )
    {
      WdLogSingleEntry1(2LL, v12);
      WdLogGlobalForLineNumber = 2328;
      goto LABEL_18;
    }
    MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v30, 0LL);
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v17, v5, 0, (struct MONITOR_REF_ACCESSOR *)v30);
    if ( MonitorInstance == -1073741275 )
    {
      WdLogSingleEntry2(7LL, v5, v17);
      WdLogGlobalForLineNumber = 2342;
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v30);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
      if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v32);
      return 3221226021LL;
    }
    else if ( MonitorInstance >= 0 )
    {
      v25 = v31;
      if ( !v31 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2353;
      }
      v26 = *(_QWORD *)(v25 + 232);
      v35 = (struct _ERESOURCE *)v26;
      if ( v26 )
        MonitorResourceLock::AcquireExclusive((PERESOURCE)v26);
      v27 = *(_DWORD *)(v26 + 224);
      if ( v27 )
      {
        *(_DWORD *)(v26 + 224) = v27 - 1;
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1119;
      }
      RESOURCE_LOCK<DxgMonitor::MonitorModes>::~RESOURCE_LOCK<DxgMonitor::MonitorModes>(&v35);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v30);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
      if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v32);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry2(2LL, v5, v17);
      WdLogGlobalForLineNumber = 2348;
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v30);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
      if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit, v24, v32);
      return (unsigned int)MonitorInstance;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 2293;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v32);
    return 3223191554LL;
  }
}
