/*
 * XREFs of ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1400590E0
 * Callers:
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@W7EAAPEAXI@Z @ 0x140090F50 (--_EEdidMonitorDescriptor@DxgMonitor@@W7EAAPEAXI@Z.c)
 *     ?CopyInstance@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1402782B0 (-CopyInstance@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@DxgMonit.c)
 *     ?CreateFromSingleEdidBlob@EdidMonitorDescriptor@DxgMonitor@@SAJAEAU_DXGK_MONITOR_DESCRIPTOR@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x1402784B8 (-CreateFromSingleEdidBlob@EdidMonitorDescriptor@DxgMonitor@@SAJAEAU_DXGK_MONITOR_DESCRIPTOR@@AEA.c)
 *     ?CopyWithoutOverrides@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1403E2BC0 (-CopyWithoutOverrides@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1403EB2C4 (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x1403F9A78 (--1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ.c)
 */

DxgMonitor::EdidMonitorDescriptor *__fastcall DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'(
        DxgMonitor::EdidMonitorDescriptor *this,
        char a2)
{
  DxgMonitor::EdidMonitorDescriptor::~EdidMonitorDescriptor(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
