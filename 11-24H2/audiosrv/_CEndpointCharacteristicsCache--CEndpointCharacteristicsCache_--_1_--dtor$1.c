/*
 * XREFs of _CEndpointCharacteristicsCache::CEndpointCharacteristicsCache_::_1_::dtor$1 @ 0x18017178D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristicsCache::CEndpointCharacteristicsCache_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 16LL));
}
