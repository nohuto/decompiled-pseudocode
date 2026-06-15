/*
 * XREFs of _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$5 @ 0x18016B986
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>((_QWORD *)(*(_QWORD *)(a2 + 224) + 136LL));
}
