/*
 * XREFs of _CEndpointCharacteristicsCache::CEndpointCharacteristicsCache_::_1_::dtor$5 @ 0x180168188
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristicsCache::CEndpointCharacteristicsCache_::_1_::dtor_5(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  std::list<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>::~list<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>(
    (__int64 *)(*(_QWORD *)(a2 + 56) + 8LL),
    a2,
    a3);
}
