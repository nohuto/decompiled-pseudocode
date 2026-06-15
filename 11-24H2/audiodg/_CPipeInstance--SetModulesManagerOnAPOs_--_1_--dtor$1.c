/*
 * XREFs of _CPipeInstance::SetModulesManagerOnAPOs_::_1_::dtor$1 @ 0x1400921FB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::SetModulesManagerOnAPOs_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 120));
}
