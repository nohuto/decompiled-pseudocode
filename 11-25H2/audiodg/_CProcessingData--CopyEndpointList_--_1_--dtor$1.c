/*
 * XREFs of _CProcessingData::CopyEndpointList_::_1_::dtor$1 @ 0x1400922E1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessingData::CopyEndpointList_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(*(_QWORD *)(a2 + 88) + 112LL));
}
