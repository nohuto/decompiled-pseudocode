/*
 * XREFs of ??_GMultiMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x140091BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1MultiMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x140091B78 (--1MultiMonitorDescriptor@DxgMonitor@@UEAA@XZ.c)
 */

DxgMonitor::MultiMonitorDescriptor *__fastcall DxgMonitor::MultiMonitorDescriptor::`scalar deleting destructor'(
        DxgMonitor::MultiMonitorDescriptor *this,
        char a2)
{
  DxgMonitor::MultiMonitorDescriptor::~MultiMonitorDescriptor(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
