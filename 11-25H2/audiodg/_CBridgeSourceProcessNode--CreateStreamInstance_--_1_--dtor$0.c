/*
 * XREFs of _CBridgeSourceProcessNode::CreateStreamInstance_::_1_::dtor$0 @ 0x1400969A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CEndpointInstance *__fastcall CBridgeSourceProcessNode::CreateStreamInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CEndpointInstance>::~unique_ptr<CEndpointInstance>((CEndpointInstance **)(a2 + 96));
}
