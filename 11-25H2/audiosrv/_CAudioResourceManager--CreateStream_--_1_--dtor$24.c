/*
 * XREFs of _CAudioResourceManager::CreateStream_::_1_::dtor$24 @ 0x180164412
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::CreateStream_::_1_::dtor_24(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(
           (_QWORD *)(a2 + 720),
           a2,
           a3,
           a4);
}
