/*
 * XREFs of _UseSupportedConnectorMode_::_1_::dtor$2 @ 0x1801650BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UseSupportedConnectorMode_::_1_::dtor_2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(
           (_QWORD *)(a2 + 56),
           a2,
           a3,
           a4);
}
