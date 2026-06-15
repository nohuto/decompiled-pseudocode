/*
 * XREFs of _CAudioProcessor::AttachEndpointToConnection_::_1_::dtor$0 @ 0x140093100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioProcessor::AttachEndpointToConnection_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CProcessorTransaction::operator delete(*(void **)(a2 + 96));
}
