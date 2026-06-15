/*
 * XREFs of _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$7 @ 0x1801634A7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  return std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(
           (_QWORD *)(a2 + 128),
           a2,
           a3,
           a4);
}
