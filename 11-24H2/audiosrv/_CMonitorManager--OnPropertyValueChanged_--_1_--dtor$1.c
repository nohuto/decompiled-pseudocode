/*
 * XREFs of _CMonitorManager::OnPropertyValueChanged_::_1_::dtor$1 @ 0x1801698CF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PropertyChangedContext *__fastcall CMonitorManager::OnPropertyValueChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<PropertyChangedContext>::~CAutoPtr<PropertyChangedContext>((PropertyChangedContext **)(a2 + 64));
}
