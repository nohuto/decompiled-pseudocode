/*
 * XREFs of ??1?$CAutoPtr@VCAPONode@@@ATL@@QEAA@XZ @ 0x14003D274
 * Callers:
 *     __lambda_4f5bca04da2ba347195d47ea7d1a4d66_::operator()_::_1_::dtor$4 @ 0x140091E96 (__lambda_4f5bca04da2ba347195d47ea7d1a4d66_--operator()_--_1_--dtor$4.c)
 * Callees:
 *     ??_GCAPONode@@QEAAPEAXI@Z @ 0x14000B930 (--_GCAPONode@@QEAAPEAXI@Z.c)
 */

CAPONode *__fastcall ATL::CAutoPtr<CAPONode>::~CAutoPtr<CAPONode>(CAPONode **a1)
{
  CAPONode *v2; // rcx
  CAPONode *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CAPONode::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
