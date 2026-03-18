/*
 * XREFs of ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x140269DC0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DpiGetDxgAdapter @ 0x140016C90 (DpiGetDxgAdapter.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402CA140 (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        __int64 a1,
        unsigned int a2,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a3,
        const struct _DXGK_MONITORSOURCEMODESET_INTERFACE **a4)
{
  __int64 v5; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  DXGADAPTER *DxgAdapter; // rax
  DXGADAPTER *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r8
  int MonitorHandle; // eax
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  struct HDXGMONITOR__ *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // [rsp+30h] [rbp-20h] BYREF
  __int64 v30; // [rsp+38h] [rbp-18h]
  char v31; // [rsp+40h] [rbp-10h]
  struct HDXGMONITOR__ *v32; // [rsp+80h] [rbp+30h] BYREF

  v29 = -1;
  v5 = a2;
  v30 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 7052;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 7052);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 7052);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = a1;
  v12[4] = v5;
  v12[5] = a3;
  v12[6] = a4;
  WdLogGlobalForLineNumber = 1598;
  if ( !a3 )
  {
    WdLogSingleEntry2(2LL, 0LL, a1);
    WdLogGlobalForLineNumber = 1606;
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v29);
    }
    return 3221225485LL;
  }
  *a3 = 0LL;
  if ( !a4 )
  {
    WdLogSingleEntry2(2LL, 0LL, a1);
    WdLogGlobalForLineNumber = 1615;
    goto LABEL_9;
  }
  *a4 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v17 = DxgAdapter;
  if ( !DxgAdapter )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 1630;
    goto LABEL_19;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1641;
  }
  if ( !*((_QWORD *)v17 + 390) )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 1649;
LABEL_19:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v29);
    return 3223191554LL;
  }
  v32 = 0LL;
  MonitorHandle = MonitorGetMonitorHandle(
                    v17,
                    v5,
                    1u,
                    DXGK_MONITOR_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet,
                    &v32);
  v21 = MonitorHandle;
  if ( MonitorHandle == -1073741275 )
  {
    WdLogSingleEntry1(3LL, v5);
    WdLogGlobalForLineNumber = 1669;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v29);
    return 3223192376LL;
  }
  else if ( MonitorHandle >= 0 )
  {
    v26 = v32;
    if ( !v32 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1680;
    }
    *a3 = (struct D3DKMDT_HMONITORSOURCEMODESET__ *)v26;
    *a4 = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v29);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, v5, MonitorHandle);
    WdLogGlobalForLineNumber = 1675;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v29);
    return v21;
  }
}
