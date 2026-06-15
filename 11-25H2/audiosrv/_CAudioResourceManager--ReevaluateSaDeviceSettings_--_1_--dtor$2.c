/*
 * XREFs of _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$2 @ 0x180160E28
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(
           (_QWORD *)(a2 + 208),
           a2,
           a3,
           a4);
}
