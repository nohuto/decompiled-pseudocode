/*
 * XREFs of _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$11 @ 0x18004C3B6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor_11(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::ComPtr<ApplicationSpecificEndpointInfo>::~ComPtr<ApplicationSpecificEndpointInfo>((_QWORD *)(a2 + 48));
}
