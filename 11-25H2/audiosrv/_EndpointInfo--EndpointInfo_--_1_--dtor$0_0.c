/*
 * XREFs of _EndpointInfo::EndpointInfo_::_1_::dtor$0_0 @ 0x1801693BA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointInfo::EndpointInfo_::_1_::dtor_0_0(__int64 a1, __int64 a2)
{
  return std::wstring::_Tidy_deallocate(*(_QWORD *)(a2 + 64));
}
