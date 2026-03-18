/*
 * XREFs of ?AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1403DBD40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032BF8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402E1D74 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?_GetNextMonitorDescriptorEnumerator@MonitorDescriptorState@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1403DBF6C (-_GetNextMonitorDescriptorEnumerator@MonitorDescriptorState@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITO.c)
 */

__int64 __fastcall DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::AcquireNextDescriptorInfo(
        struct D3DKMDT_HMONITORDESCRIPTORSET__ *const a1,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _ERESOURCE *v14; // rbx
  unsigned int NextMonitorDescriptorEnumerator; // edi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  void *v20; // [rsp+20h] [rbp-30h] BYREF
  struct D3DKMDT_HMONITORDESCRIPTORSET__ *v21; // [rsp+28h] [rbp-28h]
  int v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h]
  char v24; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+58h] [rbp+8h]

  v22 = -1;
  v23 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 7029;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 7029);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 7029);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v10[3] = a1;
  v10[4] = a2;
  v10[5] = a3;
  WdLogGlobalForLineNumber = 1407;
  if ( a3 )
  {
    *a3 = 0LL;
    v21 = 0LL;
    v20 = retaddr;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v20);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v20);
    if ( a1 )
    {
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v20);
      v21 = a1;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v20);
      v14 = (struct _ERESOURCE *)*((_QWORD *)a1 + 27);
      if ( v14 )
        MonitorResourceLock::AcquireExclusive(v14);
      NextMonitorDescriptorEnumerator = DxgMonitor::MonitorDescriptorState::_GetNextMonitorDescriptorEnumerator(
                                          (DxgMonitor::MonitorDescriptorState *)v14,
                                          a2,
                                          a3);
      if ( v14 )
      {
        ExReleaseResourceLite(v14);
        KeLeaveCriticalRegion();
      }
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v20);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
      if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v22);
      return NextMonitorDescriptorEnumerator;
    }
    else
    {
      WdLogSingleEntry1(2LL, 0LL);
      WdLogGlobalForLineNumber = 1436;
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v20);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
      if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v22);
      return 3223192362LL;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, a1);
    WdLogGlobalForLineNumber = 1420;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v22);
    }
    return 3221225485LL;
  }
}
