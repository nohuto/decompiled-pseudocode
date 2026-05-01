/*
 * XREFs of _CApplicationManager::ClearMonitorOverride_::_1_::dtor$0 @ 0x180398314
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::ClearMonitorOverride_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 64));
}
