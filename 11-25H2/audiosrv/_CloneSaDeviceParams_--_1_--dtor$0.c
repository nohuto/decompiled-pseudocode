/*
 * XREFs of _CloneSaDeviceParams_::_1_::dtor$0 @ 0x18016015F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

SaDeviceParams *__fastcall CloneSaDeviceParams_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>((SaDeviceParams **)(a2 + 88));
}
