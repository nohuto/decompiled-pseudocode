/*
 * XREFs of _CAudioProcessor::AttachEndpointToConnection_::_1_::dtor$1 @ 0x1400936B2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioProcessor::AttachEndpointToConnection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CConnectionNode>::~CAutoPtr<CConnectionNode>((__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 40));
}
