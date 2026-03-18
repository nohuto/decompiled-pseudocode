/*
 * XREFs of ?_CreateMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEBUDMMMONITORSOURCEMODE@12@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403CDAD0
 * Callers:
 *     ?_AcquireFirstModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1402734C4 (-_AcquireFirstModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?_AcquirePreferredModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1402735B4 (-_AcquirePreferredModeInfo@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1403CD724 (-_GetNextMonitorModeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@P.c)
 *     ?CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403CD890 (-CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMOD.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_CreateMonitorModeEnumerator(
        DxgMonitor::MonitorModes *this,
        const struct DxgMonitor::MonitorModes::DMMMONITORSOURCEMODE *a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  int v10; // ecx
  DxgMonitor::MonitorModes **v11; // r8
  DxgMonitor::MonitorModes *v12; // rax

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2109;
  }
  v7 = operator new(0x78uLL, 0x4D677844u, 256LL, a4);
  v8 = v7;
  if ( v7 )
  {
    if ( a2 )
    {
      *(_OWORD *)v7 = *(_OWORD *)a2;
      *(_OWORD *)(v7 + 16) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v7 + 32) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v7 + 48) = *((_OWORD *)a2 + 3);
      *(_OWORD *)(v7 + 64) = *((_OWORD *)a2 + 4);
      *(_OWORD *)(v7 + 80) = *((_OWORD *)a2 + 5);
    }
    else
    {
      v10 = *((_DWORD *)this + 31);
      *((_DWORD *)this + 31) = v10 + 1;
      *(_DWORD *)(v7 + 88) = 0;
      *(_DWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 12) = -1LL;
      *(_QWORD *)(v7 + 20) = -1LL;
      *(_QWORD *)(v7 + 28) = -1LL;
      *(_QWORD *)(v7 + 48) = 0xFFFFFFFFLL;
      *(_DWORD *)v7 = v10;
      *(_DWORD *)(v7 + 56) = 8;
    }
    *(_QWORD *)(v7 + 112) = a2;
    v11 = (DxgMonitor::MonitorModes **)*((_QWORD *)this + 20);
    v12 = (DxgMonitor::MonitorModes *)(v7 + 96);
    if ( *v11 != (DxgMonitor::MonitorModes *)((char *)this + 152) )
      __fastfail(3u);
    *(_QWORD *)v12 = (char *)this + 152;
    *(_QWORD *)(v8 + 104) = v11;
    *v11 = v12;
    *((_QWORD *)this + 20) = v12;
    result = 0LL;
    *a3 = (struct _D3DKMDT_MONITOR_SOURCE_MODE *)v8;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 2119;
  }
  return result;
}
