/*
 * XREFs of ?GetNumDescriptors@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEA_K@Z @ 0x1403ECD60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140032C94 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ?GetNumMonitorDescriptors@MonitorDescriptorState@DxgMonitor@@QEBAIXZ @ 0x140188E88 (-GetNumMonitorDescriptors@MonitorDescriptorState@DxgMonitor@@QEBAIXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 */

__int64 __fastcall DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL::GetNumDescriptors(
        struct D3DKMDT_HMONITORDESCRIPTORSET__ *const a1,
        unsigned __int64 *const a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _ERESOURCE *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  void *v18; // [rsp+20h] [rbp-30h] BYREF
  struct D3DKMDT_HMONITORDESCRIPTORSET__ *v19; // [rsp+28h] [rbp-28h]
  int v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h]
  char v22; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+58h] [rbp+8h]

  v20 = -1;
  v21 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 7027;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 7027);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 7027);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = a2;
  WdLogGlobalForLineNumber = 1231;
  if ( a2 )
  {
    *a2 = 0LL;
    v19 = 0LL;
    v18 = retaddr;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v18);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v18);
    if ( a1 )
    {
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v18);
      v19 = a1;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v18);
      v13 = (struct _ERESOURCE *)*((_QWORD *)a1 + 27);
      if ( v13 )
        MonitorResourceLock::AcquireShared(v13);
      *a2 = (unsigned int)DxgMonitor::MonitorDescriptorState::GetNumMonitorDescriptors((DxgMonitor::MonitorDescriptorState *)v13);
      if ( v13 )
      {
        ExReleaseResourceLite(v13);
        KeLeaveCriticalRegion();
      }
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v18);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v20);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, 0LL);
      WdLogGlobalForLineNumber = 1259;
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v18);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v20);
      return 3223192362LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, a1);
    WdLogGlobalForLineNumber = 1243;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v20);
    }
    return 3221225485LL;
  }
}
