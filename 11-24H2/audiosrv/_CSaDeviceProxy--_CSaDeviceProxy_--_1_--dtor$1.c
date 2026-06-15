/*
 * XREFs of _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$1 @ 0x18016B92E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

SaDeviceParams *__fastcall CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>((SaDeviceParams **)(*(_QWORD *)(a2 + 224) + 48LL));
}
