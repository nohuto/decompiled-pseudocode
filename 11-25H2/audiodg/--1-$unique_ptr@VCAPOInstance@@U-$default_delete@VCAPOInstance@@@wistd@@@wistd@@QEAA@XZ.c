/*
 * XREFs of ??1?$unique_ptr@VCAPOInstance@@U?$default_delete@VCAPOInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x1400581E8
 * Callers:
 *     _CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor$5 @ 0x14009324C (_CAPOProcessNode--CreateAPOProcessNode_--_1_--dtor$5.c)
 * Callees:
 *     ??_GCAPOInstance@@QEAAPEAXI@Z @ 0x1400377A8 (--_GCAPOInstance@@QEAAPEAXI@Z.c)
 */

CAPOInstance *__fastcall wistd::unique_ptr<CAPOInstance,wistd::default_delete<CAPOInstance>>::~unique_ptr<CAPOInstance,wistd::default_delete<CAPOInstance>>(
        CAPOInstance **a1)
{
  CAPOInstance *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CAPOInstance::`scalar deleting destructor'(result);
  return result;
}
