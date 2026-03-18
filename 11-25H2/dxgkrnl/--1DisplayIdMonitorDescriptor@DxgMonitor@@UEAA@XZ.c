/*
 * XREFs of ??1DisplayIdMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x140279000
 * Callers:
 *     ??_GDisplayIdMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x140090F90 (--_GDisplayIdMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 */

void __fastcall DxgMonitor::DisplayIdMonitorDescriptor::~DisplayIdMonitorDescriptor(void **this)
{
  *this = &DxgMonitor::DisplayIdMonitorDescriptor::`vftable';
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(this + 7);
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(this + 2);
}
