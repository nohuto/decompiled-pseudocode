/*
 * XREFs of ??1?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@QEAA@XZ @ 0x1800A4F7C
 * Callers:
 *     _CMonitorManager::QueueDeviceStateChanged_::_1_::dtor$1 @ 0x1801606AE (_CMonitorManager--QueueDeviceStateChanged_--_1_--dtor$1.c)
 *     _CMonitorManager::ProcessDeviceStateChanged_::_1_::dtor$2 @ 0x180160973 (_CMonitorManager--ProcessDeviceStateChanged_--_1_--dtor$2.c)
 * Callees:
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x18002C510 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 */

CMonitorManager::DeviceStateChangedContext *__fastcall ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>::~CAutoPtr<CMonitorManager::DeviceStateChangedContext>(
        CMonitorManager::DeviceStateChangedContext **a1)
{
  CMonitorManager::DeviceStateChangedContext *v2; // rcx
  CMonitorManager::DeviceStateChangedContext *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
