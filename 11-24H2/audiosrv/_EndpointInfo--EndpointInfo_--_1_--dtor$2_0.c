/*
 * XREFs of _EndpointInfo::EndpointInfo_::_1_::dtor$2_0 @ 0x180172CA8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointInfo::EndpointInfo_::_1_::dtor_2_0(__int64 a1, __int64 a2)
{
  return std::wstring::_Tidy_deallocate(*(_QWORD *)(a2 + 64) + 64LL, a2);
}
