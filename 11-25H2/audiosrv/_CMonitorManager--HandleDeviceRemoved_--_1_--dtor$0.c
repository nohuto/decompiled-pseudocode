/*
 * XREFs of _CMonitorManager::HandleDeviceRemoved_::_1_::dtor$0 @ 0x1801609AB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitorManager::HandleDeviceRemoved_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CInterfaceArray<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>::~CInterfaceArray<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>(a2 + 64);
}
