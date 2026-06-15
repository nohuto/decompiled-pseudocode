/*
 * XREFs of _CMonitorManager::QueueDeviceStateChanged_::_1_::dtor$1 @ 0x1801682E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CMonitorManager::DeviceStateChangedContext *__fastcall CMonitorManager::QueueDeviceStateChanged_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>::~CAutoPtr<CMonitorManager::DeviceStateChangedContext>((CMonitorManager::DeviceStateChangedContext **)(a2 + 40));
}
