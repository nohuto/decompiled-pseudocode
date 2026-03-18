/*
 * XREFs of ?_GetFirstMonitorFreqRangeEnumerator@MonitorModes@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x140273644
 * Callers:
 *     ?AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x140269980 (-AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_GetFirstMonitorFreqRangeEnumerator(
        DxgMonitor::MonitorModes *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  DxgMonitor::MonitorModes *v7; // rcx
  _OWORD *v8; // rbx
  __int64 v9; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v10; // rcx
  char *v11; // rdi
  __int128 v12; // xmm0
  char **v13; // rdx
  char *v14; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2646;
  }
  if ( !*((_DWORD *)this + 42) )
  {
    WdLogSingleEntry1(7LL, this);
    result = 1075708747LL;
    WdLogGlobalForLineNumber = 2654;
    return result;
  }
  v7 = (DxgMonitor::MonitorModes *)*((_QWORD *)this + 22);
  if ( v7 == (DxgMonitor::MonitorModes *)((char *)this + 176) )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = (_OWORD *)((char *)v7 - 48);
    if ( !v7 )
      v8 = 0LL;
    if ( v8 )
      goto LABEL_11;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 2661;
LABEL_11:
  v9 = operator new(0x48uLL, 0x4D677844u, 256LL, a4);
  v10 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v9;
  if ( v9 )
  {
    v11 = (char *)this + 192;
    *(_OWORD *)v9 = *v8;
    *(_OWORD *)(v9 + 16) = v8[1];
    v12 = v8[2];
    *(_QWORD *)(v9 + 64) = v8;
    *(_OWORD *)(v9 + 32) = v12;
    v13 = (char **)*((_QWORD *)v11 + 1);
    v14 = (char *)(v9 + 48);
    if ( *v13 != v11 )
      __fastfail(3u);
    *(_QWORD *)v14 = v11;
    *((_QWORD *)v14 + 1) = v13;
    *v13 = v14;
    *((_QWORD *)v11 + 1) = v14;
    result = 0LL;
    *a2 = v10;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 2671;
  }
  return result;
}
