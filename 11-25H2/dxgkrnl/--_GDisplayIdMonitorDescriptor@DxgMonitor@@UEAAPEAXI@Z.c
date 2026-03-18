/*
 * XREFs of ??_GDisplayIdMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x140090F90
 * Callers:
 *     ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140279350 (-CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@Dxg.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DisplayIdMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x140279000 (--1DisplayIdMonitorDescriptor@DxgMonitor@@UEAA@XZ.c)
 */

DxgMonitor::DisplayIdMonitorDescriptor *__fastcall DxgMonitor::DisplayIdMonitorDescriptor::`scalar deleting destructor'(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        char a2)
{
  DxgMonitor::DisplayIdMonitorDescriptor::~DisplayIdMonitorDescriptor(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
