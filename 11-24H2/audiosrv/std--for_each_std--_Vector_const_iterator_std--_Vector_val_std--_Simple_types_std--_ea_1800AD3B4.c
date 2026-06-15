/*
 * XREFs of std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_7b145c4c6aad9512c6da1a4784ceeafc___ @ 0x1800AD3B4
 * Callers:
 *     ?EnsureProcessSubmixInSubmixContext@CProcessSubmixManager@@AEAAJAEBV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@PEAUIProcessSubmixProxy@@@Z @ 0x18009B4BC (-EnsureProcessSubmixInSubmixContext@CProcessSubmixManager@@AEAAJAEBV-$unique_ptr@VCAppSubmixClie.c)
 * Callees:
 *     _lambda_7b145c4c6aad9512c6da1a4784ceeafc_::operator()_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____const__ @ 0x1800AC96C (_lambda_7b145c4c6aad9512c6da1a4784ceeafc_--operator()_std--unique_ptr_CAppSubmixClient_std--defa.c)
 */

__int64 __fastcall std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_7b145c4c6aad9512c6da1a4784ceeafc___(
        __int64 a1,
        _QWORD **a2,
        _QWORD **a3,
        __int64 a4)
{
  _QWORD **i; // rdi
  __int64 result; // rax
  __int64 v9; // xmm1_8

  for ( i = a2; i != a3; ++i )
    lambda_7b145c4c6aad9512c6da1a4784ceeafc_::operator()_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____const__(
      a4,
      i);
  result = a1;
  v9 = *(_QWORD *)(a4 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
