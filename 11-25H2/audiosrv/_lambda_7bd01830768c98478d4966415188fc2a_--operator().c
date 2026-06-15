/*
 * XREFs of _lambda_7bd01830768c98478d4966415188fc2a_::operator() @ 0x1800FC550
 * Callers:
 *     ?GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUIMulticastProvider@@@Z @ 0x1800FCA14 (-GetCompatibleMulticastProvider@CMulticastSessionManager@@AEAAJAEAV-$vector@V-$com_ptr_t@VCEndpo.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_7bd01830768c98478d4966415188fc2a_::operator()(_QWORD **a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *i; // rcx

  v2 = (_QWORD *)(*a1)[1];
  for ( i = (_QWORD *)**a1; i != v2 && (*i != *a2 || i[1] != a2[1]); i += 2 )
    ;
  return i == v2;
}
