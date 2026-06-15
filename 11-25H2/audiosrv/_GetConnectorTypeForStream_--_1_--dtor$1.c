/*
 * XREFs of _GetConnectorTypeForStream_::_1_::dtor$1 @ 0x180163669
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetConnectorTypeForStream_::_1_::dtor_1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(
           (_QWORD *)(a2 + 64),
           a2,
           a3,
           a4);
}
