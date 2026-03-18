/*
 * XREFs of ?_CleanupMonitorDescriptors@MonitorDescriptorState@DxgMonitor@@AEAAJXZ @ 0x140189698
 * Callers:
 *     ??1MonitorDescriptorState@DxgMonitor@@QEAA@XZ @ 0x1403F9080 (--1MonitorDescriptorState@DxgMonitor@@QEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::_CleanupMonitorDescriptors(
        DxgMonitor::MonitorDescriptorState *this)
{
  _QWORD **v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx

  v1 = (_QWORD **)((char *)this + 168);
  if ( *v1 != v1 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 1588;
    while ( 1 )
    {
      v2 = *v1;
      if ( *v1 == v1 )
        break;
      if ( (_QWORD **)v2[1] != v1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
        __fastfail(3u);
      *v1 = v3;
      v3[1] = v1;
      v4 = v2 - 4;
      if ( !v2 )
        v4 = 0LL;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
    }
  }
  return 0LL;
}
