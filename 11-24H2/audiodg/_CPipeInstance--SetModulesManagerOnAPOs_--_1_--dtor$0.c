/*
 * XREFs of _CPipeInstance::SetModulesManagerOnAPOs_::_1_::dtor$0 @ 0x140091570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::SetModulesManagerOnAPOs_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 112));
}
