/*
 * XREFs of ?_ReleaseMonitorFreqRangeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x14027396C
 * Callers:
 *     ?ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x14026B7E0 (-ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONI.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_ReleaseMonitorFreqRangeEnumerator(
        DxgMonitor::MonitorModes *this,
        struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2)
{
  __int64 result; // rax
  DxgMonitor::MonitorModes *v5; // rdx
  DxgMonitor::MonitorModes *v6; // rax
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v7; // rcx
  __int64 v8; // r8
  _QWORD **v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // r8
  __int64 v12; // rdx
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **v13; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2818;
LABEL_3:
    WdLogSingleEntry2(2LL, a2, this);
    result = 3223192368LL;
    WdLogGlobalForLineNumber = 2834;
    return result;
  }
  v5 = (DxgMonitor::MonitorModes *)((char *)this + 192);
  v6 = (DxgMonitor::MonitorModes *)*((_QWORD *)this + 24);
  if ( v6 == (DxgMonitor::MonitorModes *)((char *)this + 192) )
    goto LABEL_3;
  v7 = a2 + 1;
  while ( v6 != (DxgMonitor::MonitorModes *)v7 )
  {
    if ( v5 == v6 )
      goto LABEL_3;
    v6 = *(DxgMonitor::MonitorModes **)v6;
  }
  v8 = *(_QWORD *)&a2[1].RangeLimits.MaxVSyncFreq.Denominator;
  v9 = (_QWORD **)((char *)this + 176);
  if ( !v8 )
    goto LABEL_3;
  v10 = *v9;
  if ( *v9 == v9 )
    goto LABEL_3;
  v11 = (_QWORD *)(v8 + 48);
  while ( v10 != v11 )
  {
    if ( v9 == v10 )
      goto LABEL_3;
    v10 = (_QWORD *)*v10;
  }
  v12 = *(_QWORD *)&v7->Origin;
  if ( *(struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)(*(_QWORD *)&v7->Origin + 8LL) != v7
    || (v13 = *(struct _D3DKMDT_MONITOR_FREQUENCY_RANGE ***)&a2[1].RangeLimits.MinVSyncFreq.Denominator, *v13 != v7) )
  {
    __fastfail(3u);
  }
  *v13 = (struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v12;
  *(_QWORD *)(v12 + 8) = v13;
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2);
  return 0LL;
}
