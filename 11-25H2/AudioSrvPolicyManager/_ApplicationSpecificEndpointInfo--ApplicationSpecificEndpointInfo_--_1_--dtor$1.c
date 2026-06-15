/*
 * XREFs of _ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo_::_1_::dtor$1 @ 0x18004D3CA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 16LL));
}
