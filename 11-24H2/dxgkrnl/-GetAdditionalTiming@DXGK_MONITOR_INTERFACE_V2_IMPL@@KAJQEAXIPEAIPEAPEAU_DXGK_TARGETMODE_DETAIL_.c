/*
 * XREFs of ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1402E2C50
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1400107F0 (DpiGetDxgAdapter.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x140032BF8 (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402E1840 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402E1D74 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?_GetAdditionalTiming@MonitorModes@DxgMonitor@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1402E300C (-_GetAdditionalTiming@MonitorModes@DxgMonitor@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@.c)
 */

__int64 __fastcall DXGK_MONITOR_INTERFACE_V2_IMPL::GetAdditionalTiming(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a4)
{
  __int64 v5; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  DXGADAPTER *DxgAdapter; // rax
  DXGADAPTER *v14; // rdi
  __int64 v15; // rax
  MONITOR_MGR *v16; // rbx
  int MonitorInstance; // eax
  unsigned int AdditionalTiming; // edi
  __int64 v19; // rbx
  struct _ERESOURCE *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  void *v30; // [rsp+20h] [rbp-30h] BYREF
  __int64 v31; // [rsp+28h] [rbp-28h]
  int v32; // [rsp+30h] [rbp-20h] BYREF
  __int64 v33; // [rsp+38h] [rbp-18h]
  char v34; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+28h]

  v32 = -1;
  v5 = a2;
  v33 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 7059;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 7059);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 7059);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = a1;
  v12[4] = v5;
  v12[5] = a3;
  v12[6] = a4;
  WdLogGlobalForLineNumber = 2137;
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 2145;
    goto LABEL_20;
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 2152;
LABEL_20:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v32);
    return 3221225485LL;
  }
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  v14 = DxgAdapter;
  if ( DxgAdapter )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
    {
      v15 = *((_QWORD *)v14 + 390);
      if ( v15 )
      {
        v16 = *(MONITOR_MGR **)(v15 + 112);
        if ( v16 )
        {
          v30 = retaddr;
          v31 = 0LL;
          MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v30);
          MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v16, v5, 0, (struct MONITOR_REF_ACCESSOR *)&v30);
          AdditionalTiming = MonitorInstance;
          if ( MonitorInstance == -1073741275 )
          {
            WdLogSingleEntry2(7LL, v5, v16);
            WdLogGlobalForLineNumber = 2214;
            MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v30);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
            if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v32);
            return 3221226021LL;
          }
          else
          {
            if ( MonitorInstance < 0 )
            {
              WdLogSingleEntry2(2LL, v5, v16);
              WdLogGlobalForLineNumber = 2220;
            }
            else
            {
              v19 = v31;
              if ( !v31 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2225;
              }
              v20 = *(struct _ERESOURCE **)(v19 + 232);
              if ( v20 )
                MonitorResourceLock::AcquireExclusive(v20);
              AdditionalTiming = DxgMonitor::MonitorModes::_GetAdditionalTiming((DxgMonitor::MonitorModes *)v20, a3, a4);
              if ( v20 )
              {
                ExReleaseResourceLite(v20);
                KeLeaveCriticalRegion();
              }
            }
            MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v30);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
            if ( v34 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v32);
            }
            return AdditionalTiming;
          }
        }
        WdLogSingleEntry1(2LL, v14);
        WdLogGlobalForLineNumber = 2200;
      }
      else
      {
        WdLogSingleEntry1(2LL, a1);
        WdLogGlobalForLineNumber = 2187;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      WdLogGlobalForLineNumber = 2176;
    }
    goto LABEL_20;
  }
  WdLogSingleEntry1(2LL, a1);
  WdLogGlobalForLineNumber = 2165;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v32);
  return 3223191554LL;
}
