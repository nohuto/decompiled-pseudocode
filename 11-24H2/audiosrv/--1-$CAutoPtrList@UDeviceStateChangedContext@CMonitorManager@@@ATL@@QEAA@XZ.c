/*
 * XREFs of ??1?$CAutoPtrList@UDeviceStateChangedContext@CMonitorManager@@@ATL@@QEAA@XZ @ 0x180117354
 * Callers:
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$5 @ 0x180170C98 (_CMonitorManager--CMonitorManager_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAutoPtrList<CMonitorManager::DeviceStateChangedContext>::~CAutoPtrList<CMonitorManager::DeviceStateChangedContext>(
        __int64 *a1)
{
  ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::RemoveAll(a1);
}
