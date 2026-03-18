/*
 * XREFs of ??1DisplayIdMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x1402804F0
 * Callers:
 *     ??_GDisplayIdMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1400922E0 (--_GDisplayIdMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 */

void __fastcall DxgMonitor::DisplayIdMonitorDescriptor::~DisplayIdMonitorDescriptor(void **this)
{
  *this = &DxgMonitor::DisplayIdMonitorDescriptor::`vftable';
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(this + 8);
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(this + 2);
}
