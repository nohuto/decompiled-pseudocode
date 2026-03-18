/*
 * XREFs of ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1401B3EEC
 * Callers:
 *     EtwInitializeAsyncKeyMonitor @ 0x1400C67DC (EtwInitializeAsyncKeyMonitor.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

CAsyncKeyEventMonitor *__fastcall CAsyncKeyEventMonitor::`scalar deleting destructor'(CAsyncKeyEventMonitor *this)
{
  if ( this )
    GreDeleteFastMutex((char *)this);
  return this;
}
