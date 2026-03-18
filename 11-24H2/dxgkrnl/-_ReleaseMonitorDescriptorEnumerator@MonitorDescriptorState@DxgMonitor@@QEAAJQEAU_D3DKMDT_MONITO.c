/*
 * XREFs of ?_ReleaseMonitorDescriptorEnumerator@MonitorDescriptorState@DxgMonitor@@QEAAJQEAU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1403DD348
 * Callers:
 *     ?ReleaseDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1403DD140 (-ReleaseDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCR.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::_ReleaseMonitorDescriptorEnumerator(
        DxgMonitor::MonitorDescriptorState *this,
        struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2)
{
  __int64 result; // rax
  DxgMonitor::MonitorDescriptorState *v5; // rdx
  DxgMonitor::MonitorDescriptorState *v6; // rax
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v7; // rcx
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v8; // rdx
  struct _D3DKMDT_MONITOR_DESCRIPTOR **DataSize; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1955;
LABEL_3:
    WdLogSingleEntry2(2LL, a2, this);
    result = 3223192368LL;
    WdLogGlobalForLineNumber = 1970;
    return result;
  }
  v5 = (DxgMonitor::MonitorDescriptorState *)((char *)this + 168);
  v6 = (DxgMonitor::MonitorDescriptorState *)*((_QWORD *)this + 21);
  if ( v6 == (DxgMonitor::MonitorDescriptorState *)((char *)this + 168) )
    goto LABEL_3;
  v7 = a2 + 1;
  while ( v6 != (DxgMonitor::MonitorDescriptorState *)v7 )
  {
    if ( v5 == v6 )
      goto LABEL_3;
    v6 = *(DxgMonitor::MonitorDescriptorState **)v6;
  }
  v8 = *(struct _D3DKMDT_MONITOR_DESCRIPTOR **)&v7->Id;
  if ( *(struct _D3DKMDT_MONITOR_DESCRIPTOR **)(*(_QWORD *)&v7->Id + 8LL) != v7
    || (DataSize = (struct _D3DKMDT_MONITOR_DESCRIPTOR **)a2[1].DataSize, *DataSize != v7) )
  {
    __fastfail(3u);
  }
  *DataSize = v8;
  v8->DataSize = (SIZE_T)DataSize;
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2);
  return 0LL;
}
