/*
 * XREFs of _CMonitorManager::CMonitorManager_::_1_::dtor$5 @ 0x180170C98
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitorManager::CMonitorManager_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  ATL::CAutoPtrList<CMonitorManager::DeviceStateChangedContext>::~CAutoPtrList<CMonitorManager::DeviceStateChangedContext>((__int64 *)(*(_QWORD *)(a2 + 48) + 200LL));
}
