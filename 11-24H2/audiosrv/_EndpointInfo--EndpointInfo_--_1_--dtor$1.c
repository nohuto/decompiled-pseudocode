/*
 * XREFs of _EndpointInfo::EndpointInfo_::_1_::dtor$1 @ 0x18016F7F5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointInfo::EndpointInfo_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::wstring::_Tidy_deallocate(*(_QWORD *)(a2 + 48) + 32LL, a2);
}
