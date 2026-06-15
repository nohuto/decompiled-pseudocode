/*
 * XREFs of _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$6 @ 0x140093402
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 328));
}
