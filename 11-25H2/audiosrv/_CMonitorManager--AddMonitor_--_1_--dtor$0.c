/*
 * XREFs of _CMonitorManager::AddMonitor_::_1_::dtor$0 @ 0x180167751
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CMonitorManager::AddMonitor_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(*(_QWORD **)(a2 + 56));
}
