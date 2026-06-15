/*
 * XREFs of _CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor$5 @ 0x140092CAC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CAPOInstance *__fastcall CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<CAPOInstance,wistd::default_delete<CAPOInstance>>::~unique_ptr<CAPOInstance,wistd::default_delete<CAPOInstance>>((CAPOInstance **)(a2 + 120));
}
